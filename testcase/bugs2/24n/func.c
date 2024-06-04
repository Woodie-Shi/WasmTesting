/*
yarpgen version 2.0 (build 91d3bf8 on 2024:03:02)
Seed: 4259737609
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
void test(unsigned short var_4, unsigned short var_7, unsigned short var_8, unsigned short var_9, unsigned short var_11, unsigned short var_14, unsigned short var_15, int zero, unsigned short arr_0 [17] , unsigned short arr_1 [17] , unsigned short arr_2 [17] , unsigned short arr_3 [17] [17] , unsigned short arr_4 [17] [17] , unsigned short arr_5 [17] [17] [17] , unsigned short arr_6 [17] , unsigned short arr_7 [17] [17] [17] , unsigned short arr_8 [17] [17] [17] [17] , unsigned short arr_11 [17] [17] [17] [17] , unsigned short arr_12 [17] [17] [17] [17] , unsigned short arr_13 [17] [17] [17] [17] [17] , unsigned short arr_14 [17] [17] [17] [17] , unsigned short arr_15 [17] [17] [17] , unsigned short arr_16 [17] [17] [17] , unsigned short arr_18 [17] [17] [17] , unsigned short arr_20 [17] [17] , unsigned short arr_24 [17] [17] , unsigned short arr_26 [17] [17] , unsigned short arr_29 [17] , unsigned short arr_30 [17] [17] [17] [17] [17] , unsigned short arr_32 [17] [17] [17] [17] [17] [17] [17] , unsigned short arr_40 [17] [17] [17] [17] [17] [17] , unsigned short arr_43 [17] [17] [17] [17] [17] ) {
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = (unsigned short)0/*0*/; i_0 < ((((/* implicit */int) var_9)) - (58405))/*17*/; i_0 += (unsigned short)2/*2*/) 
    {
        var_16 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned short)65527)))) / (((((/* implicit */int) (unsigned short)45473)) | (((/* implicit */int) (unsigned short)62422))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = (unsigned short)0/*0*/; i_1 < (unsigned short)17/*17*/; i_1 += (unsigned short)2/*2*/) 
        {
            var_17 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_5 [i_0] [i_1] [i_1]))));
            /* LoopSeq 2 */
            for (unsigned short i_2 = (unsigned short)3/*3*/; i_2 < (unsigned short)13/*13*/; i_2 += (unsigned short)4/*4*/) 
            {
                arr_9 [i_0] [i_0] [i_0] [i_0] |= (unsigned short)3113;
                arr_10 [i_2] [i_1] [i_2] = arr_2 [i_0];
                /* LoopSeq 1 */
                for (unsigned short i_3 = (unsigned short)2/*2*/; i_3 < (unsigned short)15/*15*/; i_3 += (unsigned short)2/*2*/) 
                {
                    var_18 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) (unsigned short)39611)) > (((/* implicit */int) arr_13 [i_3] [i_1] [i_1] [i_3] [i_3])))))));
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_13 [i_0] [i_3 - 1] [i_2 - 2] [i_2 - 2] [i_2 - 2])) : (((/* implicit */int) arr_13 [i_2 + 4] [i_3 - 2] [i_2 - 1] [(unsigned short)6] [i_1]))));
                }
            }
            for (unsigned short i_4 = (unsigned short)2/*2*/; i_4 < (unsigned short)14/*14*/; i_4 += (unsigned short)2/*2*/) 
            {
                var_20 = ((unsigned short) ((((/* implicit */_Bool) arr_4 [i_1] [i_0])) ? (((/* implicit */int) arr_15 [i_0] [i_1] [(unsigned short)0])) : (((/* implicit */int) (unsigned short)3130))));
                var_21 ^= arr_16 [i_4] [i_0] [i_0];
                arr_17 [i_0] [i_1] [i_4] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_12 [i_0] [i_4 - 1] [i_4 - 1] [i_4 - 1]))));
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_14 [i_0] [i_4 - 1] [i_4 - 1] [i_0])) <= (((/* implicit */int) var_11))));
            }
            /* LoopSeq 2 */
            for (unsigned short i_5 = (unsigned short)3/*3*/; i_5 < (unsigned short)14/*14*/; i_5 += (unsigned short)4/*4*/) 
            {
                arr_21 [i_0] [i_1] [i_5] [i_5] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_0 [i_0]))));
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) <= (((/* implicit */int) arr_14 [i_5 + 3] [i_5 - 3] [(unsigned short)15] [i_5 + 2]))));
                var_24 += ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_11 [i_0] [i_1] [i_5] [i_0])))) / (((/* implicit */int) arr_15 [i_1] [(unsigned short)3] [i_5 - 2]))));
                var_25 = ((/* implicit */unsigned short) max((var_25), (arr_11 [i_0] [i_1] [i_5] [i_5 + 1])));
            }
            for (unsigned short i_6 = (unsigned short)0/*0*/; i_6 < (unsigned short)17/*17*/; i_6 += (unsigned short)2/*2*/) 
            {
                var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_1 [i_0])))))));
                var_27 = arr_15 [i_0] [i_0] [i_0];
                /* LoopSeq 2 */
                for (unsigned short i_7 = ((((/* implicit */int) var_4)) - (61613))/*0*/; i_7 < (unsigned short)17/*17*/; i_7 += (unsigned short)4/*4*/) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = (unsigned short)0/*0*/; i_8 < (unsigned short)17/*17*/; i_8 += (unsigned short)2/*2*/) 
                    {
                        arr_33 [i_1] [i_7] [i_1] = ((unsigned short) (~(((/* implicit */int) (unsigned short)31705))));
                        var_28 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) arr_6 [i_7]))));
                        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_24 [i_0] [i_8])) ? (((/* implicit */int) arr_32 [(unsigned short)5] [i_1] [i_6] [i_6] [(unsigned short)13] [i_7] [i_8])) : (((/* implicit */int) arr_32 [i_8] [i_7] [i_0] [i_6] [i_1] [i_0] [i_0]))));
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) var_15))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_6])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)3140)))) : (((/* implicit */int) arr_3 [i_8] [i_1]))));
                    }
                    arr_34 [i_0] [i_0] [i_6] [i_7] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) arr_3 [i_1] [i_0])) <= (((/* implicit */int) arr_29 [i_7])))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_9 = (unsigned short)0/*0*/; i_9 < (unsigned short)17/*17*/; i_9 += (unsigned short)2/*2*/) 
                    {
                        arr_38 [i_9] = arr_30 [i_0] [i_0] [i_0] [i_0] [i_0];
                        var_31 = arr_11 [i_9] [i_6] [i_1] [i_0];
                    }
                    for (unsigned short i_10 = ((((/* implicit */int) var_14)) - (48245))/*0*/; i_10 < ((((/* implicit */int) var_7)) - (48639))/*17*/; i_10 += (unsigned short)4/*4*/) 
                    {
                        arr_42 [i_0] [i_0] [i_6] [i_7] [i_7] = arr_18 [i_7] [i_0] [i_0];
                        var_32 = arr_20 [i_10] [i_0];
                        var_33 |= arr_26 [i_10] [i_1];
                    }
                }
                for (unsigned short i_11 = (unsigned short)0/*0*/; i_11 < (unsigned short)17/*17*/; i_11 += (unsigned short)4/*4*/) 
                {
                    var_34 = ((/* implicit */unsigned short) min((var_34), (arr_40 [i_11] [(unsigned short)6] [(unsigned short)12] [i_0] [i_1] [i_0])));
                    arr_47 [i_1] = ((unsigned short) ((unsigned short) arr_43 [i_0] [i_6] [i_0] [i_0] [i_0]));
                    /* LoopSeq 1 */
                    for (unsigned short i_12 = (unsigned short)0/*0*/; i_12 < (unsigned short)17/*17*/; i_12 += (unsigned short)2/*2*/) 
                    {
                        var_35 = ((unsigned short) ((((/* implicit */_Bool) arr_8 [i_12] [i_6] [i_0] [i_0])) ? (((/* implicit */int) arr_40 [i_0] [i_1] [i_1] [i_1] [i_11] [i_0])) : (((/* implicit */int) (unsigned short)62409))));
                        var_36 = arr_6 [i_0];
                    }
                }
            }
        }
    }
    var_37 = ((unsigned short) (~(((/* implicit */int) (unsigned short)3968))));
}
