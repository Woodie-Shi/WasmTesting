/*
yarpgen version 2.0 (build 91d3bf8 on 2024:03:02)
Seed: 43152064
Invocation: /home/nju/yarpgen/build/yarpgen --std=c -o /home/nju/WASM-testing/src/temp/7
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
void test(short var_0, short var_8, unsigned short var_9, unsigned char var_12, unsigned int var_15, int var_16, unsigned int var_17, int zero) {
    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */unsigned int) max((((((/* implicit */int) (short)16382)) * (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) min((var_8), ((short)-16383))))))) / (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0))))), (max((((/* implicit */unsigned int) var_16)), (var_15))))))))));
    var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)16382))));
    var_20 |= ((/* implicit */unsigned long long int) var_16);
    var_21 &= ((/* implicit */short) (-(((/* implicit */int) var_12))));
    var_22 = ((/* implicit */short) min((var_22), ((short)16382)));
}
