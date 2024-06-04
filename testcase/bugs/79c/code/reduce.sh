#!/bin/bash

ulimit -t 10

emcc -w -sTOTAL_MEMORY=2000MB -sALLOW_MEMORY_GROWTH=1 driver.c func.c -Os -o ./command1.wasm >/dev/null 2>&1 &&
wasm-opt --remove-imports ./command1.wasm -o ./command1.opt.wasm >/dev/null 2>&1 &&
wasmtime ./command1.opt.wasm > out 2>&1

if grep -Fq "error while executing at wasm backtrace" out; then
  exit 0
else
  exit 1
fi
