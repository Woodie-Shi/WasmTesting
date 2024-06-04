/*
yarpgen version 2.0 (build 91d3bf8 on 2024:03:02)
Seed: 668981528
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
void test(_Bool var_3, unsigned short var_9, long long int var_14, short var_15, unsigned long long int var_16, int zero, unsigned int arr_0 [25] , unsigned int arr_1 [25] , long long int arr_2 [25] ) {
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = ((((/* implicit */int) ((/* implicit */short) var_9))) - (2296))/*2*/; i_0 < ((((/* implicit */int) ((/* implicit */short) var_9))) - (2275))/*23*/; i_0 += (short)2/*2*/) 
    {
        var_17 = ((/* implicit */unsigned long long int) arr_2 [i_0 + 1]);
        if (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (arr_2 [i_0 - 1]) : (arr_2 [i_0 - 1]))))
        {
            arr_3 [4ULL] [4ULL] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) < (arr_0 [i_0 + 1])));
            var_18 += ((/* implicit */_Bool) arr_2 [i_0 - 2]);
            var_19 *= ((/* implicit */short) ((arr_1 [i_0 + 2]) ^ (arr_1 [i_0 - 2])));
            var_20 = ((/* implicit */_Bool) arr_0 [i_0 + 2]);
        }

    }
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)99)) : (((/* implicit */int) var_9)))))))) != (((((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_15)))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) (_Bool)1)))))))));
}
