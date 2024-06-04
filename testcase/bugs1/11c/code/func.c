/*
yarpgen version 2.0 (build 91d3bf8 on 2024:03:02)
Seed: 2576300086
Invocation: /home/nju/yarpgen/build/yarpgen --std=c -o /home/nju/WASM-testing/src/temp/5
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
void test(unsigned short var_0, unsigned char var_1, _Bool var_2, unsigned long long int var_3, int var_4, unsigned int var_6, signed char var_7, long long int var_8, signed char var_9, int var_10, int zero, _Bool arr_0 [21] , unsigned short arr_2 [21] [21] ) {
    var_11 = ((/* implicit */unsigned short) max((((unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37237))) : (var_3)))), (((/* implicit */unsigned int) ((((((/* implicit */int) var_9)) + (2147483647))) << (((((((/* implicit */_Bool) (unsigned short)16196)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)49330)))) - (129))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (2ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62853)))))) ? (min((18446744073709551605ULL), (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((var_8) + (9223372036854775807LL))) << (((((/* implicit */int) var_0)) - (51863))))) <= (((/* implicit */long long int) var_6)))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)33534)) >> (((/* implicit */int) var_2))))) ? (((/* implicit */long long int) var_6)) : (((long long int) 0ULL))))))) + (1U))/*1*/; i_0 < ((((/* implicit */unsigned int) var_10)) - (1851022249U))/*19*/; i_0 += ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_8)))) ? (max((15356676986850897807ULL), (((/* implicit */unsigned long long int) max((1504813514), (((/* implicit */int) (unsigned short)14))))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0)))))))) - (1000992653U))/*2*/) 
    {
        var_12 = ((/* implicit */unsigned char) (!(((((/* implicit */int) (unsigned short)0)) >= (((/* implicit */int) max((arr_2 [(unsigned short)11] [i_0]), (((/* implicit */unsigned short) arr_0 [i_0])))))))));
        arr_4 [i_0] = ((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) var_4)), (var_3)))));
        var_13 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((int) 18446744073709551600ULL)))))));
        var_14 += (unsigned short)3;
    }
}
