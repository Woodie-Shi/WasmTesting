#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1661346976;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)0;
signed char var_5 = (signed char)-29;
signed char var_6 = (signed char)47;
unsigned int var_7 = 1209911206U;
unsigned int var_9 = 1193091233U;
int zero = 0;
int var_11 = 766409349;
_Bool var_12 = (_Bool)1;
short var_13 = (short)1071;
unsigned int var_14 = 3676953971U;
unsigned long long int var_15 = 15524292396325650270ULL;
signed char var_16 = (signed char)-43;
int var_17 = -1892741064;
unsigned char var_18 = (unsigned char)192;
unsigned char arr_3 [16] ;
unsigned long long int arr_4 [16] [16] ;
unsigned int arr_7 [19] [19] ;
unsigned short arr_5 [16] ;
int arr_9 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (unsigned char)26;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = 1015498154059820295ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_7 [i_0] [i_1] = 2211680935U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (unsigned short)12256;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = -381199672;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test(int var_1, _Bool var_2, _Bool var_3, signed char var_5, signed char var_6, unsigned int var_7, unsigned int var_9, int zero, unsigned char arr_3 [16] , unsigned long long int arr_4 [16] [16] , unsigned int arr_7 [19] [19] );

int main() {
    init();
    test(var_1, var_2, var_3, var_5, var_6, var_7, var_9, zero, arr_3 , arr_4 , arr_7 );
    checksum();
    printf("%llu\n", seed);
}
