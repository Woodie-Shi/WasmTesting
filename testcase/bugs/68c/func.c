/*
yarpgen version 2.0 (build 91d3bf8 on 2024:03:02)
Seed: 2253857692
Invocation: /home/nju/yarpgen/build/yarpgen --std=c -o /home/nju/WASM-testing/src/temp/1
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
void test(unsigned int var_0, short var_1, long long int var_2, signed char var_4, unsigned int var_5, signed char var_6, short var_7, unsigned char var_8, signed char var_9, unsigned short var_10, unsigned long long int var_11, unsigned int var_12, unsigned short var_13, signed char var_14, int zero, _Bool arr_0 [12] , unsigned short arr_1 [12] , long long int arr_2 [12] [12] , unsigned int arr_4 [12] [12] [12] , unsigned long long int arr_5 [12] [12] [12] , unsigned short arr_8 [12] , signed char arr_9 [12] [12] [12] [12] , unsigned int arr_10 [12] [12] [12] , _Bool arr_11 [12] [12] [12] [12] [12] [12] , int arr_12 [12] [12] [12] [12] , unsigned char arr_13 [12] [12] [12] [12] [12] [12] ) {
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) var_14))));
    /* LoopNest 2 */
    for (unsigned short i_0 = ((((/* implicit */int) ((/* implicit */unsigned short) var_11))) - (61096))/*2*/; i_0 < (unsigned short)8/*8*/; i_0 += (unsigned short)1/*1*/) 
    {
        for (unsigned short i_1 = ((/* implicit */int) ((/* implicit */unsigned short) ((0U) << (((360471457U) - (360471448U))))))/*0*/; i_1 < ((((/* implicit */int) ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) arr_0 [i_0])))) | (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_14))))))))))) + (12))/*12*/; i_1 += ((((/* implicit */int) ((/* implicit */unsigned short) arr_2 [i_0] [i_0]))) - (55930))/*4*/) 
        {
            {
                arr_6 [i_1] [i_0] = ((/* implicit */_Bool) var_11);
                arr_7 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 360471448U))));
                /* LoopNest 2 */
                for (unsigned short i_2 = (unsigned short)1/*1*/; i_2 < ((((/* implicit */int) ((/* implicit */unsigned short) ((((arr_5 [i_1] [i_1] [i_1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_2) ^ (((/* implicit */long long int) ((/* implicit */int) var_1)))))))))))))) + (8))/*8*/; i_2 += (unsigned short)2/*2*/) 
                {
                    for (signed char i_3 = (signed char)3/*3*/; i_3 < ((((/* implicit */int) ((/* implicit */signed char) ((arr_4 [i_2] [i_1] [i_0]) | (((unsigned int) ((((/* implicit */int) var_13)) == (((/* implicit */int) var_8))))))))) - (95))/*11*/; i_3 += ((((/* implicit */int) ((/* implicit */signed char) var_8))) - (6))/*3*/) 
                    {
                        {
                            if (((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((arr_5 [i_0] [i_0] [i_0 + 1]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_2 + 4] [i_0])))));
                                var_16 *= (!(((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_2 [i_1] [i_0])))))));
                                arr_15 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((min((var_5), (((/* implicit */unsigned int) arr_9 [i_0] [i_0] [i_0] [i_0])))) - (((/* implicit */unsigned int) ((/* implicit */int) ((var_2) != (((/* implicit */long long int) var_5))))))))) ? (((((/* implicit */int) arr_0 [i_0 + 1])) ^ (((/* implicit */int) arr_0 [i_0 - 2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) 1763598792349909164LL))))))));
                                var_17 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0])) ? (((long long int) var_11)) : (((/* implicit */long long int) arr_12 [i_0] [i_0] [i_1] [i_3 - 3]))))) || (((/* implicit */_Bool) var_0))));
                            }

                            arr_16 [i_1] |= ((/* implicit */_Bool) max((((/* implicit */unsigned short) min((arr_11 [i_2] [i_2] [i_2] [i_2] [i_1] [i_3 - 2]), (((arr_10 [i_0] [i_0] [i_0]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3])))))))), (max((arr_8 [i_1]), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) == (arr_10 [i_0] [i_0] [i_0]))))))));
                            /* LoopSeq 1 */
                            for (short i_4 = (short)0/*0*/; i_4 < ((((/* implicit */int) ((/* implicit */short) min((((/* implicit */unsigned int) var_1)), (min((360471456U), (416854196U))))))) - (7054))/*12*/; i_4 += (short)3/*3*/) 
                            {
                                var_18 = ((/* implicit */_Bool) ((((arr_5 [i_0] [i_0] [i_0 + 2]) != (arr_5 [i_0] [i_0] [i_0 - 2]))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (min((var_2), (((/* implicit */long long int) min((var_9), (var_4))))))));
                                arr_20 [i_0] [i_0] [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned long long int) min((((/* implicit */unsigned int) var_7)), (var_0)))))));
                                var_19 = ((/* implicit */int) ((unsigned short) ((int) var_10)));
                            }
                            arr_21 [i_0] [i_0] [i_3] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((unsigned int) 4456897745600552428ULL));
                            if (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) arr_1 [i_1]))))))) | (((arr_2 [i_3 - 2] [i_0 - 2]) & (arr_2 [i_3 - 2] [i_0 - 2]))))))
                            {
                                arr_22 [i_0] [i_0] = ((/* implicit */unsigned int) var_8);
                                var_20 = ((/* implicit */long long int) ((((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_0]))) - (arr_5 [i_0] [i_2] [i_0])))) * (var_0)));
                            }

                        }
                    } 
                } 
                arr_23 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((2810642090U) ^ (0U)));
                var_21 ^= ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0 + 4] [i_1]))) & (var_11))) >> (((((/* implicit */int) max((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0 + 2] [i_1]), (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0 + 2] [i_1])))) - (231)))));
            }
        } 
    } 
}
