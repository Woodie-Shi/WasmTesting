/*
yarpgen version 2.0 (build 91d3bf8 on 2024:03:02)
Seed: 665553337
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
void test(short var_1, unsigned short var_3, signed char var_4, long long int var_5, unsigned short var_6, _Bool var_8, unsigned short var_10, int zero, unsigned int arr_0 [21] [21] , _Bool arr_3 [21] ) {
    var_12 = ((/* implicit */short) var_8);
    /* LoopSeq 1 */
    for (unsigned short i_0 = ((((/* implicit */int) ((/* implicit */unsigned short) var_1))) - (10438))/*0*/; i_0 < (unsigned short)21/*21*/; i_0 += ((((/* implicit */int) var_10)) - (11614))/*3*/) 
    {
        var_13 = max((var_3), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_6))))));
        var_14 = ((((/* implicit */_Bool) var_4)) ? (max((var_5), (((/* implicit */long long int) arr_0 [i_0] [i_0])))) : (((/* implicit */long long int) ((arr_0 [i_0] [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
        var_15 = ((/* implicit */unsigned int) arr_3 [17U]);
    }
}
