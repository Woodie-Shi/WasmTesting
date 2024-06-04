/*
yarpgen version 2.0 (build 91d3bf8 on 2024:03:02)
Seed: 4174094530
Invocation: /home/nju/yarpgen/build/yarpgen --std=c -o /home/nju/WASM-testing/src/temp/3
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
void test(unsigned short var_2, unsigned char var_5, unsigned char var_6, long long int var_11, unsigned int var_13, int zero) {
    var_15 = ((/* implicit */long long int) ((unsigned char) ((long long int) var_6)));
    var_16 = ((/* implicit */signed char) max((var_11), (((/* implicit */long long int) min((((/* implicit */int) var_5)), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_2)) : (-1546459284))))))));
}
