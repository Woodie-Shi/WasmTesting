#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28572;
long long int var_2 = 3137664211397702331LL;
unsigned long long int var_3 = 11422668373448007500ULL;
signed char var_4 = (signed char)-43;
signed char var_5 = (signed char)-110;
unsigned char var_9 = (unsigned char)51;
long long int var_11 = 9146716275831220068LL;
unsigned short var_12 = (unsigned short)24954;
signed char var_13 = (signed char)11;
short var_15 = (short)97;
int zero = 0;
long long int var_16 = -4858608321824706241LL;
int var_17 = 1404271416;
int var_18 = 1278089502;
int var_19 = -263538684;
short var_20 = (short)-28834;
_Bool var_21 = (_Bool)0;
long long int var_22 = -5353773249103385712LL;
short var_23 = (short)32083;
short arr_4 [20] ;
unsigned int arr_5 [20] ;
short arr_6 [19] ;
short arr_3 [15] ;
unsigned long long int arr_8 [19] [19] ;
unsigned int arr_9 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (short)-28988;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = 439617900U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (short)16308;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (short)-6532;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_8 [i_0] [i_1] = 4226988446335468688ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = 780057170U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test(short var_0, long long int var_2, unsigned long long int var_3, signed char var_4, signed char var_5, unsigned char var_9, long long int var_11, unsigned short var_12, signed char var_13, short var_15, int zero, short arr_4 [20] , unsigned int arr_5 [20] , short arr_6 [19] );

int main() {
    init();
    test(var_0, var_2, var_3, var_4, var_5, var_9, var_11, var_12, var_13, var_15, zero, arr_4 , arr_5 , arr_6 );
    checksum();
    printf("%llu\n", seed);
}
