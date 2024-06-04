/*
yarpgen version 2.0 (build 91d3bf8 on 2024:03:02)
Seed: 1615433794
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
void test(unsigned int var_0, signed char var_1, unsigned short var_4, unsigned short var_6, _Bool var_8, short var_10, unsigned char var_11, unsigned short var_13, _Bool var_14, unsigned int var_15, short var_16, int zero, int arr_1 [16] [16] , unsigned short arr_2 [16] [16] , signed char arr_3 [16] , short arr_4 [16] [16] [16] ) {
    var_18 = ((/* implicit */unsigned char) var_8);
    var_19 = ((/* implicit */unsigned char) (_Bool)1);
    var_20 = ((/* implicit */_Bool) var_11);
    /* LoopNest 2 */
    for (_Bool i_0 = ((((/* implicit */int) ((/* implicit */_Bool) var_11))) - (1))/*0*/; i_0 < ((/* implicit */int) ((/* implicit */_Bool) var_15))/*1*/; i_0 += ((/* implicit */int) ((/* implicit */_Bool) var_6))/*1*/) 
    {
        for (_Bool i_1 = ((((/* implicit */int) ((/* implicit */_Bool) var_16))) - (1))/*0*/; i_1 < ((((/* implicit */int) ((/* implicit */_Bool) var_1))) - (1))/*0*/; i_1 += ((/* implicit */int) ((/* implicit */_Bool) var_0))/*1*/) 
        {
            {
                arr_5 [i_0] [i_0] = (+(((/* implicit */int) max((((/* implicit */unsigned short) min(((short)-18699), (var_10)))), ((unsigned short)7168)))));
                var_21 = ((/* implicit */unsigned char) (~(((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1] [i_1 + 1]))) ^ (2390619722623580502LL)))));
                if ((!(((/* implicit */_Bool) var_0))))
                {
                    var_22 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) arr_1 [i_1 + 1] [i_1 + 1]))) == ((-(arr_1 [i_1 + 1] [i_1 + 1])))));
                    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) ((_Bool) var_6))), (var_4)))) ? (((((41982052U) | (((/* implicit */unsigned int) ((/* implicit */int) var_14))))) - (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) -2390619722623580496LL)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))));
                    var_24 = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)164)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_0])))), (((((/* implicit */int) (signed char)84)) - (((/* implicit */int) (short)2239))))))) ? (((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1 + 1])) ? (61538324U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))) : (((/* implicit */unsigned int) (+(((((/* implicit */int) (short)-32754)) % (((/* implicit */int) (unsigned short)38105))))))));
                    var_25 = ((/* implicit */signed char) max((((unsigned char) arr_1 [i_1 + 1] [i_1])), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)61000)) || (((/* implicit */_Bool) 4027536902U))))) >= (((/* implicit */int) var_8)))))));
                }

                arr_6 [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)46170))))) : (((((/* implicit */int) max((((/* implicit */short) (unsigned char)181)), (var_16)))) ^ (((/* implicit */int) var_13))))));
            }
        } 
    } 
}
