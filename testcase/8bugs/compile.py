import os
import shlex
import subprocess
import re

#clang_flags = ["-o"]
error_suffix = "n"  

current_dir = os.getcwd() 
folders = [f for f in os.listdir(current_dir) if os.path.isdir(f) and re.match(r"\d+", f)]

for folder in folders:
    folder_path = os.path.join(current_dir, folder)
    code_path = os.path.join(folder_path, "code")
    c_files = [f for f in os.listdir(code_path) if f.endswith(".c")]

    compile_warry = ["-w"]
    compile_command = ["clang"] + compile_warry + [os.path.join(code_path, f) for f in c_files]
    
    #compile_command = " ".join(shlex.quote(arg) for arg in compile_command) + " " + os.path.join(folder_path, "code", "p")
    print(compile_command)
    compile_process = subprocess.run(compile_command, stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)

    if compile_process.returncode != 0:
        new_folder_name = folder + error_suffix
        os.rename(folder_path, os.path.join(current_dir, new_folder_name))
        print(f"Compilation failed for folder {folder}. Renamed to {new_folder_name}")
    else:
        print(f"Compilation successful for folder {folder}")