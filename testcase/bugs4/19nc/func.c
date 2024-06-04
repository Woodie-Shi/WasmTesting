/*
yarpgen version 2.0 (build 91d3bf8 on 2024:03:02)
Seed: 2353189606
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
void test(int var_0, unsigned int var_1, _Bool var_2, short var_3, unsigned char var_4, unsigned char var_5, int var_6, short var_7, unsigned int var_8, unsigned short var_9, short var_10, unsigned short var_11, signed char var_12, _Bool var_13, unsigned char var_14, signed char var_16, signed char var_17, unsigned int var_18, int zero, unsigned char arr_0 [20] , unsigned int arr_1 [20] , unsigned char arr_2 [20] , short arr_7 [17] , int arr_8 [17] , unsigned int arr_9 [17] [17] , unsigned char arr_10 [17] [17] [17] , unsigned short arr_15 [17] [17] , signed char arr_21 [16] , unsigned int arr_27 [16] [16] [16] , _Bool arr_30 [16] , unsigned long long int arr_38 [16] [16] [16] [16] ) {
    /* LoopNest 2 */
    for (signed char i_0 = ((((/* implicit */int) ((/* implicit */signed char) var_4))) + (12))/*2*/; i_0 < (signed char)18/*18*/; i_0 += ((((/* implicit */int) ((/* implicit */signed char) var_1))) + (23))/*3*/) 
    {
        for (unsigned short i_1 = ((((/* implicit */int) ((/* implicit */unsigned short) var_18))) - (36026))/*2*/; i_1 < ((((/* implicit */int) ((/* implicit */unsigned short) var_7))) - (56181))/*18*/; i_1 += (unsigned short)4/*4*/) 
        {
            {
                arr_6 [i_0] [i_1] &= ((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)3)), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [i_1 + 1])) : (((/* implicit */int) arr_0 [i_0 - 1]))))));
                var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 + 2]))) ^ ((~(arr_1 [i_0 + 2])))));
            }
        } 
    } 
    if (((/* implicit */_Bool) var_18))
    {
        var_20 = ((/* implicit */_Bool) ((unsigned int) var_14));
        var_21 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_16)), ((unsigned char)231)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-32764))))) : (((var_8) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)253))))))) <= (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
        if (var_2)
        {
            var_22 = ((/* implicit */long long int) var_5);
            var_23 = (-(min((((/* implicit */unsigned int) max((((/* implicit */unsigned char) var_13)), (var_14)))), (var_1))));
            /* LoopNest 3 */
            for (_Bool i_2 = ((((/* implicit */int) ((/* implicit */_Bool) var_16))) - (1))/*0*/; i_2 < (_Bool)1/*1*/; i_2 += (_Bool)1/*1*/) 
            {
                for (unsigned long long int i_3 = ((((/* implicit */unsigned long long int) arr_8 [i_2])) - (18446744072612158471ULL))/*2*/; i_3 < ((((/* implicit */unsigned long long int) var_16)) - (19ULL))/*15*/; i_3 += 3ULL/*3*/) 
                {
                    for (unsigned long long int i_4 = ((((/* implicit */unsigned long long int) var_9)) - (18969ULL))/*0*/; i_4 < 17ULL/*17*/; i_4 += ((((/* implicit */unsigned long long int) var_1)) - (1567407849ULL))/*3*/) 
                    {
                        {
                            arr_17 [i_2] [(signed char)14] [i_2] [i_2] = ((/* implicit */unsigned char) arr_8 [i_2]);
                            arr_18 [i_3 + 2] [i_3] [i_4] [i_3] = ((/* implicit */signed char) max((max((((/* implicit */int) (short)-23648)), (((((/* implicit */int) var_12)) + (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) arr_7 [i_2]))));
                        }
                    } 
                } 
            } 
        }
        else
        {
            var_24 &= ((/* implicit */unsigned long long int) (short)23637);
            var_25 = ((/* implicit */unsigned int) var_16);
            var_26 = ((/* implicit */unsigned int) (((-((-(((/* implicit */int) (_Bool)1)))))) < (((/* implicit */int) min((((/* implicit */unsigned char) ((var_2) || (((/* implicit */_Bool) var_11))))), (var_5))))));
            var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_17)) <= (((/* implicit */int) max((((unsigned char) var_8)), (((/* implicit */unsigned char) ((signed char) var_0)))))))))));
        }

        var_28 = ((/* implicit */long long int) max((((/* implicit */int) var_10)), (((((/* implicit */_Bool) ((signed char) var_3))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10))))));
    }

    /* LoopSeq 1 */
    for (_Bool i_5 = ((((/* implicit */int) ((/* implicit */_Bool) var_1))) - (1))/*0*/; i_5 < ((((/* implicit */int) ((/* implicit */_Bool) var_10))) - (1))/*0*/; i_5 += (_Bool)1/*1*/) 
    {
        /* LoopNest 3 */
        for (int i_6 = 0/*0*/; i_6 < 16/*16*/; i_6 += ((((/* implicit */int) var_13)) + (4))/*4*/) 
        {
            for (long long int i_7 = ((((/* implicit */long long int) arr_8 [i_6])) + (1097393144LL))/*1*/; i_7 < 15LL/*15*/; i_7 += ((((/* implicit */long long int) max((((/* implicit */unsigned int) ((_Bool) (signed char)120))), ((((!(((/* implicit */_Bool) -1242839214547732706LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)8))) : ((-(arr_9 [2U] [i_6])))))))) - (1426562495LL))/*4*/) 
            {
                for (_Bool i_8 = (_Bool)0/*0*/; i_8 < ((/* implicit */int) ((/* implicit */_Bool) ((((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)-22060)), (var_1)))) ? ((+(((/* implicit */int) arr_0 [i_7])))) : (-2033228690))) + (((/* implicit */int) ((((/* implicit */int) arr_10 [i_5 + 1] [(short)8] [i_5])) < (var_6)))))))/*1*/; i_8 += ((/* implicit */int) ((/* implicit */_Bool) arr_7 [i_6]))/*1*/) 
                {
                    {
                        arr_28 [i_5 + 1] [i_6] [(signed char)1] [(signed char)1] = ((/* implicit */signed char) arr_15 [i_6] [i_7]);
                        arr_29 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_8] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) arr_21 [i_5 + 1]))) > (((/* implicit */int) var_5))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_9 = ((((/* implicit */unsigned int) var_5)) - (145U))/*2*/; i_9 < 12U/*12*/; i_9 += ((((/* implicit */unsigned int) var_13)) + (4U))/*4*/) 
        {
            for (long long int i_10 = 1LL/*1*/; i_10 < 13LL/*13*/; i_10 += ((((/* implicit */long long int) var_11)) - (10611LL))/*4*/) 
            {
                for (short i_11 = (short)3/*3*/; i_11 < ((((/* implicit */int) ((/* implicit */short) ((-2138507111) >= ((-(((/* implicit */int) (_Bool)1)))))))) + (15))/*15*/; i_11 += ((((/* implicit */int) ((/* implicit */short) var_5))) - (143))/*4*/) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_12 = 0U/*0*/; i_12 < ((((/* implicit */unsigned int) var_9)) - (18953U))/*16*/; i_12 += ((var_1) - (1567407848U))/*4*/) 
                        {
                            arr_39 [i_5 + 1] [i_9 + 3] [i_10] [i_11] [i_10] [i_11] [i_12] = ((/* implicit */unsigned long long int) var_18);
                            var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((int) max((arr_27 [(short)5] [(short)5] [(short)5]), (((/* implicit */unsigned int) var_10)))))), ((+(((arr_38 [i_5] [i_5] [i_10 + 2] [(signed char)6]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))))))));
                        }
                        var_30 = ((/* implicit */unsigned char) max((((/* implicit */int) (!((_Bool)1)))), (min((((2147483647) - (((/* implicit */int) arr_30 [i_5])))), (arr_8 [i_9 - 2])))));
                    }
                } 
            } 
        } 
    }
}
