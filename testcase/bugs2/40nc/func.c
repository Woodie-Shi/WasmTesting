/*
yarpgen version 2.0 (build 91d3bf8 on 2024:03:02)
Seed: 2672483987
Invocation: /home/nju/yarpgen/build/yarpgen --std=c -o /home/nju/WASM-testing/src/temp/2
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
void test(signed char var_0, signed char var_1, signed char var_2, unsigned short var_4, unsigned int var_5, unsigned short var_7, unsigned int var_8, long long int var_9, unsigned int var_10, long long int var_12, unsigned short var_13, unsigned int var_14, _Bool var_15, _Bool var_16, int zero, long long int arr_4 [11] [11] , _Bool arr_10 [12] [12] [12] , unsigned int arr_11 [12] [12] [12] ) {
    if (((/* implicit */_Bool) min((((/* implicit */int) var_16)), ((~((~(((/* implicit */int) var_4)))))))))
    {
        /* LoopNest 2 */
        for (unsigned long long int i_0 = ((((/* implicit */unsigned long long int) var_7)) - (26632ULL))/*0*/; i_0 < ((((/* implicit */unsigned long long int) var_0)) - (18446744073709551545ULL))/*11*/; i_0 += ((((/* implicit */unsigned long long int) var_2)) - (22ULL))/*3*/) 
        {
            for (unsigned short i_1 = ((((/* implicit */int) ((/* implicit */unsigned short) var_12))) - (24663))/*0*/; i_1 < ((((/* implicit */int) var_4)) - (54895))/*11*/; i_1 += ((((/* implicit */int) ((/* implicit */unsigned short) var_8))) - (63031))/*3*/) 
            {
                {
                    arr_5 [(_Bool)1] |= ((/* implicit */unsigned short) arr_4 [i_0] [i_0]);
                    arr_6 [i_0] = ((/* implicit */unsigned char) ((((-553656899) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))));
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */int) var_15)) | (((/* implicit */int) var_7)))))));
    }
    else
    {
        if (var_15)
        {
            var_19 = ((/* implicit */long long int) var_14);
            var_20 *= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) (-(var_10))))) && (((/* implicit */_Bool) var_7))));
            var_21 |= ((/* implicit */short) var_1);
            /* LoopNest 2 */
            for (_Bool i_2 = ((((/* implicit */int) var_15)) - (1))/*0*/; i_2 < ((((/* implicit */int) ((/* implicit */_Bool) var_13))) - (1))/*0*/; i_2 += (_Bool)1/*1*/) 
            {
                for (_Bool i_3 = (_Bool)1/*1*/; i_3 < (_Bool)1/*1*/; i_3 += (_Bool)1/*1*/) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max((553656899), (((/* implicit */int) arr_10 [i_2 + 1] [i_3 - 1] [i_3 - 1]))))), (var_5)))) - (553656898ULL))/*1*/; i_4 < 11ULL/*11*/; i_4 += 3ULL/*3*/) 
                        {
                            arr_16 [i_2] [i_3 - 1] [i_4 - 1] = ((/* implicit */unsigned int) ((int) var_13));
                            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((short) -6870998380141118811LL)))));
                            var_23 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((var_15) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_13))))), (arr_11 [i_4 - 1] [i_3] [i_2 + 1])));
                            arr_17 [i_2] [i_3] [i_4] [i_3] = ((/* implicit */signed char) (~(var_8)));
                            arr_18 [3LL] [i_3] [i_2 + 1] [i_2] = ((/* implicit */signed char) (+(min((((((/* implicit */_Bool) var_14)) ? (var_10) : (var_14))), (min((var_8), (((/* implicit */unsigned int) var_13))))))));
                        }
                        arr_19 [i_2] &= ((/* implicit */signed char) max((((((/* implicit */_Bool) 553656899)) ? (arr_11 [i_3 - 1] [i_3 - 1] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned int) ((short) -553656899)))));
                    }
                } 
            } 
        }

        var_24 -= ((/* implicit */unsigned long long int) (-(-553656900)));
        var_25 = ((/* implicit */unsigned long long int) min((var_8), (((/* implicit */unsigned int) (-(((/* implicit */int) var_16)))))));
    }

    var_26 = ((/* implicit */int) ((unsigned short) ((short) min((var_9), (((/* implicit */long long int) var_13))))));
    var_27 = ((/* implicit */long long int) min((var_27), (((long long int) var_0))));
    var_28 = ((/* implicit */unsigned short) var_1);
}
