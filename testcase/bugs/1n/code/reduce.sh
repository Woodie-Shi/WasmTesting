#!/bin/bash

ulimit -t 10

emcc -w -sTOTAL_MEMORY=2000MB -sALLOW_MEMORY_GROWTH=1 driver.c func.c -Oz -o ./command1.wasm > out 2>&1

if grep -Fq "LLVM ERROR: LEB is outside Varint32 range" out; then
  exit 0
else
  exit 1
fi
