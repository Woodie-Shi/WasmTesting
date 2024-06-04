#!/bin/bash

ulimit -t 100

clang func.c driver.c >/dev/null 2>&1 && emcc -w -sTOTAL_MEMORY=2000MB -sALLOW_MEMORY_GROWTH=1 driver.c func.c -o ./command0.wasm > out 2>&1

if grep -Fq "LEB is outside Varint32 range" out; then
  exit 0
else
  exit 1
fi
