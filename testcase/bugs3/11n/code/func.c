/*
yarpgen version 2.0 (build 91d3bf8 on 2024:03:02)
Seed: 2453848190
Invocation: /home/nju/yarpgen/build/yarpgen --std=c -o /home/nju/WASM-testing/src/temp/1
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
void test(signed char var_9, unsigned long long int var_12, unsigned char var_13, int var_14, int zero) {
    var_17 = var_13;
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) var_9))));
    var_19 = ((/* implicit */_Bool) min(((+(var_12))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15)) ? (((((((/* implicit */int) var_9)) + (2147483647))) << (((710215984U) - (710215984U))))) : (min((var_14), (((/* implicit */int) var_9)))))))));
}
