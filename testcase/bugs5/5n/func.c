/*
yarpgen version 2.0 (build 91d3bf8 on 2024:03:02)
Seed: 733262333
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
void test(unsigned char var_0, signed char var_1, long long int var_2, short var_3, unsigned long long int var_4, long long int var_5, _Bool var_6, _Bool var_7, unsigned long long int var_10, int zero, long long int arr_0 [15] [15] , int arr_1 [15] , signed char arr_2 [15] [15] , signed char arr_3 [15] , int arr_4 [15] , signed char arr_5 [15] , short arr_6 [15] [15] [15] , unsigned char arr_7 [15] [15] [15] , unsigned char arr_8 [15] [15] [15] [15] [15] , signed char arr_9 [15] [15] [15] , short arr_10 [15] [15] [15] [15] [15] , long long int arr_11 [15] [15] , short arr_12 [15] [15] [15] [15] [15] [15] , int arr_28 [15] [15] [15] [15] , unsigned char arr_29 [15] [15] [15] [15] , unsigned char arr_34 [15] [15] [15] ) {
    /* LoopNest 2 */
    for (signed char i_0 = (signed char)0/*0*/; i_0 < (signed char)15/*15*/; i_0 += (signed char)1/*1*/) 
    {
        for (long long int i_1 = ((((/* implicit */long long int) (+(((/* implicit */int) max(((short)32765), ((short)13487))))))) - (32765LL))/*0*/; i_1 < ((((/* implicit */long long int) var_3)) - (5890LL))/*15*/; i_1 += 2LL/*2*/) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = ((((/* implicit */int) ((/* implicit */signed char) min(((-(arr_0 [12] [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1] [i_0])) && (((/* implicit */_Bool) arr_2 [(signed char)0] [i_0]))))))))) - (95))/*0*/; i_2 < ((((/* implicit */int) ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_3)) - (5899)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */long long int) arr_4 [i_0])) : (arr_0 [(short)13] [(short)13]))))))) + (15))/*15*/; i_2 += (signed char)3/*3*/) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = ((((/* implicit */unsigned int) var_10)) - (1596344874U))/*2*/; i_3 < 12U/*12*/; i_3 += 2U/*2*/) 
                    {
                        for (short i_4 = ((((/* implicit */int) ((/* implicit */short) (+(max((((((/* implicit */int) var_1)) % (((/* implicit */int) var_3)))), (((((/* implicit */int) var_6)) + (((/* implicit */int) arr_8 [i_3] [(unsigned short)14] [i_0] [i_3] [i_3 + 3])))))))))) - (54))/*0*/; i_4 < (short)15/*15*/; i_4 += ((((/* implicit */int) ((/* implicit */short) var_7))) + (3))/*3*/) 
                        {
                            {
                                arr_13 [i_1] [i_2] [i_2] [i_3 + 3] [i_4] [(signed char)12] = ((/* implicit */short) ((unsigned int) max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_8 [i_2] [i_1] [(unsigned char)0] [(unsigned char)0] [i_2])))), ((+(((/* implicit */int) arr_2 [i_2] [i_2])))))));
                                arr_14 [i_0] [i_4] [i_0] [i_3] [i_4] [i_1] |= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_4 [i_0])), (((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_8 [i_3] [i_1] [(unsigned short)4] [i_3] [i_4]), (((/* implicit */unsigned char) arr_3 [i_2])))))) - (((((/* implicit */_Bool) arr_12 [i_4] [(unsigned short)10] [i_2] [i_1] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [4]))) : (var_4)))))));
                                arr_15 [11LL] [i_1] [i_1] [i_1] [11] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((_Bool) arr_7 [i_1] [i_2] [i_2]));
                                if (((/* implicit */_Bool) arr_4 [i_0]))
                                {
                                    arr_16 [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) ((short) max((((/* implicit */unsigned char) arr_3 [i_4])), (((unsigned char) (signed char)66)))));
                                    arr_17 [i_2] [i_2] [i_2] [10LL] [i_3] = ((/* implicit */unsigned char) ((signed char) ((unsigned long long int) arr_5 [(unsigned short)9])));
                                    if (((/* implicit */_Bool) arr_8 [i_1] [i_3 + 2] [i_3 + 1] [i_3 + 3] [i_3]))
                                    {
                                        arr_18 [i_2] [8LL] [i_2] [i_2] [i_1] [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3 - 1] [i_1] [i_3 - 1]))) - (arr_11 [i_2] [i_3 - 2])));
                                        arr_19 [i_2] [(signed char)1] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_3 + 1] [i_3] [i_2])) && (((/* implicit */_Bool) arr_6 [i_3 + 3] [9] [i_1])))))));
                                        arr_20 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0] = ((/* implicit */int) ((var_4) % (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) -1)), (2844641573U))))));
                                        arr_21 [(_Bool)1] [i_1] [i_2] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */long long int) (+(((/* implicit */int) arr_9 [i_3 + 3] [i_3 - 1] [i_3 - 1]))))) % (max((((/* implicit */long long int) ((((/* implicit */_Bool) 2116239478U)) ? (((/* implicit */int) (unsigned short)34059)) : (((/* implicit */int) (short)4648))))), (min((((/* implicit */long long int) 12)), (arr_0 [i_1] [i_1])))))));
                                        arr_22 [i_0] [i_1] [i_0] [i_3] [i_4] [i_4] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_12 [i_1] [i_1] [i_1] [(_Bool)1] [i_1] [i_1]), (((/* implicit */short) var_0))))) ? ((-(((/* implicit */int) arr_9 [i_4] [i_1] [i_2])))) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_3 - 1] [i_0] [i_4] [i_1]))))) ? (max((((/* implicit */long long int) arr_10 [i_2] [i_3 + 1] [i_2] [i_2] [i_2])), (arr_11 [i_2] [i_0]))) : (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 0ULL))))))))));
                                    }

                                    if (((/* implicit */_Bool) arr_8 [i_3] [4U] [4U] [i_3] [i_4]))
                                    {
                                        arr_23 [i_4] [i_2] [i_2] [i_0] = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (12949178412909463185ULL) : (((/* implicit */unsigned long long int) -355716319906589710LL)))));
                                        arr_24 [i_0] [i_0] [i_0] [i_2] [i_2] [i_4] = ((/* implicit */signed char) max((-355716319906589684LL), (((((/* implicit */_Bool) (signed char)0)) ? (-355716319906589710LL) : (((/* implicit */long long int) 1782132393U))))));
                                    }

                                }
                                else
                                {
                                    arr_25 [i_0] [i_2] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_0)), (((((/* implicit */_Bool) arr_3 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2]))) : (var_10)))));
                                    arr_26 [i_0] [i_0] [i_1] [i_2] [(unsigned char)2] [i_2] [i_2] = ((/* implicit */_Bool) arr_2 [i_1] [i_4]);
                                }

                                arr_27 [i_0] [11U] [i_2] [i_3] [i_2] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((unsigned short) arr_3 [i_3 - 1]))), (var_4)));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 3ULL/*3*/; i_5 < ((((/* implicit */unsigned long long int) (~(max((355716319906589684LL), (((/* implicit */long long int) 1450325722U))))))) - (18091027753802961917ULL))/*14*/; i_5 += 3ULL/*3*/) 
                    {
                        arr_30 [i_2] = ((/* implicit */long long int) max((((/* implicit */int) ((signed char) arr_8 [i_2] [i_0] [i_5 + 1] [i_5] [i_0]))), (((((/* implicit */_Bool) arr_6 [i_5 - 1] [i_1] [i_2])) ? (((/* implicit */int) arr_8 [i_2] [i_5] [i_5 - 2] [(_Bool)1] [i_2])) : (((/* implicit */int) arr_6 [i_5 - 2] [i_1] [i_2]))))));
                        arr_31 [i_1] [6ULL] [i_1] [i_5] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) -256)) ? (((int) max((6490194754011083595LL), (var_5)))) : (arr_28 [i_5 - 1] [i_2] [i_1] [i_0])));
                        arr_32 [10LL] [i_1] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) max((min((arr_28 [(unsigned char)1] [i_5 + 1] [i_2] [i_0]), (arr_28 [i_5] [i_5 - 3] [i_2] [i_2]))), (((/* implicit */int) arr_10 [i_1] [(unsigned char)14] [(unsigned char)14] [i_2] [(unsigned char)14]))));
                    }
                    arr_33 [i_2] [i_1] [i_0] = ((/* implicit */signed char) arr_0 [i_0] [1]);
                }
                for (int i_6 = ((max((((/* implicit */int) ((short) arr_1 [i_0]))), (max((((/* implicit */int) arr_29 [i_1] [i_0] [(unsigned char)14] [i_0])), (arr_1 [i_0]))))) - (195))/*0*/; i_6 < ((((/* implicit */int) var_6)) + (14))/*15*/; i_6 += ((((/* implicit */int) var_0)) - (23))/*2*/) 
                {
                    arr_36 [i_0] [i_1] [i_6] [i_6] &= ((/* implicit */unsigned short) (((~((+(((/* implicit */int) arr_12 [(unsigned char)5] [i_0] [i_0] [i_1] [i_6] [i_0])))))) + (((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))));
                    arr_37 [i_1] = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_29 [i_0] [i_1] [i_6] [i_0]))))) ? (((/* implicit */int) ((13841273184356607055ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_0] [i_1] [(unsigned short)0])))))) : (((/* implicit */int) arr_3 [i_0])))));
                    arr_38 [i_6] = ((/* implicit */unsigned short) var_0);
                    arr_39 [i_6] [i_6] [i_6] = ((/* implicit */_Bool) ((var_7) ? (min((arr_11 [i_1] [i_1]), (((/* implicit */long long int) arr_5 [i_0])))) : (((((/* implicit */long long int) arr_1 [i_0])) - (var_2)))));
                }
                arr_40 [i_1] [(short)8] [i_1] = ((/* implicit */_Bool) max((-2781028939273661021LL), (((/* implicit */long long int) (unsigned char)19))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) var_1);
}
