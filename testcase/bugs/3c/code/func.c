/*
yarpgen version 2.0 (build 91d3bf8 on 2024:03:02)
Seed: 3259025117
Invocation: /home/nju/yarpgen/build/yarpgen --std=c -o /home/nju/WASM-testing/src/temp/8
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
void test(int var_1, _Bool var_2, _Bool var_3, signed char var_5, signed char var_6, unsigned int var_7, unsigned int var_9, int zero, unsigned char arr_3 [16] , unsigned long long int arr_4 [16] [16] , unsigned int arr_7 [19] [19] ) {
    var_11 = ((/* implicit */int) (-(var_7)));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2ULL/*2*/; i_0 < ((((/* implicit */unsigned long long int) var_2)) + (15ULL))/*15*/; i_0 += ((((/* implicit */unsigned long long int) var_1)) - (1661346974ULL))/*2*/) /* same iter space */
    {
        var_12 = ((/* implicit */_Bool) var_9);
        var_13 = ((/* implicit */short) -1564969452);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 2ULL/*2*/; i_1 < ((((/* implicit */unsigned long long int) var_2)) + (15ULL))/*15*/; i_1 += ((((/* implicit */unsigned long long int) var_1)) - (1661346974ULL))/*2*/) /* same iter space */
    {
        var_14 &= ((/* implicit */unsigned int) (!(((arr_4 [i_1 + 1] [i_1 + 1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
        arr_5 [i_1 - 2] = ((/* implicit */unsigned short) ((long long int) arr_3 [i_1 - 1]));
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) var_5))));
    }
    for (signed char i_2 = ((((/* implicit */int) ((/* implicit */signed char) ((long long int) (!(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) == (var_7)))))))) + (1))/*2*/; i_2 < ((((/* implicit */int) ((/* implicit */signed char) var_3))) + (18))/*18*/; i_2 += (signed char)4/*4*/) 
    {
        arr_9 [i_2 - 2] = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 1069547520U))))) != (((/* implicit */int) var_2))));
        var_16 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) var_1)) : (var_9))))))));
        var_17 = ((/* implicit */int) (+((((+((-9223372036854775807LL - 1LL)))) ^ (((9223372036854775807LL) % (((/* implicit */long long int) arr_7 [i_2 - 2] [i_2 + 1]))))))));
    }
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 809393624)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)83))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_7)));
}
