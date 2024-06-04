/*
yarpgen version 2.0 (build 91d3bf8 on 2024:03:02)
Seed: 2653711360
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
void test(long long int var_0, signed char var_1, short var_2, _Bool var_3, unsigned char var_4, short var_5, unsigned char var_6, long long int var_8, int var_9, long long int var_10, _Bool var_11, unsigned char var_12, unsigned char var_13, int var_14, int zero, long long int arr_0 [12] , unsigned int arr_1 [12] , long long int arr_2 [12] [12] , unsigned short arr_5 [12] [12] , unsigned char arr_6 [12] , unsigned int arr_11 [12] [12] [12] [12] [12] [12] [12] , unsigned char arr_14 [20] [20] , unsigned long long int arr_15 [20] [20] ) {
    /* LoopNest 3 */
    for (short i_0 = (short)4/*4*/; i_0 < (short)9/*9*/; i_0 += ((((/* implicit */int) ((/* implicit */short) var_12))) - (162))/*1*/) 
    {
        for (long long int i_1 = ((((/* implicit */long long int) var_11)) + (3LL))/*4*/; i_1 < ((((((((/* implicit */_Bool) ((unsigned char) var_1))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))) & (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_0 [i_0])))))) - (152LL))/*11*/; i_1 += 2LL/*2*/) 
        {
            for (int i_2 = ((var_14) - (1004817673))/*2*/; i_2 < 10/*10*/; i_2 += ((((/* implicit */int) var_13)) - (10))/*2*/) 
            {
                {
                    var_15 *= max((((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) (~(arr_2 [i_1] [i_1])))) : (min((0ULL), (((/* implicit */unsigned long long int) var_6)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) | (min((((/* implicit */unsigned long long int) arr_5 [i_2] [i_1 - 3])), (14138111869562331755ULL))))));
                    /* LoopNest 2 */
                    for (int i_3 = ((((/* implicit */int) var_8)) + (659347439))/*1*/; i_3 < ((((/* implicit */int) var_0)) - (1517541498))/*11*/; i_3 += ((((/* implicit */int) var_6)) - (249))/*3*/) 
                    {
                        for (long long int i_4 = ((var_10) + (1348190508033125035LL))/*2*/; i_4 < 11LL/*11*/; i_4 += ((max((((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_0 - 1]))))), (((((/* implicit */_Bool) ((short) var_6))) ? (min((arr_2 [i_0 - 1] [i_0 - 1]), (((/* implicit */long long int) (unsigned short)57608)))) : (((/* implicit */long long int) (~(((/* implicit */int) var_2))))))))) + (97LL))/*4*/) 
                        {
                            {
                                arr_12 [i_4] [i_3] [i_2 + 2] [i_1 - 2] [i_1] [i_0] |= ((/* implicit */unsigned short) (~(((int) ((short) (unsigned short)7930)))));
                                arr_13 [i_0 - 3] [i_1 - 2] [i_2] [i_0 - 3] [(short)11] = ((/* implicit */unsigned long long int) arr_11 [i_4 - 1] [i_4] [i_4 - 1] [i_4] [i_4] [i_4] [i_4]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_5 = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_8)))) ? (((/* implicit */int) min((min((var_13), (((/* implicit */unsigned char) var_11)))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_14)))))))) : (((/* implicit */int) (short)26946))))) + (1U))/*1*/; i_5 < ((((/* implicit */unsigned int) var_9)) - (3562730084U))/*16*/; i_5 += ((((/* implicit */unsigned int) min((min((((/* implicit */long long int) (short)-12706)), (8354055642018108815LL))), (((/* implicit */long long int) min(((unsigned short)36091), ((unsigned short)7927))))))) - (4294954586U))/*4*/) 
    {
        var_16 = ((/* implicit */unsigned char) (+(((/* implicit */int) min((((/* implicit */short) var_3)), (min((((/* implicit */short) arr_14 [i_5] [15LL])), (var_2))))))));
        arr_16 [i_5] [i_5] |= ((/* implicit */unsigned long long int) var_5);
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_15 [i_5] [i_5 - 1])))) ? (((((/* implicit */_Bool) min((arr_15 [i_5] [i_5]), (arr_15 [i_5] [i_5])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_5 - 1] [i_5 - 1]))) : (min((((/* implicit */unsigned long long int) arr_14 [i_5] [i_5])), (arr_15 [6LL] [(signed char)6]))))) : (max((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)98))) : (arr_15 [i_5 + 2] [i_5 + 2]))))))))));
        arr_17 [i_5] = ((/* implicit */long long int) ((short) (-(((/* implicit */int) max((arr_14 [i_5 + 1] [i_5]), (((/* implicit */unsigned char) var_11))))))));
    }
    var_18 = ((/* implicit */unsigned long long int) var_4);
}
