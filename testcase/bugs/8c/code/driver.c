#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18021777822273642356ULL;
unsigned int var_1 = 1268644533U;
unsigned long long int var_2 = 8997949598033196515ULL;
unsigned int var_3 = 2949925474U;
unsigned int var_4 = 3810167940U;
unsigned char var_5 = (unsigned char)233;
unsigned short var_6 = (unsigned short)22573;
signed char var_7 = (signed char)-91;
long long int var_8 = -4794643112730557026LL;
short var_9 = (short)-30278;
unsigned char var_10 = (unsigned char)244;
short var_11 = (short)-5687;
int zero = 0;
unsigned long long int var_13 = 5475678278191087229ULL;
long long int var_14 = -5476919342556306403LL;
unsigned int var_15 = 3176452393U;
int var_16 = 14319138;
unsigned short var_17 = (unsigned short)55561;
unsigned char var_18 = (unsigned char)227;
long long int arr_0 [11] ;
short arr_2 [11] ;
unsigned int arr_3 [11] ;
long long int arr_4 [11] [11] ;
unsigned int arr_5 [11] [11] ;
_Bool arr_9 [11] [11] ;
unsigned short arr_7 [11] [11] ;
unsigned char arr_10 [11] [11] [11] [11] [11] ;
short arr_11 [11] ;
unsigned long long int arr_12 [11] [11] [11] [11] ;
unsigned long long int arr_13 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 4685939015804134547LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (short)-13881;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 3092709621U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = 3428412329094654723LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = 1316749731U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)41701;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (unsigned char)192 : (unsigned char)211;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = (short)19691;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = 4409012425737134424ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 6597317853448999676ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
}
void test(unsigned long long int var_0, unsigned int var_1, unsigned long long int var_2, unsigned int var_3, unsigned int var_4, unsigned char var_5, unsigned short var_6, signed char var_7, long long int var_8, short var_9, unsigned char var_10, short var_11, int zero, long long int arr_0 [11] , short arr_2 [11] , unsigned int arr_3 [11] , long long int arr_4 [11] [11] , unsigned int arr_5 [11] [11] , _Bool arr_9 [11] [11] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, zero, arr_0 , arr_2 , arr_3 , arr_4 , arr_5 , arr_9 );
    checksum();
    printf("%llu\n", seed);
}
