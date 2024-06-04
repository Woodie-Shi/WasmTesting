/*
yarpgen version 2.0 (build 91d3bf8 on 2024:03:02)
Seed: 124144299
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
void test(int var_0, unsigned short var_1, unsigned short var_2, unsigned short var_3, short var_4, unsigned short var_5, unsigned int var_6, unsigned int var_8, signed char var_9, int zero, short arr_0 [17] , unsigned short arr_2 [17] , unsigned long long int arr_4 [12] , unsigned int arr_5 [12] [12] , short arr_8 [12] [12] , unsigned int arr_9 [12] , unsigned short arr_10 [12] [12] [12] [12] , unsigned long long int arr_11 [12] [12] [12] [12] , unsigned int arr_12 [12] [12] [12] [12] , int arr_13 [12] [12] , unsigned int arr_15 [12] [12] [12] [12] , unsigned short arr_16 [12] [12] [12] [12] , unsigned short arr_18 [12] [12] [12] [12] , unsigned short arr_21 [12] [12] [12] , unsigned long long int arr_22 [12] [12] [12] [12] , long long int arr_23 [12] [12] [12] [12] , unsigned short arr_24 [12] [12] [12] , unsigned short arr_25 [12] [12] [12] [12] [12] , signed char arr_26 [12] , short arr_33 [12] [12] , long long int arr_46 [13] ) {
    var_10 = ((/* implicit */unsigned int) var_1);
    /* LoopNest 2 */
    for (short i_0 = ((((/* implicit */int) ((/* implicit */short) var_2))) + (1120))/*2*/; i_0 < ((((/* implicit */int) var_4)) - (6935))/*14*/; i_0 += ((((/* implicit */int) ((/* implicit */short) var_5))) - (22683))/*3*/) 
    {
        for (signed char i_1 = ((((/* implicit */int) ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_0 [i_0 + 2]))))) ? ((-(((/* implicit */int) arr_0 [i_0 - 1])))) : ((~((~(((/* implicit */int) (unsigned char)245)))))))))) - (54))/*1*/; i_1 < ((((/* implicit */int) ((/* implicit */signed char) var_6))) - (67))/*16*/; i_1 += ((((/* implicit */int) ((/* implicit */signed char) var_1))) + (60))/*1*/) 
        {
            {
                var_11 = ((/* implicit */unsigned short) (+(max((((/* implicit */unsigned int) arr_2 [i_0])), ((+(var_8)))))));
                var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_0 [7])) : (((/* implicit */int) arr_2 [i_0]))));
                var_13 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) max(((signed char)100), ((signed char)-105))))) > (min((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_2 [i_1])), (var_8)))), (max((-6307036250509143633LL), (((/* implicit */long long int) 2147483647))))))));
                var_14 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_2 [i_0 - 2]))));
                var_15 += ((/* implicit */long long int) ((short) (((+(((/* implicit */int) (signed char)72)))) > (((/* implicit */int) var_1)))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_2 = 0U/*0*/; i_2 < 12U/*12*/; i_2 += (((~(var_6))) - (2053155496U))/*4*/) 
    {
        arr_7 [i_2] = ((/* implicit */unsigned int) ((unsigned char) ((arr_5 [i_2] [i_2]) > (var_8))));
        /* LoopSeq 1 */
        for (unsigned int i_3 = 0U/*0*/; i_3 < 12U/*12*/; i_3 += 1U/*1*/) 
        {
            var_16 = ((/* implicit */short) (((!(((/* implicit */_Bool) (short)-24878)))) || (((/* implicit */_Bool) arr_4 [i_2]))));
            /* LoopNest 2 */
            for (long long int i_4 = 0LL/*0*/; i_4 < ((((/* implicit */long long int) var_5)) - (22674LL))/*12*/; i_4 += 3LL/*3*/) 
            {
                for (long long int i_5 = 0LL/*0*/; i_5 < 12LL/*12*/; i_5 += ((((/* implicit */long long int) var_5)) - (22682LL))/*4*/) 
                {
                    {
                        var_17 = ((/* implicit */unsigned long long int) var_8);
                        arr_14 [i_2] [i_2] [i_4] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_10 [i_2] [i_3] [i_4] [i_2]))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (short i_6 = ((((/* implicit */int) ((/* implicit */short) ((((((/* implicit */_Bool) arr_11 [i_2] [i_2] [i_2] [i_3])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) > (arr_12 [i_2] [i_3] [i_2] [i_2]))))) - (1))/*0*/; i_6 < ((((/* implicit */int) ((/* implicit */short) arr_11 [i_2] [i_3] [i_2] [i_3]))) + (3475))/*12*/; i_6 += (short)1/*1*/) 
            {
                arr_19 [i_6] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_2] [(short)3]))));
                arr_20 [9U] [i_3] [i_3] = ((/* implicit */long long int) (-(((/* implicit */int) arr_18 [i_2] [i_3] [i_3] [i_6]))));
            }
            for (int i_7 = 0/*0*/; i_7 < 12/*12*/; i_7 += 1/*1*/) 
            {
                /* LoopNest 2 */
                for (short i_8 = (short)3/*3*/; i_8 < (short)11/*11*/; i_8 += (short)3/*3*/) 
                {
                    for (unsigned short i_9 = ((((/* implicit */int) arr_25 [i_2] [(signed char)5] [i_7] [i_7] [i_8])) - (19838))/*2*/; i_9 < ((((/* implicit */int) ((/* implicit */unsigned short) var_4))) - (6940))/*9*/; i_9 += (unsigned short)2/*2*/) 
                    {
                        {
                            arr_31 [i_7] [4LL] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_2] [1ULL] [i_7]))) ^ (arr_9 [i_8]))) ^ (arr_15 [i_2] [i_2] [(unsigned short)11] [i_9 + 1])));
                            var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_26 [i_7])) ^ (((/* implicit */int) arr_16 [i_2] [(short)9] [i_2] [i_2])))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (long long int i_10 = 0LL/*0*/; i_10 < 12LL/*12*/; i_10 += 2LL/*2*/) 
                {
                    var_19 *= ((/* implicit */unsigned short) arr_22 [8] [(_Bool)1] [i_7] [i_7]);
                    arr_36 [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) (~(var_0)));
                    /* LoopSeq 2 */
                    for (int i_11 = ((((/* implicit */int) ((arr_23 [i_2] [i_3] [i_10] [8ULL]) + (arr_23 [i_2] [i_2] [i_10] [i_2])))) + (1588675564))/*0*/; i_11 < ((((/* implicit */int) var_6)) + (2053155513))/*12*/; i_11 += 3/*3*/) 
                    {
                        arr_39 [i_2] [i_2] [i_7] [5] [5] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_24 [i_2] [i_3] [i_7])) & (((/* implicit */int) arr_24 [i_3] [i_7] [i_7]))));
                        arr_40 [i_2] [11] [i_7] [(short)9] [i_11] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_0)) ^ (arr_5 [i_2] [i_3])))) ? ((-(var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3] [i_11])))));
                        var_20 += ((/* implicit */unsigned short) arr_13 [i_2] [i_10]);
                    }
                    for (int i_12 = 0/*0*/; i_12 < 12/*12*/; i_12 += ((((/* implicit */int) var_5)) - (22685))/*1*/) 
                    {
                        arr_44 [i_2] [i_2] [i_2] [i_2] [i_7] = ((/* implicit */long long int) arr_9 [i_2]);
                        var_21 |= ((/* implicit */long long int) 18446744073709551615ULL);
                    }
                }
            }
            var_22 = ((/* implicit */short) (-((((_Bool)1) ? (-1134731624) : (((/* implicit */int) arr_33 [i_2] [i_3]))))));
        }
    }
    /* LoopSeq 1 */
    for (short i_13 = ((((/* implicit */int) ((/* implicit */short) min(((+((-(((/* implicit */int) var_4)))))), (var_0))))) + (6949))/*0*/; i_13 < ((((/* implicit */int) ((/* implicit */short) var_3))) - (1424))/*13*/; i_13 += ((((/* implicit */int) ((/* implicit */short) var_9))) - (115))/*3*/) 
    {
        var_23 = ((/* implicit */unsigned short) arr_46 [i_13]);
        arr_48 [i_13] [i_13] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_0 [i_13])) && (((/* implicit */_Bool) arr_0 [i_13])))) && (((/* implicit */_Bool) var_5))));
    }
}
