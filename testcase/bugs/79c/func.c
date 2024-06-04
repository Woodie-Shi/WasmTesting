/*
yarpgen version 2.0 (build 91d3bf8 on 2024:03:02)
Seed: 1756627496
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
void test(unsigned long long int var_0, short var_4, short var_6, unsigned long long int var_7, int var_8, unsigned short var_10, short var_14, int zero, unsigned short arr_0 [21] , signed char arr_1 [21] ) {
    var_15 = ((/* implicit */short) ((unsigned char) max(((signed char)-2), ((signed char)-2))));
    /* LoopSeq 1 */
    for (signed char i_0 = ((((/* implicit */int) ((/* implicit */signed char) (!(((/* implicit */_Bool) var_4)))))) + (1))/*1*/; i_0 < (signed char)18/*18*/; i_0 += (signed char)4/*4*/) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) max((215318836249520558ULL), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
        var_16 *= ((/* implicit */unsigned char) min((((((((/* implicit */_Bool) 3267223974U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_7))) & (((/* implicit */unsigned long long int) (~(var_8)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_1 [i_0 + 2])))))));
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((_Bool) (((((+(((/* implicit */int) var_14)))) + (2147483647))) >> (((((((/* implicit */_Bool) var_0)) ? (var_8) : (var_8))) + (2050100997)))))))));
    }
    var_18 = ((/* implicit */long long int) ((unsigned int) min((((/* implicit */short) (signed char)-13)), (var_4))));
}
