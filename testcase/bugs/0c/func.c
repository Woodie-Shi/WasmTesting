/*
yarpgen version 2.0 (build 91d3bf8 on 2024:03:02)
Seed: 3078059450
Invocation: /home/nju/yarpgen/build/yarpgen --std=c -o /home/nju/WASM-testing/src/temp/0
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
void test(_Bool var_1, unsigned short var_2, int var_5, unsigned short var_8, signed char var_9, signed char var_10, int zero) {
    var_13 = ((/* implicit */_Bool) ((min((((/* implicit */int) min((var_8), (((/* implicit */unsigned short) var_10))))), (max((((/* implicit */int) (_Bool)0)), (var_5))))) >> (((((/* implicit */_Bool) ((((/* implicit */int) var_2)) - (((/* implicit */int) var_9))))) ? (min((((/* implicit */unsigned int) var_1)), (4294967274U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_9)))))))));
    var_14 = ((/* implicit */signed char) var_1);
}
