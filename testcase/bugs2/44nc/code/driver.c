#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 2913861751390128650ULL;
int var_3 = -1516745280;
unsigned int var_4 = 2943872652U;
short var_5 = (short)18433;
unsigned int var_6 = 3487558476U;
unsigned char var_7 = (unsigned char)192;
unsigned long long int var_8 = 17020409934792565432ULL;
unsigned long long int var_9 = 18388869485398891747ULL;
_Bool var_11 = (_Bool)0;
short var_12 = (short)8448;
int zero = 0;
long long int var_13 = 4305154303663428490LL;
int var_14 = 207324989;
short var_15 = (short)-17984;
unsigned int var_16 = 819153655U;
_Bool arr_4 [18] [18] ;
_Bool arr_13 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
}
void test(_Bool var_0, unsigned long long int var_1, int var_3, unsigned int var_4, short var_5, unsigned int var_6, unsigned char var_7, unsigned long long int var_8, unsigned long long int var_9, _Bool var_11, short var_12, int zero, _Bool arr_4 [18] [18] );

int main() {
    init();
    test(var_0, var_1, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_11, var_12, zero, arr_4 );
    checksum();
    printf("%llu\n", seed);
}
