#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9045237294857132837ULL;
short var_4 = (short)-8944;
short var_6 = (short)-9083;
unsigned long long int var_7 = 17068282497570846058ULL;
int var_8 = -2050100997;
unsigned short var_10 = (unsigned short)56952;
short var_14 = (short)-15926;
int zero = 0;
short var_15 = (short)-13405;
unsigned char var_16 = (unsigned char)171;
short var_17 = (short)-4451;
long long int var_18 = 8512536907712364373LL;
unsigned short arr_0 [21] ;
signed char arr_1 [21] ;
unsigned char arr_2 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned short)42307;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (signed char)-26;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)143;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test(unsigned long long int var_0, short var_4, short var_6, unsigned long long int var_7, int var_8, unsigned short var_10, short var_14, int zero, unsigned short arr_0 [21] , signed char arr_1 [21] );

int main() {
    init();
    test(var_0, var_4, var_6, var_7, var_8, var_10, var_14, zero, arr_0 , arr_1 );
    checksum();
    printf("%llu\n", seed);
}
