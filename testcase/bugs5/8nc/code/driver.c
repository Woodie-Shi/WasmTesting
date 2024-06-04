#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -624086641;
unsigned int var_2 = 1607049774U;
unsigned int var_3 = 1220833816U;
_Bool var_4 = (_Bool)0;
short var_5 = (short)-1776;
int var_7 = 11477350;
long long int var_8 = 1279325699191825740LL;
unsigned short var_9 = (unsigned short)57320;
int zero = 0;
unsigned char var_10 = (unsigned char)118;
unsigned char var_11 = (unsigned char)255;
_Bool var_12 = (_Bool)0;
long long int var_13 = 7578127197113577969LL;
unsigned char var_14 = (unsigned char)37;
unsigned char var_15 = (unsigned char)167;
unsigned char var_16 = (unsigned char)100;
unsigned char var_17 = (unsigned char)41;
unsigned long long int var_18 = 237218024282819007ULL;
unsigned char arr_1 [23] [23] ;
int arr_2 [23] ;
int arr_5 [23] [23] [23] ;
unsigned short arr_6 [23] [23] [23] ;
long long int arr_11 [23] ;
_Bool arr_14 [23] [23] [23] [23] [23] [23] [23] ;
_Bool arr_15 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)196;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -1176948455 : -1835944279;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -1211242309;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)32716 : (unsigned short)55276;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = 2263501783674247298LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 23; ++i_6) 
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
}
void test(int var_1, unsigned int var_2, unsigned int var_3, _Bool var_4, short var_5, int var_7, long long int var_8, unsigned short var_9, int zero, unsigned char arr_1 [23] [23] , int arr_2 [23] , int arr_5 [23] [23] [23] , unsigned short arr_6 [23] [23] [23] , long long int arr_11 [23] , _Bool arr_14 [23] [23] [23] [23] [23] [23] [23] );

int main() {
    init();
    test(var_1, var_2, var_3, var_4, var_5, var_7, var_8, var_9, zero, arr_1 , arr_2 , arr_5 , arr_6 , arr_11 , arr_14 );
    checksum();
    printf("%llu\n", seed);
}
