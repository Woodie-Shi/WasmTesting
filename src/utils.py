import os
import subprocess
import shutil
from pathlib import Path

# Define known failure messages for filtering
KNOWN_FAILS = [
    "Assertion `Init->containsErrors() && 'Dependent code should only occur in error-recovery path.'",
    "initial memory too small",
    "llvm::PMTopLevelManager::schedulePass",
    "llvm::FPPassManager::runOnFunction", "Instantiation failed", "Unable to instantiate"
]
DEBUG = False

def read_passes_from_file(file_path, transformation=None):
    """
    General function to read optimization passes from a file.
    Allows optional transformation of each line (e.g., extracting parts of it).
    """
    with open(file_path, "r") as file:
        if transformation:
            return [transformation(line.strip()) for line in file if transformation(line.strip())]
        else:
            return [line.strip() for line in file]

def llvm_opt_pass():
    passes = read_passes_from_file("trans_pass.txt")
    for remove_pass in ["-wasm-exception-info", "-metarenamer", "-targetpassconfig"]:
        if remove_pass in passes:
            passes.remove(remove_pass)
    return passes

# def read_binaryen_pass():
#     transformation = lambda line: line.split(" ")[2].strip() if "  --" in line else None
#     passes = read_passes_from_file("wasm_opt_pass.txt", transformation)
#     if "--spill-pointers" in passes:
#         passes.remove("--spill-pointers")
#     return passes

def read_binaryen_pass():
    passes = []
    with open("wasm_opt_pass.txt", "r") as f:
        lines = f.readlines()
    for line in lines:
        if "  --" in line:
            passes.append(line.split(" ")[2]) 

    passes.remove("--spill-pointers")
    # remove some already detected options #######################################################################
    dected = ["--remove-imports", "--remove-memory", "--stub-unsupported-js", "--stack-check", "--minify-imports"]
    for remove_pass in dected:
        if remove_pass in passes:
            passes.remove(remove_pass)
    # ############################################################################################################
    return passes

LLVM_PASS = llvm_opt_pass()
BINARYEN_PASS = read_binaryen_pass()

def run_process(command, timeout=30, cwd=None, capture_output=True, source=None, bug_dir=None):
    """
    Utility function to run a subprocess with timeout and optional working directory.
    Returns stdout and stderr, capturing output if specified.
    """
    try:
        result = subprocess.run(command, stdout=subprocess.PIPE if capture_output else None, 
                                stderr=subprocess.PIPE if capture_output else None, 
                                check=True, text=True, timeout=timeout if timeout else None, cwd=cwd)
        return result.stdout, result.stderr
    
    except subprocess.CalledProcessError as e:
        if DEBUG:
            print(f"Error running command: {e.cmd}\n{e.stderr}")
        if e.returncode == 134 and source:
            record_bug(bug_dir, source, output="SEGFAULT", option="opt", command=command)
        elif e.returncode == 139 and source:
            record_bug(bug_dir, source, output="SEGABRT", option="opt", command=command)
        return e.stdout, e.stderr
    except Exception as e:
        if DEBUG:
            print(f"Error running command: {command}\n{str(e)}")
        return "", str(e)

def run_yarpgen(yarpgen_path, program_type, output_dir):
    if DEBUG:
        print(f"Running YARPGen with program type '{program_type}' and output directory '{output_dir}'")
    command = [yarpgen_path, "--std=" + program_type, "-o", output_dir]
    run_process(command)

def run_csmith(output_dir):
    output_file_path = Path(output_dir) / "test.c"
    with output_file_path.open("w") as output_file:
        run_process(["csmith"], stdout=output_file)

def run_binaryen(bin_dir, opt, wasm_path, bug_dir=None):
    command = [Path(bin_dir), wasm_path] + opt + ["-o", wasm_path]
    run_process(command, bug_dir=bug_dir, source=wasm_path)

def run_wasm(bin, program, bug_dir=None):
    stdout, stderr = run_process([bin, program], source=program, bug_dir=bug_dir)
    if DEBUG:
        print(f"stdout: {stdout}\nstderr: {stderr}")
    return stdout, stderr

def run_em(emcc_path, opt_path, program, exec_path, opt=None, level=None, bug_dir=None):
    """
    Function to compile a program using Emscripten, possibly applying optimization passes.
    """
    try:
        command = []
        if opt is None:
            # check the argument "program" contains one or multiple source files
            if isinstance(program, list):
                command = [emcc_path] + program + ["-w", "-sTOTAL_MEMORY=2000MB", "-sALLOW_MEMORY_GROWTH=1", "-o", exec_path] + ([level] if level else [])
            else:
                command = [emcc_path, program, "-w", "-sTOTAL_MEMORY=2000MB", "-sALLOW_MEMORY_GROWTH=1", "-o", exec_path] + ([level] if level else [])
        else:
            """
            # Due to the updated feature of the Emscripten compiler, the following code is deprecated.
            bc_file = Path(program).with_suffix(".bc")
            command1 = [emcc_path, "-c", "-emit-llvm", "-O3", "-w", "-mllvm", "-disable-llvm-optzns", "-sTOTAL_MEMORY=2000MB", "-sALLOW_MEMORY_GROWTH=1", program, "-o", str(bc_file)]
            run_process(command1)
            if not bc_file.exists():
                return "", "Failed to generate bitcode file."
            new_bc_file = bc_file.with_suffix(".opt.bc")
            command2 = [opt_path, "-enable-new-pm=0"] + opt[0] + [str(bc_file), "-o", str(new_bc_file)]
            run_process(command2)
            if not new_bc_file.exists():
                return "", "Failed to optimize bitcode file."
            command3 = [emcc_path, "-sTOTAL_MEMORY=2000MB", "-w", "-sALLOW_MEMORY_GROWTH=1", opt[1], str(new_bc_file), "-o", exec_path]
            stdout, stderr = run_process(command3)
            return stdout, stderr
        """
            if isinstance(program, list):
                command = [emcc_path] + program + ["-w", "-sTOTAL_MEMORY=2000MB", "-sALLOW_MEMORY_GROWTH=1", "-o", exec_path]
            else:
                command = [emcc_path, program, "-w", "-sTOTAL_MEMORY=2000MB", "-sALLOW_MEMORY_GROWTH=1", opt, "-o", exec_path]

        if command:  # This checks if the command list is not empty
            stdout, stderr = run_process(command, bug_dir=bug_dir, source=program)
            return stdout, stderr
    except Exception as e:
        return "", str(e)

