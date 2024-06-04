#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5291511110338107165LL;
int var_1 = -747832821;
unsigned char var_3 = (unsigned char)157;
int var_5 = 1103685216;
unsigned short var_6 = (unsigned short)10236;
_Bool var_7 = (_Bool)1;
long long int var_8 = 7779490442836994229LL;
short var_9 = (short)19306;
short var_10 = (short)11198;
int zero = 0;
unsigned int var_11 = 3770616077U;
long long int var_12 = -4427480460470308383LL;
unsigned char var_13 = (unsigned char)166;
signed char var_14 = (signed char)114;
signed char var_15 = (signed char)90;
_Bool arr_0 [24] ;
short arr_4 [24] [24] ;
long long int arr_6 [24] [24] [24] [24] ;
unsigned char arr_7 [24] [24] [24] [24] ;
unsigned long long int arr_14 [24] [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (short)10793;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 1439018169399932888LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned char)6;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = 16846235515618619593ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test(long long int var_0, int var_1, unsigned char var_3, int var_5, unsigned short var_6, _Bool var_7, long long int var_8, short var_9, short var_10, int zero, _Bool arr_0 [24] , short arr_4 [24] [24] , long long int arr_6 [24] [24] [24] [24] , unsigned char arr_7 [24] [24] [24] [24] );

int main() {
    init();
    test(var_0, var_1, var_3, var_5, var_6, var_7, var_8, var_9, var_10, zero, arr_0 , arr_4 , arr_6 , arr_7 );
    checksum();
    printf("%llu\n", seed);
}
