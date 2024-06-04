/*
yarpgen version 2.0 (build 91d3bf8 on 2024:03:02)
Seed: 1393147738
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
void test(unsigned char var_0, unsigned short var_3, unsigned short var_4, unsigned short var_7, unsigned short var_8, unsigned int var_9, unsigned short var_10, int var_11, signed char var_12, int zero, unsigned short arr_0 [18] [18] , int arr_1 [18] , unsigned short arr_2 [18] , short arr_3 [18] , unsigned short arr_4 [18] , unsigned short arr_5 [18] [18] , unsigned long long int arr_8 [18] , short arr_9 [18] [18] , unsigned int arr_13 [18] , unsigned int arr_18 [18] [18] , unsigned short arr_19 [18] [18] [18] [18] ) {
    var_13 = ((/* implicit */long long int) var_10);
    /* LoopNest 2 */
    for (unsigned short i_0 = ((((/* implicit */int) var_3)) - (38880))/*0*/; i_0 < ((((/* implicit */int) ((/* implicit */unsigned short) min((min((((((/* implicit */_Bool) -1228796496)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (26910111U))), (var_9))), ((-(min((26910117U), (((/* implicit */unsigned int) (short)-18007)))))))))) - (38862))/*18*/; i_0 += ((((/* implicit */int) ((/* implicit */unsigned short) var_0))) - (150))/*3*/) 
    {
        for (short i_1 = (short)1/*1*/; i_1 < (short)17/*17*/; i_1 += ((((/* implicit */int) ((/* implicit */short) ((((/* implicit */_Bool) (-(max((((/* implicit */int) (unsigned char)157)), (arr_1 [i_0])))))) ? (((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) arr_1 [i_0])) : (4268057167U))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))))))) + (32751))/*3*/) 
        {
            {
                var_14 *= ((/* implicit */unsigned short) (-(((/* implicit */int) var_8))));
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */int) arr_2 [i_0]);
                var_15 = ((/* implicit */unsigned short) ((_Bool) (!(((/* implicit */_Bool) arr_0 [i_1 - 1] [i_1 + 1])))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_2 = ((((/* implicit */int) var_0)) - (151))/*2*/; i_2 < (unsigned char)15/*15*/; i_2 += (unsigned char)2/*2*/) 
    {
        for (unsigned int i_3 = ((((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) arr_4 [i_2 - 1])), (((((/* implicit */_Bool) 26910093U)) ? (((/* implicit */unsigned long long int) 108986636)) : (arr_8 [i_2]))))), (min((((/* implicit */unsigned long long int) arr_9 [i_2 + 1] [i_2])), (arr_8 [i_2 + 1])))))) - (1786162311U))/*0*/; i_3 < ((((/* implicit */unsigned int) var_4)) - (39321U))/*18*/; i_3 += 1U/*1*/) 
        {
            for (short i_4 = ((((/* implicit */int) ((/* implicit */short) var_9))) - (32720))/*0*/; i_4 < (short)18/*18*/; i_4 += ((((/* implicit */int) ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -108986628)) ? (((/* implicit */int) arr_4 [i_2 + 3])) : (((/* implicit */int) arr_3 [i_2 + 3]))))), (((((/* implicit */_Bool) arr_5 [i_2 + 3] [i_3])) ? (((/* implicit */unsigned long long int) 425614981)) : (arr_8 [i_2 - 2]))))))) - (5211))/*3*/) 
            {
                {
                    var_16 = (~(108986627));
                    /* LoopNest 2 */
                    for (short i_5 = ((((/* implicit */int) ((/* implicit */short) var_12))) - (108))/*0*/; i_5 < ((((/* implicit */int) ((/* implicit */short) (-(((((/* implicit */int) arr_9 [i_2] [i_2 - 2])) + (((/* implicit */int) arr_9 [i_2] [i_2 - 1])))))))) + (31278))/*18*/; i_5 += (short)3/*3*/) 
                    {
                        for (unsigned char i_6 = ((((/* implicit */int) ((/* implicit */unsigned char) ((unsigned int) min((((/* implicit */unsigned short) (short)-947)), (arr_4 [i_5])))))) - (90))/*4*/; i_6 < ((((/* implicit */int) ((/* implicit */unsigned char) ((unsigned int) min((((((/* implicit */_Bool) (unsigned char)93)) ? (((/* implicit */int) arr_5 [i_2] [i_3])) : (108986659))), (((/* implicit */int) arr_2 [i_2 + 3]))))))) - (152))/*17*/; i_6 += ((/* implicit */int) ((/* implicit */unsigned char) var_11))/*3*/) 
                        {
                            {
                                var_17 = ((/* implicit */int) arr_5 [(_Bool)1] [9U]);
                                arr_21 [i_3] [i_3] [i_3] [3] [i_4] [14] [(short)14] = ((26910111U) * (((/* implicit */unsigned int) 108986615)));
                                var_18 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) var_7)), (((((/* implicit */_Bool) arr_13 [i_5])) ? (((/* implicit */int) arr_19 [i_2] [i_3] [i_5] [i_6 - 1])) : (((/* implicit */int) var_0))))))) ? (((/* implicit */unsigned int) (+(((int) 3444142020U))))) : (((((((/* implicit */_Bool) 26910115U)) ? (26910114U) : (arr_18 [i_3] [i_3]))) + (((/* implicit */unsigned int) (-(((/* implicit */int) var_8)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