def check_compile(bug_folder, source, clang_out=None, clang_err=None, em_out=None, em_err=None, source_folder=None, opt=None):
    """
    Function to check the compilation output for errors and record them as bugs if found.
    """
    def has_known_fail(message):
        return any(fail_msg in message for fail_msg in KNOWN_FAILS)

    def should_record_bug(output, error):
        return "PLEASE submit a bug report" in output or "PLEASE submit a bug report" in error and not has_known_fail(output + error)

    if should_record_bug(clang_out or "", clang_err or ""):
        record_bug(bug_folder, source, output=clang_out + "\n" + clang_err, source_folder=source_folder, option=opt)
    if should_record_bug(em_out or "", em_err or ""):
        record_bug(bug_folder, source, output=em_out + "\n" + em_err, source_folder=source_folder, option=opt)

def record_bug(bug_folder, source, buggy_exec=None, buggy_wasm=None, option=None, output=None, source_folder=None, level=None, binaryen_opt=None, command=None):
    """
    Function to record identified bugs into a specified folder.
    """
    print(f"Recording bug in folder: {bug_folder}")
    bug_folder_path = Path(bug_folder)
    bug_folder_path.mkdir(exist_ok=True)
    bug_count = sum(1 for _ in bug_folder_path.iterdir() if _.is_dir())
    bug_dir = bug_folder_path / str(bug_count)
    bug_dir.mkdir()

    if source_folder:
        shutil.copytree(source_folder, bug_dir / "code")
    else:
        if buggy_exec: shutil.copy2(buggy_exec, bug_dir)
        if buggy_wasm: shutil.copy2(buggy_wasm, bug_dir)
    if isinstance(source, list):
        for s in source:
            if os.path.exists(s): shutil.copy2(s, bug_dir)
    elif os.path.exists(source):
        shutil.copy2(source, bug_dir)

    error_log = f"Source path: {source}\n"
    if level: error_log += f"Optimization level: {level}\n"
    if option: error_log += f"Option: {option}\n"
    if binaryen_opt: error_log += f"Binaryen optimization pass: {binaryen_opt}\n"
    if output: error_log += f"Output:\n{output}\n"
    if command: 
        if isinstance(command, list):
            command = " ".join(command)
        elif isinstance(command, str):
            command = command
        error_log += f"Command: {command}\n"
    create_file(error_log, bug_dir / "error_logs.txt")

def create_file(data, path):
    """
    Function to create a file with given data.
    """
    with open(path, "w") as file:
        file.write(data)

def get_test_programs(path_to_directory):
    c_programs = []
    cpp_programs = []

    for root, dirs, files in os.walk(path_to_directory):
        for file in files:
            file_type = os.path.splitext(file)[-1]
            if file_type == ".cpp":
                cpp_programs.append(os.path.join(root, file))
            elif file_type == ".c":
                c_programs.append(os.path.join(root, file))

    return c_programs, cpp_programs

def check_runtime(bug_folder, source, wasm_out, wasm_err, exec_out, exec_err, wasm_path, exec_path, source_folder=None, opt=None, level=None, binaryen_opt=None):
    """
    Checks the runtime output of both WASM and executable files for discrepancies,
    particularly focusing on 'checksum' values to identify mismatches.
    """
    checksum_in_wasm = "checksum =" in wasm_out
    checksum_in_exec = "checksum =" in exec_out
    output_mismatch = wasm_out.strip() != exec_out.strip()
    
    # if checksum_in_wasm and checksum_in_exec and output_mismatch:
    if output_mismatch:
        # Check if the output mismatch is due to a known build failure
        if any(fail_msg in wasm_out + wasm_err + exec_out + exec_err for fail_msg in KNOWN_FAILS):
            return
        # Detailed reporting for better understanding of the runtime discrepancy
        content = (
            f"First file stdout:\n{exec_out}\n"
            f"First file stderr:\n{exec_err}\n"
            f"Second file stdout:\n{wasm_out}\n"
            f"Sceond file stderr:\n{wasm_err}"
        )
        # Utilize the refined record_bug function for consistent bug recording
        record_bug(
            bug_folder, source, 
            buggy_exec=exec_path, buggy_wasm=wasm_path, 
            output=content, source_folder=source_folder, 
            option=opt, level=level, binaryen_opt=binaryen_opt
        )
