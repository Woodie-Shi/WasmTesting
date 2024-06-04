#!/bin/bash

ulimit -t 10

emcc -w -sTOTAL_MEMORY=2000MB -sALLOW_MEMORY_GROWTH=1 driver.c func.c -o ./command1.wasm >/dev/null 2>&1 &&
wasm-opt --stub-unsupported-js ./command1.wasm -o ./command1.opt.wasm >/dev/null 2>&1 &&
wasmtime ./command1.opt.wasm > out 2>&1

if [[ -s "out" ]]; then
  exit 1 
else
  exit 0
fi
