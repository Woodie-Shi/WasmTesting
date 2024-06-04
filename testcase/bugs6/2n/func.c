/*
yarpgen version 2.0 (build 91d3bf8 on 2024:03:02)
Seed: 3335047550
Invocation: /home/nju/yarpgen/build/yarpgen --std=c -o /home/nju/WASM-testing/src/temp/7
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
void test(signed char var_0, unsigned int var_1, long long int var_3, unsigned short var_5, unsigned int var_6, unsigned long long int var_7, unsigned char var_9, unsigned char var_11, signed char var_12, long long int var_13, int var_14, unsigned short var_15, unsigned int var_16, long long int var_19, int zero, unsigned char arr_1 [16] [16] , unsigned short arr_2 [16] , signed char arr_3 [16] [16] [16] , unsigned char arr_4 [16] , unsigned char arr_10 [16] [16] [16] [16] , unsigned char arr_11 [16] [16] [16] [16] , unsigned long long int arr_13 [16] [16] [16] [16] [16] [16] , long long int arr_14 [16] [16] [16] [16] [16] [16] [16] ) {
    var_20 = ((/* implicit */int) var_16);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)255)) <= (((/* implicit */int) (unsigned short)65006))))) + (1ULL))/*2*/; i_0 < ((((/* implicit */unsigned long long int) var_9)) + (4ULL))/*15*/; i_0 += 3ULL/*3*/) 
    {
        for (unsigned int i_1 = ((((/* implicit */unsigned int) var_14)) - (1581136979U))/*0*/; i_1 < ((((/* implicit */unsigned int) var_19)) - (1228341356U))/*16*/; i_1 += 1U/*1*/) 
        {
            for (unsigned short i_2 = (unsigned short)3/*3*/; i_2 < (unsigned short)15/*15*/; i_2 += ((((/* implicit */int) ((/* implicit */unsigned short) var_0))) - (65425))/*2*/) 
            {
                {
                    arr_7 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) -9223372036854775799LL)) <= (14633600143403914347ULL))), (((((((/* implicit */unsigned long long int) 9223372036854775798LL)) * (16341593374440815214ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_12), (arr_3 [11] [11] [i_2 - 1])))))))));
                    var_21 -= ((/* implicit */unsigned char) min((-9223372036854775788LL), (((/* implicit */long long int) (unsigned short)65006))));
                    /* LoopNest 2 */
                    for (int i_3 = ((((/* implicit */int) max((max((var_1), (((/* implicit */unsigned int) (signed char)18)))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)32)) & (((/* implicit */int) var_9)))))))) - (271090795))/*1*/; i_3 < ((((/* implicit */int) var_15)) - (2632))/*15*/; i_3 += ((((/* implicit */int) var_5)) - (15635))/*1*/) 
                    {
                        for (unsigned short i_4 = (unsigned short)3/*3*/; i_4 < ((((/* implicit */int) ((/* implicit */unsigned short) var_6))) - (56600))/*14*/; i_4 += ((((/* implicit */int) min(((unsigned short)65518), ((unsigned short)12138)))) - (12134))/*4*/) 
                        {
                            {
                                arr_15 [i_0] [4U] [i_1] [4U] [i_4] = ((/* implicit */signed char) ((((((/* implicit */int) var_11)) + (((/* implicit */int) (unsigned short)50608)))) >= (((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_4])) || (((/* implicit */_Bool) arr_11 [(unsigned short)14] [i_3] [i_2 - 2] [i_0]))))) | (((/* implicit */int) var_5))))));
                                if (((/* implicit */_Bool) ((max((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) > (var_7)))), (min((var_13), (((/* implicit */long long int) arr_2 [i_2])))))) >> (((max((((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_4] [6U] [6U] [i_0 - 2])) < (((/* implicit */int) arr_2 [i_2]))))), (var_3))) - (2787942434995940745LL))))))
                                {
                                    arr_16 [i_0] [i_0] [i_1] [i_0] [i_0] [i_3] [(unsigned char)4] |= ((/* implicit */unsigned short) max((((/* implicit */long long int) max((((/* implicit */unsigned char) var_12)), (arr_1 [i_1] [i_3 + 1])))), (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 1] [i_4]))) / (-1935727096343971511LL)))));
                                    var_22 |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_13 [i_2 + 1] [i_1] [i_2] [i_0 - 2] [i_3 + 1] [(unsigned short)4])) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(unsigned char)12]))) - (0ULL)))))) && (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) == (min((arr_13 [i_0] [i_0] [i_0 + 1] [i_0 - 2] [i_0] [(signed char)6]), (((/* implicit */unsigned long long int) (signed char)-19))))))));
                                    var_23 += min((min((arr_14 [i_1] [i_4 + 1] [i_2] [i_0 - 2] [i_4] [i_3] [i_3]), (((/* implicit */long long int) (unsigned char)255)))), (((/* implicit */long long int) min((((/* implicit */unsigned short) arr_11 [i_0 + 1] [i_0 - 2] [i_0 - 1] [i_0 - 2])), ((unsigned short)529)))));
                                }

                                var_24 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)42)) && (((/* implicit */_Bool) var_13)))) && (((/* implicit */_Bool) min((17873661021126656LL), (((/* implicit */long long int) var_11)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
