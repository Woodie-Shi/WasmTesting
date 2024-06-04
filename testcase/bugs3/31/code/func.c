/*
yarpgen version 2.0 (build 91d3bf8 on 2024:03:02)
Seed: 565041883
Invocation: /home/nju/yarpgen/build/yarpgen --std=c -o /home/nju/WASM-testing/src/temp/4
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test(signed char var_2, long long int var_8, int zero) {
    var_15 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (unsigned char)15)), (min((var_8), (((/* implicit */long long int) ((short) var_8)))))));
    var_16 ^= ((unsigned char) var_2);
}
