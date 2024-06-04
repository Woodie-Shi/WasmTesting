/*
yarpgen version 2.0 (build 91d3bf8 on 2024:03:02)
Seed: 453013547
Invocation: /home/nju/yarpgen/build/yarpgen --std=c -o /home/nju/WASM-testing/src/temp/7
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
void test(_Bool var_0, _Bool var_2, _Bool var_4, _Bool var_7, _Bool var_8, _Bool var_9, _Bool var_10, _Bool var_12, _Bool var_13, _Bool var_14, _Bool var_15, _Bool var_16, _Bool var_18, int zero, _Bool arr_0 [13] , _Bool arr_1 [13] , _Bool arr_3 [13] [13] , _Bool arr_4 [13] [13] [13] , _Bool arr_6 [13] , _Bool arr_7 [13] [13] [13] [13] , _Bool arr_8 [13] [13] , _Bool arr_9 [13] [13] [13] [13] [13] [13] , _Bool arr_12 [13] , _Bool arr_13 [13] [13] [13] [13] , _Bool arr_14 [13] [13] [13] [13] ) {
    var_19 = ((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) ((_Bool) min((var_14), (var_10))))) : (((/* implicit */int) var_4))));
    /* LoopNest 2 */
    for (_Bool i_0 = (_Bool)0/*0*/; i_0 < ((/* implicit */int) (_Bool)1)/*1*/; i_0 += ((((/* implicit */int) ((/* implicit */_Bool) ((((/* implicit */int) var_4)) - (((/* implicit */int) var_12)))))) + (1))/*1*/) 
    {
        for (_Bool i_1 = (_Bool)0/*0*/; i_1 < (_Bool)1/*1*/; i_1 += ((((/* implicit */int) arr_1 [i_0])) + (1))/*1*/) 
        {
            {
                var_20 *= (_Bool)1;
                var_21 = ((/* implicit */_Bool) min((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)1))));
                arr_5 [i_1] = var_9;
                /* LoopNest 2 */
                for (_Bool i_2 = ((((/* implicit */int) var_2)) - (1))/*0*/; i_2 < ((/* implicit */int) var_14)/*1*/; i_2 += ((((/* implicit */int) arr_4 [(_Bool)1] [i_1] [i_1])) + (1))/*1*/) 
                {
                    for (_Bool i_3 = ((/* implicit */int) var_16)/*1*/; i_3 < (_Bool)1/*1*/; i_3 += ((((/* implicit */int) ((/* implicit */_Bool) ((((/* implicit */int) (!(var_8)))) - (((/* implicit */int) var_15)))))) + (1))/*1*/) 
                    {
                        {
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * ((-(((/* implicit */int) ((_Bool) arr_7 [i_0] [i_1] [i_0] [i_3])))))));
                            arr_11 [i_0] [(_Bool)1] [(_Bool)1] [i_1] = arr_7 [i_2] [i_3 - 1] [i_3 - 1] [i_3 - 1];
                            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((_Bool) arr_1 [i_3 - 1])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_14)))))));
                            var_24 = ((_Bool) ((((/* implicit */int) (_Bool)1)) < (((var_12) ? (((/* implicit */int) arr_8 [i_1] [(_Bool)1])) : (((/* implicit */int) arr_8 [i_1] [i_1]))))));
                        }
                    } 
                } 
                if (((/* implicit */_Bool) (-(((/* implicit */int) (!(arr_4 [(_Bool)1] [(_Bool)1] [i_1])))))))
                {
                    if (((_Bool) max((var_16), (arr_8 [(_Bool)1] [(_Bool)1]))))
                    {
                        /* LoopNest 2 */
                        for (_Bool i_4 = ((/* implicit */int) var_18)/*0*/; i_4 < (_Bool)1/*1*/; i_4 += ((((/* implicit */int) var_13)) + (1))/*1*/) 
                        {
                            for (_Bool i_5 = (_Bool)0/*0*/; i_5 < ((/* implicit */int) var_0)/*1*/; i_5 += ((/* implicit */int) arr_13 [i_4] [i_1] [i_0] [i_0])/*1*/) 
                            {
                                {
                                    arr_17 [i_1] [i_1] [i_4] [i_5] [(_Bool)1] [i_5] = var_14;
                                    arr_18 [i_0] [i_0] [i_1] = max((((_Bool) arr_6 [i_0])), (max(((_Bool)1), ((_Bool)1))));
                                    var_25 = arr_12 [i_1];
                                }
                            } 
                        } 
                        /* LoopNest 3 */
                        for (_Bool i_6 = ((/* implicit */int) var_13)/*0*/; i_6 < ((/* implicit */int) var_8)/*1*/; i_6 += (_Bool)1/*1*/) 
                        {
                            for (_Bool i_7 = ((/* implicit */int) var_7)/*0*/; i_7 < ((/* implicit */int) ((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (min((((/* implicit */int) arr_14 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_0])), (((((/* implicit */int) arr_7 [(_Bool)1] [i_1] [i_0] [i_0])) * (((/* implicit */int) (_Bool)1)))))))))/*1*/; i_7 += ((((/* implicit */int) (!(((/* implicit */_Bool) max((((((/* implicit */int) arr_6 [i_1])) * (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((_Bool) (_Bool)1))))))))) + (1))/*1*/) 
                            {
                                for (_Bool i_8 = ((/* implicit */int) var_10)/*1*/; i_8 < ((((/* implicit */int) var_15)) + (1))/*1*/; i_8 += (_Bool)1/*1*/) 
                                {
                                    {
                                        arr_28 [(_Bool)0] [(_Bool)0] [(_Bool)0] [(_Bool)0] [i_7] [i_7] [i_8] |= arr_13 [i_0] [(_Bool)1] [i_6] [i_7];
                                        var_26 = arr_3 [(_Bool)1] [(_Bool)1];
                                    }
                                } 
                            } 
                        } 
                    }

                    arr_29 [(_Bool)1] [(_Bool)1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_8 [i_1] [i_1]) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_8 [i_1] [i_1]))))) ? (((/* implicit */int) max(((_Bool)1), (arr_8 [i_1] [i_1])))) : (((/* implicit */int) ((_Bool) var_8)))));
                    var_27 = arr_7 [i_0] [i_1] [i_1] [i_1];
                    arr_30 [i_0] [i_1] = (_Bool)0;
                }

            }
        } 
    } 
    var_28 = var_8;
    var_29 |= min((((_Bool) (-(((/* implicit */int) var_8))))), (var_4));
    var_30 = var_2;
}
