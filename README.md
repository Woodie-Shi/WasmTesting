# WasmTesting
This project was instructed by Ph.D. student Maolin Sun(https://merlinsun.github.io/).
Code can be found here: https://github.com/merlinsun/WASM-testing
## Requirements

Before using this tool, ensure that your system meets the following requirements:

- Python 3.8
- Emscripten
- Wasmer (or any other compatible WebAssembly runtime)
- Yarpgen

## Installation

### Emscripten
Follow the instructions on the [Emscripten](https://emscripten.org/docs/getting_started/downloads.html) website to install Emscripten.

### Wasmer
Install Wasmer by following the guide on the [Wasmer](https://github.com/wasmerio/wasmer) repo. Alternatively, use any other compatible WebAssembly runtime of your choice.

### Yarpgen
Install Yarpgen by cloning the repository from GitHub and following the build instructions provided in its README file. The Yarpgen repository can be found at https://github.com/intel/yarpgen.


## Configuration

To use the tool, you need to adjust several global constants in the `__main__.py` file according to your environment setup. Open `__main__.py` in your favorite text editor and modify the following constants:

```Python
# Adjust the following constants according to your environment
TEMP_DIR_BASE = Path(__file__).parent / "temp"
BUG_DIR = Path(__file__).parent / "bugs"
CORE_COUNT = multiprocessing.cpu_count() - 2  # Adjust based on available CPU cores
EMSDK_BIN_DIR = Path("/path/to/emsdk/upstream/bin")  # Update with your Emscripten bin directory
EMSDK_EMSCRIPTEN_DIR = Path("/path/to/emsdk/upstream/emscripten")  # Update with your Emscripten directory
NODE_EXECUTABLE = "/path/to/.wasmer/bin/wasmer"  # Update with your Wasmer executable path
YARPGEN_PATH = "/path/to/yarpgen/build/yarpgen"  # Update with your Yarpgen executable path
```

## Usage

After configuring the tool, run it using the following command:

```Python
python3 __main__.py
```

The tool will automatically generate test cases, compile them using Emscripten, and execute them with the specified WebAssembly runtime. 

If any bugs are detected, they will be saved to the directory specified by the `BUG_DIR` constant.


## Bug Report

Please ensure the programs (e.g., `.c` or `.wasm`) are reduced by [C-reduce](https://github.com/csmith-project/creduce) before reporting.
