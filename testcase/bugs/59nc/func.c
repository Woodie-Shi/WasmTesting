/*
yarpgen version 2.0 (build 91d3bf8 on 2024:03:02)
Seed: 555082906
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
void test(unsigned char var_2, unsigned short var_3, unsigned long long int var_5, unsigned char var_8, unsigned long long int var_10, long long int var_11, long long int var_13, unsigned short var_14, unsigned long long int var_16, int zero, _Bool arr_2 [18] , unsigned char arr_4 [15] ) {
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0U/*0*/; i_0 < ((((/* implicit */unsigned int) min((min((var_11), (((/* implicit */long long int) ((((/* implicit */_Bool) 1954068793U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (1954068793U)))))), (min((((/* implicit */long long int) max((var_8), (((/* implicit */unsigned char) (signed char)-70))))), (max((var_13), (((/* implicit */long long int) (signed char)17))))))))) - (171U))/*18*/; i_0 += ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)209)), ((unsigned short)17425))))))) ? (((/* implicit */unsigned long long int) 1465383356854305972LL)) : (((var_10) - (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) + (((/* implicit */int) (signed char)17)))))))))) - (756155570U))/*2*/) 
    {
        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) var_14))));
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) 2340898504U)))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((((/* implicit */int) var_8)) > (((((/* implicit */_Bool) (unsigned short)16691)) ? (((/* implicit */int) (signed char)-41)) : (((/* implicit */int) arr_2 [i_0]))))))))))));
    }
    var_22 = ((/* implicit */long long int) (signed char)-49);
    /* LoopSeq 1 */
    for (unsigned long long int i_1 = 2ULL/*2*/; i_1 < 13ULL/*13*/; i_1 += ((((/* implicit */unsigned long long int) ((signed char) max(((unsigned char)7), (((/* implicit */unsigned char) (_Bool)1)))))) - (3ULL))/*4*/) 
    {
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned long long int) -1465383356854305952LL))))) ? (min((((/* implicit */unsigned long long int) arr_4 [(short)2])), (var_10))) : (((/* implicit */unsigned long long int) var_11))))) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1])))));
        var_24 |= max(((+(((/* implicit */int) ((var_13) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1)))))))), (((/* implicit */int) max((var_2), (var_8)))));
        var_25 = ((/* implicit */signed char) (unsigned char)37);
        var_26 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
    }
}
