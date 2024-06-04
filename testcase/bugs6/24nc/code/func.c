/*
yarpgen version 2.0 (build 91d3bf8 on 2024:03:02)
Seed: 3689702160
Invocation: /home/nju/yarpgen/build/yarpgen --std=c -o /home/nju/WASM-testing/src/temp/6
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
void test(unsigned short var_0, unsigned short var_1, _Bool var_2, unsigned short var_3, int var_4, _Bool var_5, int var_6, unsigned short var_7, unsigned short var_8, unsigned short var_9, int var_10, int zero, signed char arr_0 [16] [16] , long long int arr_1 [16] , _Bool arr_2 [16] , unsigned short arr_3 [16] , unsigned short arr_4 [16] [16] , unsigned short arr_6 [16] [16] [16] [16] , int arr_9 [16] [16] [16] [16] , long long int arr_10 [16] [16] , unsigned short arr_13 [16] [16] [16] , unsigned short arr_14 [16] [16] [16] [16] [16] , _Bool arr_15 [16] [16] [16] [16] [16] [16] , unsigned short arr_17 [16] , unsigned short arr_18 [16] [16] [16] , int arr_20 [16] , unsigned char arr_21 [16] [16] [16] , int arr_22 [16] [16] [16] , int arr_27 [16] [16] [16] , unsigned char arr_30 [16] , int arr_35 [16] [16] [16] , unsigned short arr_37 [16] [16] [16] [16] , unsigned short arr_38 [16] [16] [16] [16] [16] [16] , unsigned short arr_40 [16] [16] [16] [16] [16] , int arr_47 [16] [16] [16] [16] [16] [16] [16] ) {
    /* LoopSeq 1 */
    for (unsigned short i_0 = ((((/* implicit */int) var_7)) - (56029))/*0*/; i_0 < ((((/* implicit */int) ((/* implicit */unsigned short) var_10))) - (42083))/*16*/; i_0 += ((((/* implicit */int) var_3)) - (21449))/*4*/) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = ((((/* implicit */unsigned long long int) var_10)) - (18446744072438850675ULL))/*0*/; i_1 < ((((/* implicit */unsigned long long int) 131071LL)) - (131055ULL))/*16*/; i_1 += ((((/* implicit */unsigned long long int) var_8)) - (42228ULL))/*2*/) 
        {
            /* LoopSeq 4 */
            for (unsigned short i_2 = ((((/* implicit */int) var_3)) - (21453))/*0*/; i_2 < (unsigned short)16/*16*/; i_2 += ((((/* implicit */int) var_3)) - (21452))/*1*/) /* same iter space */
            {
                arr_8 [i_0] [(unsigned char)14] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)35723)) ? (-8059104414905491695LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)14)))));
                var_11 = ((/* implicit */unsigned short) ((-445567500) ^ (((((/* implicit */int) var_1)) >> (((((/* implicit */int) arr_3 [i_0])) - (27915)))))));
            }
            for (unsigned short i_3 = ((((/* implicit */int) var_3)) - (21453))/*0*/; i_3 < (unsigned short)16/*16*/; i_3 += ((((/* implicit */int) var_3)) - (21452))/*1*/) /* same iter space */
            {
                arr_11 [(unsigned short)11] [i_3] = ((/* implicit */signed char) ((unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_9))))))));
                var_12 = ((/* implicit */unsigned short) -8059104414905491695LL);
            }
            for (unsigned short i_4 = (unsigned short)0/*0*/; i_4 < (unsigned short)16/*16*/; i_4 += ((((/* implicit */int) ((/* implicit */unsigned short) var_2))) + (2))/*3*/) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_5 = (unsigned short)0/*0*/; i_5 < (unsigned short)16/*16*/; i_5 += ((((/* implicit */int) var_1)) - (63698))/*4*/) 
                {
                    arr_16 [i_0] [i_1] [i_4] [(_Bool)1] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)61612))));
                    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)34673))))) ? (((/* implicit */int) arr_0 [i_0] [(_Bool)1])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0] [2])) && (((/* implicit */_Bool) var_7)))))));
                }
                var_14 &= ((/* implicit */unsigned short) max((1353923581), (((/* implicit */int) (_Bool)1))));
                var_15 = ((/* implicit */int) min((var_15), (arr_9 [i_0] [i_0] [i_1] [i_4])));
            }
            for (unsigned short i_6 = ((((/* implicit */int) ((/* implicit */unsigned short) (((!(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)61682))) == (-7220051019923502209LL))))) ? ((+(((/* implicit */int) (_Bool)0)))) : ((-(((/* implicit */int) arr_13 [i_0] [i_1] [i_1])))))))) + (1))/*1*/; i_6 < ((((/* implicit */int) ((/* implicit */unsigned short) -356178153))) - (9995))/*12*/; i_6 += ((((/* implicit */int) var_0)) - (6586))/*1*/) 
            {
                arr_19 [i_6 + 2] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)33940)) ? (((/* implicit */int) (unsigned short)13535)) : (-1290300915)));
                var_16 = ((/* implicit */long long int) var_9);
                var_17 ^= ((/* implicit */long long int) (_Bool)1);
            }
            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4398046511103ULL)) ? (arr_1 [i_0]) : (arr_1 [i_0])))) && (((/* implicit */_Bool) max((arr_1 [i_0]), (arr_1 [i_0]))))));
            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_0] [(unsigned char)4] [11LL] [(unsigned short)5] [(unsigned short)5])) | (((/* implicit */int) (_Bool)1))))) ? ((~(367284919))) : (((((/* implicit */_Bool) arr_14 [i_1] [i_0] [(unsigned short)1] [i_0] [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
        }
        for (unsigned long long int i_7 = ((((/* implicit */unsigned long long int) var_1)) - (63702ULL))/*0*/; i_7 < ((((/* implicit */unsigned long long int) max(((~(((/* implicit */int) arr_2 [i_0])))), (var_10)))) - (18446744073709551598ULL))/*16*/; i_7 += 3ULL/*3*/) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_8 = 0ULL/*0*/; i_8 < ((((/* implicit */unsigned long long int) 1290300915)) - (1290300899ULL))/*16*/; i_8 += ((((/* implicit */unsigned long long int) var_1)) - (63699ULL))/*3*/) 
            {
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_14 [i_0] [i_0] [i_0] [(unsigned short)0] [i_8]), (arr_14 [i_8] [9] [i_7] [i_7] [i_0])))) * ((+(((/* implicit */int) (unsigned char)210))))));
                arr_25 [i_0] [i_0] [i_0] &= arr_13 [i_0] [i_0] [i_8];
                var_21 = ((/* implicit */int) ((signed char) var_3));
            }
            arr_26 [i_0] = max((((((/* implicit */int) (unsigned short)52529)) << (((((/* implicit */int) var_9)) - (40047))))), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_7])) : (((/* implicit */int) arr_13 [i_7] [i_0] [i_0])))));
        }
        for (unsigned short i_9 = ((((/* implicit */int) ((/* implicit */unsigned short) var_10))) - (42097))/*2*/; i_9 < ((((/* implicit */int) var_1)) - (63687))/*15*/; i_9 += (unsigned short)1/*1*/) 
        {
            /* LoopSeq 3 */
            for (long long int i_10 = 0LL/*0*/; i_10 < ((((/* implicit */long long int) var_2)) + (15LL))/*16*/; i_10 += 3LL/*3*/) /* same iter space */
            {
                var_22 = ((/* implicit */int) max((var_22), (367284922)));
                if (((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_0] [i_9 + 1] [i_10] [i_0] [i_0] [i_9 - 2])) | (((/* implicit */int) (!(((/* implicit */_Bool) -7220051019923502209LL))))))))
                {
                    arr_33 [10] [i_0] [i_9 - 1] &= ((/* implicit */unsigned short) max(((+(((/* implicit */int) arr_2 [i_9 + 1])))), (((/* implicit */int) arr_30 [i_0]))));
                    var_23 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_21 [i_0] [i_9 - 2] [i_10])), (var_0)))) ? (((/* implicit */int) ((signed char) arr_6 [i_0] [i_0] [i_9] [i_9]))) : (((var_5) ? (((/* implicit */int) arr_6 [i_0] [i_9] [i_9 - 1] [i_10])) : (var_6)))))));
                }

                arr_34 [i_10] [i_10] [i_10] = ((/* implicit */int) arr_4 [4] [i_0]);
            }
            for (long long int i_11 = 0LL/*0*/; i_11 < ((((/* implicit */long long int) var_2)) + (15LL))/*16*/; i_11 += 3LL/*3*/) /* same iter space */
            {
                var_24 ^= ((/* implicit */unsigned short) var_6);
                /* LoopSeq 1 */
                for (unsigned long long int i_12 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_11])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7))))) | (7220051019923502185LL)))) ? ((+((~(((/* implicit */int) var_3)))))) : (max((arr_35 [i_9 + 1] [i_9 - 2] [i_9]), (var_4)))))) - (18446744073709530161ULL))/*1*/; i_12 < ((((/* implicit */unsigned long long int) var_1)) - (63687ULL))/*15*/; i_12 += ((((/* implicit */unsigned long long int) var_9)) - (40057ULL))/*2*/) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_13 = (unsigned short)0/*0*/; i_13 < (unsigned short)16/*16*/; i_13 += ((((/* implicit */int) var_7)) - (56028))/*1*/) /* same iter space */
                    {
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (~(((/* implicit */int) arr_38 [i_0] [i_9] [i_11] [i_11] [i_12] [i_12])))))) ? (((((/* implicit */_Bool) arr_14 [i_0] [i_9] [i_11] [i_12 - 1] [i_13])) ? (((/* implicit */int) (unsigned short)37329)) : (((/* implicit */int) var_8)))) : (((arr_15 [i_9 - 1] [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_11] [i_12 - 1]) ? (((/* implicit */int) arr_15 [i_0] [i_9 - 2] [i_9] [i_9 - 2] [i_9] [i_12 - 1])) : (var_6)))));
                        var_26 = ((/* implicit */_Bool) (-(((var_5) ? (((/* implicit */int) arr_40 [i_0] [i_9 - 2] [i_11] [i_12 + 1] [i_9 - 2])) : (((/* implicit */int) arr_40 [i_0] [i_9 - 1] [i_11] [i_12 - 1] [i_13]))))));
                    }
                    for (unsigned short i_14 = (unsigned short)0/*0*/; i_14 < (unsigned short)16/*16*/; i_14 += ((((/* implicit */int) var_7)) - (56028))/*1*/) /* same iter space */
                    {
                        var_27 = ((/* implicit */unsigned short) max(((-(arr_35 [i_9 - 1] [i_12 - 1] [(unsigned char)8]))), (arr_35 [i_9 - 1] [i_12 - 1] [i_14])));
                        if (((/* implicit */_Bool) arr_35 [i_9] [i_12] [i_14]))
                        {
                            var_28 = (+(((/* implicit */int) (signed char)74)));
                            var_29 = ((/* implicit */_Bool) (-(((unsigned long long int) arr_18 [i_14] [i_0] [i_11]))));
                            var_30 = ((/* implicit */signed char) ((((((/* implicit */int) arr_37 [i_0] [i_9 + 1] [i_12] [(unsigned char)4])) - (((/* implicit */int) arr_37 [i_0] [i_9 - 1] [i_11] [i_11])))) >> (((/* implicit */int) (((!(((/* implicit */_Bool) arr_13 [i_0] [i_9] [i_12 + 1])))) || (((/* implicit */_Bool) (unsigned short)65535)))))));
                        }

                        var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551615ULL)))) ? ((-(((/* implicit */int) var_2)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) != ((-(9223372036854775801LL))))))));
                    }
                    var_32 = ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0] [i_11])) && (((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_12 + 1])) - (((/* implicit */int) arr_17 [i_12 + 1])))))));
                    /* LoopSeq 1 */
                    for (_Bool i_15 = (_Bool)0/*0*/; i_15 < (_Bool)1/*1*/; i_15 += (_Bool)1/*1*/) 
                    {
                        arr_48 [i_12] [i_9] = ((/* implicit */unsigned short) var_4);
                        var_33 = ((/* implicit */int) (((!((!(((/* implicit */_Bool) (unsigned short)65523)))))) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-1)) : (arr_47 [i_15] [i_9] [i_9] [i_0] [i_15] [i_11] [6])))))) : (((unsigned long long int) arr_22 [i_9 - 1] [i_9] [i_9 + 1]))));
                    }
                }
                var_34 = ((/* implicit */long long int) ((signed char) max((max((arr_20 [i_0]), (((/* implicit */int) arr_2 [i_0])))), (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (var_2)))))));
                var_35 = ((max((arr_27 [i_9 - 2] [i_9 + 1] [i_9 + 1]), (arr_27 [i_9 - 2] [i_9 + 1] [i_9 - 1]))) / (arr_27 [i_9 + 1] [i_9 - 1] [i_9 - 1]));
            }
            for (long long int i_16 = 0LL/*0*/; i_16 < ((((/* implicit */long long int) var_2)) + (15LL))/*16*/; i_16 += 3LL/*3*/) /* same iter space */
            {
                var_36 = ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_9 [i_9 - 2] [i_9 - 1] [6ULL] [i_0]))))));
                var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) (+(((((/* implicit */int) (signed char)118)) / (((/* implicit */int) (unsigned short)12)))))))));
                var_38 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_9]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
            }
            arr_52 [i_9] = ((/* implicit */unsigned short) (signed char)-119);
        }
        var_39 = ((((/* implicit */_Bool) max((arr_27 [i_0] [i_0] [i_0]), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_40 [i_0] [i_0] [i_0] [(unsigned short)13] [i_0])) : (((/* implicit */int) var_3))))))) ? (367284928) : ((~(((/* implicit */int) ((unsigned short) (signed char)102))))));
    }
    var_40 = var_1;
}
