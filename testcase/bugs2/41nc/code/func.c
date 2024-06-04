/*
yarpgen version 2.0 (build 91d3bf8 on 2024:03:02)
Seed: 2152345732
Invocation: /home/nju/yarpgen/build/yarpgen --std=c -o /home/nju/WASM-testing/src/temp/9
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
void test(unsigned char var_0, _Bool var_1, short var_2, int var_3, unsigned int var_5, int var_6, unsigned short var_7, unsigned char var_8, unsigned long long int var_9, int var_10, short var_11, unsigned char var_13, unsigned int var_14, long long int var_15, unsigned short var_16, unsigned short var_17, int zero, unsigned short arr_0 [18] , int arr_1 [18] [18] , unsigned short arr_2 [18] [18] , int arr_3 [18] , long long int arr_7 [15] [15] , unsigned long long int arr_8 [15] [15] , unsigned char arr_10 [15] , unsigned short arr_11 [15] [15] , unsigned short arr_12 [15] , unsigned long long int arr_13 [15] [15] , int arr_14 [15] [15] [15] [15] , signed char arr_17 [15] [15] [15] [15] , unsigned int arr_20 [15] [15] ) {
    var_18 += ((/* implicit */unsigned short) var_10);
    /* LoopNest 2 */
    for (unsigned short i_0 = ((((/* implicit */int) ((/* implicit */unsigned short) var_3))) - (51998))/*0*/; i_0 < (unsigned short)18/*18*/; i_0 += ((((/* implicit */int) ((/* implicit */unsigned short) min((((((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) var_17)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (372816499) : (((/* implicit */int) var_13))))) : (var_15))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_3))))))))) + (2))/*3*/) 
    {
        for (int i_1 = ((((/* implicit */int) var_9)) - (647880471))/*1*/; i_1 < ((((/* implicit */int) var_13)) - (111))/*15*/; i_1 += 3/*3*/) 
        {
            {
                arr_4 [i_1] = ((/* implicit */signed char) (((+(arr_3 [i_1]))) ^ (max((min((((/* implicit */int) arr_0 [i_1])), (arr_1 [i_0] [i_0]))), (((/* implicit */int) (unsigned char)16))))));
                arr_5 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) min((arr_0 [i_1 + 3]), (arr_0 [i_0])))) <= (((/* implicit */int) arr_0 [i_0]))));
                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) min(((~(((/* implicit */int) (unsigned short)22760)))), (((((/* implicit */_Bool) arr_2 [i_1 + 2] [i_1 + 2])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_0 [i_1 - 1])))))))));
                arr_6 [10ULL] &= ((/* implicit */long long int) min(((~(((/* implicit */int) (short)-28060)))), (max((((/* implicit */int) var_7)), (arr_1 [i_1 - 1] [i_1 + 1])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = ((((/* implicit */int) ((/* implicit */signed char) max((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)42762)), (11387701858114730994ULL)))) ? (((int) (unsigned short)42775)) : (((/* implicit */int) (unsigned short)42776)))), (((/* implicit */int) var_0)))))) - (23))/*0*/; i_2 < (signed char)15/*15*/; i_2 += ((((/* implicit */int) ((/* implicit */signed char) var_17))) - (123))/*2*/) 
    {
        for (long long int i_3 = 4LL/*4*/; i_3 < ((((/* implicit */long long int) var_9)) - (4663500607613427469LL))/*11*/; i_3 += ((((/* implicit */long long int) var_0)) - (244LL))/*2*/) 
        {
            {
                /* LoopNest 3 */
                for (int i_4 = ((((/* implicit */int) var_14)) + (388722405))/*2*/; i_4 < 14/*14*/; i_4 += ((372816499) - (372816496))/*3*/) 
                {
                    for (_Bool i_5 = (_Bool)1/*1*/; i_5 < (_Bool)1/*1*/; i_5 += ((/* implicit */int) ((/* implicit */_Bool) ((unsigned short) ((max((((/* implicit */int) var_1)), (var_6))) * (((/* implicit */int) ((-860775134) <= (((/* implicit */int) arr_10 [i_2])))))))))/*1*/) 
                    {
                        for (int i_6 = ((((/* implicit */int) var_5)) + (1172914785))/*0*/; i_6 < ((((/* implicit */int) var_2)) - (30254))/*15*/; i_6 += ((((/* implicit */int) var_14)) + (388722404))/*1*/) 
                        {
                            {
                                arr_21 [1] [i_5] [i_4] [i_5] [i_6] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -372816499))));
                                if (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) (-(-860775134)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_12 [i_6]))))) : (((arr_8 [i_2] [i_3]) - (((/* implicit */unsigned long long int) var_5)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_3 [i_3]) / (((/* implicit */int) arr_2 [i_2] [i_4 + 1]))))) ? ((+(((/* implicit */int) arr_0 [i_2])))) : (max((((/* implicit */int) (unsigned short)24492)), (arr_3 [i_2])))))))))
                                {
                                    arr_22 [i_3] [i_3 - 3] [i_4] [i_5] [i_5] [i_4] [i_3 - 3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)16662)))) ? (((/* implicit */int) (unsigned short)49953)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)179))))))))));
                                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) max((((/* implicit */int) max((((/* implicit */unsigned short) arr_17 [i_2] [i_3] [i_5] [i_6])), ((unsigned short)59535)))), (50180056))))));
                                    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) max((arr_20 [i_3] [i_3 - 3]), (arr_20 [i_3] [i_3 - 3]))))));
                                    var_22 -= ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (arr_13 [i_3 - 3] [i_5 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_2] [i_3] [i_5] [i_6]))))));
                                }

                            }
                        } 
                    } 
                } 
                arr_23 [i_2] &= ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_17 [2ULL] [i_2] [i_3] [i_3 - 1])) ? (((/* implicit */int) var_8)) : (arr_1 [i_3] [i_2]))), ((~(arr_14 [i_2] [i_3 + 4] [i_3 + 1] [i_3])))));
                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((-1566913618482793757LL) <= (((/* implicit */long long int) 4294967286U))))), (min((arr_7 [i_2] [i_2]), (((/* implicit */long long int) arr_1 [i_3] [i_2]))))))) ? (((((/* implicit */_Bool) 255)) ? (-6117886749308654514LL) : (arr_7 [i_3] [i_3 + 3]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_3 + 2] [i_3 - 2] [i_3 + 3] [i_3 + 1])) ? (((var_5) / (((/* implicit */unsigned int) arr_3 [i_2])))) : (((((/* implicit */_Bool) (unsigned short)42767)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54507)))))))))))));
                arr_24 [10ULL] [i_3 + 2] = max((372816499), (((/* implicit */int) (unsigned short)42776)));
                var_24 = ((/* implicit */unsigned short) ((((min((((/* implicit */int) (!(((/* implicit */_Bool) 2604882036U))))), ((~(arr_1 [(unsigned short)11] [i_3]))))) + (2147483647))) << ((((((((!(((/* implicit */_Bool) (unsigned short)22752)))) ? (((/* implicit */int) arr_11 [i_3 + 4] [i_3 - 1])) : (((/* implicit */int) arr_17 [i_2] [i_2] [i_3 + 2] [i_3 - 4])))) + (57))) - (24)))));
            }
        } 
    } 
    var_25 ^= ((/* implicit */unsigned long long int) var_11);
    var_26 ^= ((/* implicit */_Bool) ((((int) max(((unsigned short)49953), (((/* implicit */unsigned short) var_8))))) + (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
}
