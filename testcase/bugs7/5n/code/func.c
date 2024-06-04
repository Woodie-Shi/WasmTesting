/*
yarpgen version 2.0 (build 91d3bf8 on 2024:03:02)
Seed: 4205913407
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
void test(unsigned char var_0, long long int var_1, long long int var_2, short var_3, int var_4, unsigned char var_5, unsigned short var_7, int var_8, long long int var_9, unsigned char var_10, int zero, int arr_0 [21] [21] , _Bool arr_1 [21] , signed char arr_2 [21] [21] [21] , long long int arr_3 [21] [21] [21] , unsigned short arr_4 [21] [21] , _Bool arr_5 [21] , short arr_6 [21] [21] [21] [21] , long long int arr_7 [21] , unsigned int arr_8 [21] [21] [21] [21] [21] [21] , unsigned int arr_9 [21] [21] [21] [21] , long long int arr_13 [21] [21] [21] , unsigned char arr_14 [21] [21] , long long int arr_16 [21] [21] [21] , unsigned int arr_17 [21] [21] [21] [21] [21] [21] , long long int arr_18 [21] [21] [21] [21] [21] , unsigned char arr_21 [23] [23] , unsigned char arr_22 [23] , signed char arr_23 [23] [23] [23] , long long int arr_24 [23] , signed char arr_25 [23] [23] [23] [23] , int arr_26 [23] [23] , unsigned char arr_27 [23] [23] [23] , unsigned int arr_28 [23] [23] [23] [23] ) {
    /* LoopNest 2 */
    for (unsigned short i_0 = (unsigned short)0/*0*/; i_0 < (unsigned short)21/*21*/; i_0 += ((((/* implicit */int) ((/* implicit */unsigned short) (((-(((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))) & (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (-(((/* implicit */int) var_7)))))))))))) + (4))/*4*/) 
    {
        for (unsigned char i_1 = (unsigned char)0/*0*/; i_1 < ((((/* implicit */int) ((/* implicit */unsigned char) var_2))) - (57))/*21*/; i_1 += ((((/* implicit */int) ((/* implicit */unsigned char) var_8))) - (220))/*3*/) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = ((((/* implicit */int) ((/* implicit */short) var_9))) - (12911))/*0*/; i_2 < ((((/* implicit */int) ((/* implicit */short) (-(((/* implicit */int) ((signed char) ((arr_1 [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [(unsigned char)9] [(unsigned char)17] [i_0]))) : (arr_3 [i_1] [i_1] [i_0]))))))))) + (66))/*21*/; i_2 += ((((/* implicit */int) var_3)) - (4938))/*1*/) 
                {
                    for (_Bool i_3 = (_Bool)0/*0*/; i_3 < ((/* implicit */int) ((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_2]))/*1*/; i_3 += (_Bool)1/*1*/) 
                    {
                        {
                            var_12 += ((/* implicit */short) max((((/* implicit */int) (unsigned short)32194)), (2147483642)));
                            arr_10 [i_1] [i_0] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (short)-1303)) ? (((/* implicit */int) (unsigned short)48)) : (((/* implicit */int) (unsigned char)211))))));
                            arr_11 [i_1] [i_1] [i_1] [i_2] = ((/* implicit */short) min((((/* implicit */int) ((short) ((((/* implicit */_Bool) (short)-18)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)46095))) : (329926718U))))), (min((((/* implicit */int) ((arr_1 [i_0]) || (((/* implicit */_Bool) arr_2 [i_3] [i_1] [i_0]))))), (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [(short)14] [0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_2] [i_3])) : (arr_0 [i_0] [i_0])))))));
                            arr_12 [i_1] = ((/* implicit */unsigned long long int) arr_2 [i_3] [(unsigned short)4] [i_1]);
                        }
                    } 
                } 
                var_13 += ((/* implicit */long long int) ((((min((((/* implicit */long long int) arr_9 [i_0] [i_0] [i_0] [i_1])), (arr_7 [i_0]))) & (((/* implicit */long long int) ((arr_8 [i_0] [i_0] [(unsigned short)0] [i_0] [i_0] [i_1]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))))))) > (((/* implicit */long long int) ((/* implicit */int) ((max((11LL), (((/* implicit */long long int) (short)-29226)))) != (((/* implicit */long long int) ((/* implicit */int) (short)16425)))))))));
                var_14 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((arr_5 [17U]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0]))) : (arr_8 [i_1] [i_1] [i_1] [i_0] [i_0] [i_0])))))) ? ((-(arr_3 [i_0] [i_0] [i_0]))) : (((/* implicit */long long int) ((max((arr_9 [i_0] [(signed char)3] [(signed char)3] [i_0]), (arr_8 [(_Bool)1] [i_1] [(unsigned char)1] [4U] [i_0] [i_0]))) / (((/* implicit */unsigned int) max((arr_0 [i_0] [i_0]), (((/* implicit */int) arr_6 [i_0] [i_0] [14ULL] [i_1]))))))))));
                /* LoopNest 2 */
                for (unsigned int i_4 = 0U/*0*/; i_4 < 21U/*21*/; i_4 += ((((/* implicit */unsigned int) var_0)) - (100U))/*4*/) 
                {
                    for (unsigned int i_5 = ((((/* implicit */unsigned int) (+(((min((((/* implicit */long long int) arr_14 [i_0] [i_0])), (arr_7 [i_0]))) % (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_1] [i_4])) ? (arr_7 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [(_Bool)1] [i_1])))))))))) + (2U))/*2*/; i_5 < 20U/*20*/; i_5 += 3U/*3*/) 
                    {
                        {
                            arr_19 [i_0] [i_1] [(unsigned short)6] [i_1] [i_5 - 1] = ((/* implicit */long long int) arr_2 [i_0] [i_4] [i_5 + 1]);
                            arr_20 [12] [i_1] [i_1] [i_5 - 1] = ((/* implicit */unsigned int) ((signed char) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_4] [i_1]))) % (arr_8 [i_0] [i_0] [i_4] [i_5] [(short)5] [i_5]))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_4]))))))));
                            var_15 = ((/* implicit */short) ((((/* implicit */long long int) ((((arr_18 [i_1] [i_1] [i_1] [(_Bool)1] [11]) == (arr_13 [i_0] [i_0] [i_0]))) ? (arr_17 [i_5 - 1] [i_5 - 1] [i_5] [i_4] [i_1] [i_0]) : (arr_8 [i_0] [i_0] [i_1] [i_4] [i_5] [10LL])))) & (((((((/* implicit */_Bool) arr_16 [i_5 - 2] [i_4] [i_1])) ? (arr_13 [(unsigned char)18] [i_1] [i_4]) : (((/* implicit */long long int) arr_9 [i_0] [1LL] [4LL] [4LL])))) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_5] [i_4] [i_0] [i_1] [i_0] [(signed char)7]))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_6 = 1U/*1*/; i_6 < ((((/* implicit */unsigned int) var_10)) - (180U))/*21*/; i_6 += 1U/*1*/) 
    {
        for (unsigned long long int i_7 = ((((/* implicit */unsigned long long int) var_5)) - (231ULL))/*0*/; i_7 < ((((/* implicit */unsigned long long int) var_4)) - (74384998ULL))/*23*/; i_7 += ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) (short)26472))) && (((/* implicit */_Bool) (unsigned char)15)))))) % (((((/* implicit */_Bool) min((arr_22 [i_6]), (arr_21 [i_6] [i_6])))) ? (((((/* implicit */unsigned long long int) -800852670248999355LL)) / (4252555429644571427ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_6]))))))) + (3ULL))/*4*/) 
        {
            {
                /* LoopNest 2 */
                for (int i_8 = ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_6 + 2])) ? (((/* implicit */int) arr_22 [i_6 - 1])) : (((/* implicit */int) arr_22 [i_6 - 1]))))) ? (((unsigned long long int) min((arr_22 [i_7]), (arr_21 [(unsigned char)0] [(unsigned char)0])))) : (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_21 [i_6 - 1] [(unsigned short)18])))) ? ((+(((/* implicit */int) arr_21 [i_6] [i_6])))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_22 [i_6]))) == (arr_24 [i_6])))))))))) - (81))/*0*/; i_8 < ((((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned short)48677)))) ? (arr_24 [(unsigned short)16]) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_23 [i_6] [i_6 + 2] [i_7]))))))) + (104))/*23*/; i_8 += ((((/* implicit */int) var_1)) + (447502884))/*4*/) 
                {
                    for (short i_9 = ((((/* implicit */int) ((/* implicit */short) var_7))) + (32508))/*0*/; i_9 < ((((/* implicit */int) ((/* implicit */short) min((((/* implicit */int) arr_23 [i_6] [i_6] [i_8])), (max((((/* implicit */int) arr_22 [i_8])), (((((/* implicit */_Bool) arr_24 [i_7])) ? (((/* implicit */int) arr_22 [21])) : (((/* implicit */int) arr_27 [i_8] [i_6] [i_6])))))))))) + (104))/*23*/; i_9 += (short)4/*4*/) 
                    {
                        {
                            arr_31 [i_6] [i_9] = max(((+(((/* implicit */int) arr_21 [i_6 - 1] [i_6])))), (((/* implicit */int) min((arr_21 [i_6 + 2] [i_6]), (arr_21 [i_6 + 2] [i_6 - 1])))));
                            var_16 = ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) arr_22 [i_7])), (((18226379522168750180ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))) >> (((max((arr_24 [i_6 + 1]), (arr_24 [i_6 + 2]))) + (6922463620971047165LL)))));
                            var_17 = ((/* implicit */_Bool) arr_26 [i_6] [i_7]);
                        }
                    } 
                } 
                arr_32 [i_6] [i_7] = ((/* implicit */unsigned char) max((((long long int) arr_25 [i_6] [i_6] [i_6 - 1] [i_6])), (((/* implicit */long long int) arr_28 [i_6 + 1] [13] [i_6 + 1] [i_6]))));
                arr_33 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_27 [i_7] [i_7] [i_7])) << (((((/* implicit */int) arr_27 [i_6 - 1] [i_7] [i_6 + 1])) - (68))))) | (((/* implicit */int) arr_25 [i_6 + 2] [i_7] [(unsigned char)4] [i_7]))))) ? ((+(((/* implicit */int) ((arr_26 [i_7] [i_6]) < (((/* implicit */int) arr_23 [i_7] [i_6] [i_6]))))))) : (((/* implicit */int) arr_27 [i_6] [i_6] [i_6]))));
            }
        } 
    } 
}
