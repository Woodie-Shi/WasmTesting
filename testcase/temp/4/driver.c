#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2226270949U;
signed char var_1 = (signed char)-50;
unsigned short var_4 = (unsigned short)28389;
unsigned short var_6 = (unsigned short)65090;
_Bool var_8 = (_Bool)1;
short var_10 = (short)-2806;
unsigned char var_11 = (unsigned char)59;
unsigned short var_13 = (unsigned short)56186;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 1862627495U;
short var_16 = (short)28593;
int zero = 0;
unsigned char var_18 = (unsigned char)28;
unsigned char var_19 = (unsigned char)180;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)107;
long long int var_22 = 6785539896712877589LL;
unsigned short var_23 = (unsigned short)6062;
unsigned int var_24 = 3403536969U;
signed char var_25 = (signed char)-100;
int arr_1 [16] [16] ;
unsigned short arr_2 [16] [16] ;
signed char arr_3 [16] ;
short arr_4 [16] [16] [16] ;
int arr_5 [16] [16] ;
unsigned long long int arr_6 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = -278679649;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)17430;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (signed char)-26;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)22349;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = 1440186015;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 4157038853724213127ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test(unsigned int var_0, signed char var_1, unsigned short var_4, unsigned short var_6, _Bool var_8, short var_10, unsigned char var_11, unsigned short var_13, _Bool var_14, unsigned int var_15, short var_16, int zero, int arr_1 [16] [16] , unsigned short arr_2 [16] [16] , signed char arr_3 [16] , short arr_4 [16] [16] [16] );

int main() {
    init();
    test(var_0, var_1, var_4, var_6, var_8, var_10, var_11, var_13, var_14, var_15, var_16, zero, arr_1 , arr_2 , arr_3 , arr_4 );
    checksum();
    printf("%llu\n", seed);
}
