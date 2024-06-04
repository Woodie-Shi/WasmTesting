#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2317254074U;
unsigned short var_2 = (unsigned short)47863;
int var_3 = -762715035;
int var_4 = -1474005367;
unsigned short var_5 = (unsigned short)25492;
long long int var_6 = -8640930329108202753LL;
unsigned short var_7 = (unsigned short)19476;
unsigned int var_8 = 1481951202U;
int var_9 = 1894317040;
signed char var_10 = (signed char)2;
long long int var_11 = 1188244009477015303LL;
long long int var_12 = 5640640441297830284LL;
long long int var_13 = 172614365790145874LL;
unsigned int var_15 = 407332129U;
int zero = 0;
long long int var_17 = -2981095897051398454LL;
int var_18 = 1103636999;
signed char var_19 = (signed char)-35;
unsigned int var_20 = 2194714274U;
int var_21 = -1179961392;
signed char var_22 = (signed char)8;
signed char var_23 = (signed char)-82;
unsigned long long int var_24 = 3141743206179272066ULL;
signed char var_25 = (signed char)-63;
long long int arr_0 [19] ;
unsigned short arr_1 [19] ;
unsigned int arr_2 [19] [19] ;
unsigned long long int arr_4 [19] ;
unsigned short arr_5 [19] [19] [19] ;
unsigned short arr_7 [19] [19] [19] [19] ;
unsigned int arr_11 [19] ;
unsigned long long int arr_15 [19] ;
int arr_16 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 109564499100600261LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned short)21680;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = 1872464051U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 4876377923573259815ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)21526 : (unsigned short)12659;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned short)60694;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = 2610823050U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_15 [i_0] = 1879774078949681174ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_16 [i_0] = 1110182635;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test(unsigned int var_0, unsigned short var_2, int var_3, int var_4, unsigned short var_5, long long int var_6, unsigned short var_7, unsigned int var_8, int var_9, signed char var_10, long long int var_11, long long int var_12, long long int var_13, unsigned int var_15, int zero, long long int arr_0 [19] , unsigned short arr_1 [19] , unsigned int arr_2 [19] [19] , unsigned long long int arr_4 [19] , unsigned short arr_5 [19] [19] [19] , unsigned short arr_7 [19] [19] [19] [19] , unsigned int arr_11 [19] );

int main() {
    init();
    test(var_0, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_13, var_15, zero, arr_0 , arr_1 , arr_2 , arr_4 , arr_5 , arr_7 , arr_11 );
    checksum();
    printf("%llu\n", seed);
}
