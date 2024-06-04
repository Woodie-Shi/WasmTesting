/*
yarpgen version 2.0 (build 91d3bf8 on 2024:03:02)
Seed: 4171013679
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
void test(signed char var_0, unsigned short var_1, short var_2, short var_3, short var_4, unsigned long long int var_5, unsigned short var_6, unsigned int var_7, short var_8, long long int var_9, int zero, unsigned short arr_9 [23] [23] [23] [23] , unsigned long long int arr_13 [23] [23] [23] , long long int arr_14 [23] [23] ) {
    var_10 = ((/* implicit */unsigned short) var_0);
    /* LoopNest 2 */
    for (signed char i_0 = (signed char)0/*0*/; i_0 < ((((/* implicit */int) ((/* implicit */signed char) ((short) var_1)))) + (151))/*23*/; i_0 += ((((/* implicit */int) ((/* implicit */signed char) ((((/* implicit */_Bool) (short)32757)) ? (((/* implicit */int) (unsigned short)6498)) : (((/* implicit */int) ((unsigned short) (signed char)-57))))))) - (97))/*1*/) 
    {
        for (unsigned long long int i_1 = ((((/* implicit */unsigned long long int) var_8)) - (30521ULL))/*0*/; i_1 < ((var_5) - (5045917161677302174ULL))/*23*/; i_1 += ((var_5) - (5045917161677302193ULL))/*4*/) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = ((((/* implicit */unsigned long long int) var_7)) - (333776843ULL))/*0*/; i_2 < ((((/* implicit */unsigned long long int) var_1)) - (40041ULL))/*23*/; i_2 += ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)84)) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-114)) != (((/* implicit */int) (signed char)91))))) : (((/* implicit */int) (signed char)-108))))) + (1ULL))/*2*/) 
                {
                    var_11 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0]))));
                    arr_11 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_3);
                    var_12 = ((/* implicit */unsigned long long int) var_0);
                }
                for (unsigned int i_3 = ((((/* implicit */unsigned int) var_2)) - (17371U))/*0*/; i_3 < ((((/* implicit */unsigned int) var_5)) - (2480056734U))/*23*/; i_3 += ((((/* implicit */unsigned int) var_4)) - (23390U))/*4*/) 
                {
                    var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-55))));
                    arr_15 [i_0] [i_0] [i_3] = ((/* implicit */long long int) var_4);
                    arr_16 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 11LL)) ? (((((/* implicit */_Bool) (signed char)113)) ? (arr_13 [i_1] [i_1] [i_1]) : (arr_13 [i_0] [i_0] [i_3]))) : (((/* implicit */unsigned long long int) ((arr_14 [i_0] [i_3]) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-40))))))));
                    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_6)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned long long int) (short)-6593))))) ? (((((((/* implicit */_Bool) 2621898148475345747LL)) ? (((/* implicit */unsigned long long int) 4292108219801929742LL)) : (arr_13 [i_0] [i_0] [i_0]))) >> (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) >= (var_9)))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) 886103827U)), (((var_9) / (((/* implicit */long long int) 344305291U))))))))))));
                }
                var_15 = ((/* implicit */unsigned short) arr_14 [i_0] [i_1]);
            }
        } 
    } 
}
