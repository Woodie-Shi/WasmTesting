#!/bin/bash

ulimit -t 10

emcc -w -sTOTAL_MEMORY=2000MB -sALLOW_MEMORY_GROWTH=1 driver.c func.c -O0 -o ./command1.wasm > out 2>&1

if grep -Fq "LLVM ERROR: LEB is outside Varint32 range" out; then
  clang -w driver.c func.c -o p > out 2>&1
  if [ $? -eq 0 ]; then
    exit 0
  fi
fi

exit 1
