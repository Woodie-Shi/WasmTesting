/*
yarpgen version 2.0 (build 91d3bf8 on 2024:03:02)
Seed: 3993822557
Invocation: /home/nju/yarpgen/build/yarpgen --std=c -o /home/nju/WASM-testing/src/temp/8
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
void test(short var_1, long long int var_4, unsigned short var_8, long long int var_10, long long int var_11, unsigned int var_12, unsigned short var_14, int zero, short arr_0 [13] , unsigned int arr_2 [13] , unsigned long long int arr_9 [25] , long long int arr_10 [25] , unsigned char arr_11 [25] [25] , unsigned long long int arr_15 [25] [25] [25] [25] , unsigned short arr_17 [25] [25] [25] [25] , unsigned short arr_20 [25] [25] [25] [25] [25] [25] ) {
    /* LoopNest 3 */
    for (long long int i_0 = ((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) 1640998331)) > (var_4))))) == (((((/* implicit */_Bool) (signed char)98)) ? (1639018199485566020LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)33)))))))) > (((/* implicit */int) var_1))))) + (3LL))/*3*/; i_0 < 11LL/*11*/; i_0 += ((var_11) + (2670806542075246041LL))/*2*/) 
    {
        for (signed char i_1 = (signed char)0/*0*/; i_1 < ((((/* implicit */int) ((/* implicit */signed char) arr_0 [i_0 + 1]))) + (130))/*13*/; i_1 += (signed char)2/*2*/) 
        {
            for (unsigned int i_2 = 0U/*0*/; i_2 < 13U/*13*/; i_2 += ((/* implicit */unsigned int) max((((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (unsigned char)186))))), ((-(((/* implicit */int) (short)30720))))))/*1*/) 
            {
                {
                    arr_8 [i_0] [(unsigned char)6] [i_2] [i_0] = ((/* implicit */signed char) arr_2 [i_0 + 1]);
                    var_17 = ((unsigned int) (~(3000612079390434316LL)));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_3 = 0U/*0*/; i_3 < ((((/* implicit */unsigned int) var_10)) - (2858008276U))/*25*/; i_3 += ((((/* implicit */unsigned int) var_10)) - (2858008300U))/*1*/) 
    {
        for (unsigned char i_4 = ((((/* implicit */int) ((/* implicit */unsigned char) ((short) (~(2595763839U)))))) - (127))/*1*/; i_4 < ((((/* implicit */int) ((/* implicit */unsigned char) ((max((arr_10 [i_3]), (arr_10 [i_3]))) >= ((+(arr_10 [i_3]))))))) + (22))/*23*/; i_4 += (unsigned char)4/*4*/) 
        {
            {
                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) arr_9 [i_3]))));
                /* LoopNest 3 */
                for (long long int i_5 = ((((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_11 [(unsigned short)12] [i_4 - 1]))))) : (min((var_10), (((/* implicit */long long int) (unsigned short)22063)))))) + (84LL))/*0*/; i_5 < 25LL/*25*/; i_5 += ((((/* implicit */long long int) (-(arr_9 [i_3])))) + (1028555016639675416LL))/*2*/) 
                {
                    for (unsigned int i_6 = ((var_12) - (4250502821U))/*0*/; i_6 < ((((/* implicit */unsigned int) (signed char)-15)) - (4294967256U))/*25*/; i_6 += ((((/* implicit */unsigned int) (_Bool)1)) + (1U))/*2*/) 
                    {
                        for (int i_7 = ((((/* implicit */int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (-2147483647 - 1))))) : (((((/* implicit */_Bool) arr_15 [i_5] [i_4] [i_4] [i_5])) ? (arr_15 [i_5] [i_4] [i_3] [i_5]) : (arr_15 [i_5] [i_3] [i_3] [i_5])))))) + (2))/*2*/; i_7 < 23/*23*/; i_7 += ((((/* implicit */int) var_8)) - (47925))/*1*/) 
                        {
                            {
                                arr_21 [i_3] [i_4 + 2] [i_3] [i_6] [i_7] = ((/* implicit */unsigned long long int) var_11);
                                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((arr_20 [i_7] [i_6] [i_5] [i_4] [i_3] [i_3]), (max((arr_17 [i_3] [i_4] [i_4] [i_7]), (((/* implicit */unsigned short) arr_11 [i_5] [i_5]))))))))))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)16094)) || (((/* implicit */_Bool) 18446744073709551605ULL))));
                var_21 = ((/* implicit */unsigned char) (-(max((((/* implicit */unsigned long long int) (-(arr_10 [i_3])))), (((arr_9 [i_4]) / (((/* implicit */unsigned long long int) var_4))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (+((-(var_11))))))));
}
