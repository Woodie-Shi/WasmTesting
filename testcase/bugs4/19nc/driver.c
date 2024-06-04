#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2029662017;
unsigned int var_1 = 1567407852U;
_Bool var_2 = (_Bool)0;
short var_3 = (short)21434;
unsigned char var_4 = (unsigned char)246;
unsigned char var_5 = (unsigned char)147;
int var_6 = -168477181;
short var_7 = (short)-9337;
unsigned int var_8 = 3450598018U;
unsigned short var_9 = (unsigned short)18969;
short var_10 = (short)-25923;
unsigned short var_11 = (unsigned short)10615;
signed char var_12 = (signed char)75;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)150;
signed char var_16 = (signed char)34;
signed char var_17 = (signed char)-76;
unsigned int var_18 = 3067448508U;
int zero = 0;
signed char var_19 = (signed char)18;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 10038405174173318075ULL;
long long int var_22 = 3968337819921429009LL;
unsigned int var_23 = 3011635444U;
unsigned long long int var_24 = 12945463744970341165ULL;
unsigned int var_25 = 2983337284U;
unsigned int var_26 = 2099182676U;
unsigned long long int var_27 = 4471506136924607797ULL;
long long int var_28 = -4457775046243457942LL;
signed char var_29 = (signed char)-127;
unsigned char var_30 = (unsigned char)85;
unsigned char arr_0 [20] ;
unsigned int arr_1 [20] ;
unsigned char arr_2 [20] ;
short arr_7 [17] ;
int arr_8 [17] ;
unsigned int arr_9 [17] [17] ;
unsigned char arr_10 [17] [17] [17] ;
unsigned short arr_15 [17] [17] ;
signed char arr_21 [16] ;
unsigned int arr_27 [16] [16] [16] ;
_Bool arr_30 [16] ;
unsigned long long int arr_38 [16] [16] [16] [16] ;
unsigned long long int arr_6 [20] [20] ;
unsigned char arr_17 [17] [17] [17] [17] ;
signed char arr_18 [17] [17] [17] [17] ;
signed char arr_28 [16] [16] [16] [16] ;
long long int arr_29 [16] [16] [16] [16] ;
unsigned long long int arr_39 [16] [16] [16] [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned char)21;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 3413346436U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (unsigned char)108;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (short)10990;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = -1097393143;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_9 [i_0] [i_1] = 2868404797U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned char)30;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned short)25207;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_21 [i_0] = (signed char)-65;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = 2035235006U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_30 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_38 [i_0] [i_1] [i_2] [i_3] = 4999669336793603431ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = 5602131127891760820ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (unsigned char)88;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (signed char)70;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = (signed char)-8;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = 1885592385757487588LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 16; ++i_6) 
                                arr_39 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_4 % 2 == 0) ? 3171647958322029769ULL : 7294343005395311526ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_28 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_29 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 16; ++i_6) 
                                hash(&seed, arr_39 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
}
void test(int var_0, unsigned int var_1, _Bool var_2, short var_3, unsigned char var_4, unsigned char var_5, int var_6, short var_7, unsigned int var_8, unsigned short var_9, short var_10, unsigned short var_11, signed char var_12, _Bool var_13, unsigned char var_14, signed char var_16, signed char var_17, unsigned int var_18, int zero, unsigned char arr_0 [20] , unsigned int arr_1 [20] , unsigned char arr_2 [20] , short arr_7 [17] , int arr_8 [17] , unsigned int arr_9 [17] [17] , unsigned char arr_10 [17] [17] [17] , unsigned short arr_15 [17] [17] , signed char arr_21 [16] , unsigned int arr_27 [16] [16] [16] , _Bool arr_30 [16] , unsigned long long int arr_38 [16] [16] [16] [16] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_13, var_14, var_16, var_17, var_18, zero, arr_0 , arr_1 , arr_2 , arr_7 , arr_8 , arr_9 , arr_10 , arr_15 , arr_21 , arr_27 , arr_30 , arr_38 );
    checksum();
    printf("%llu\n", seed);
}
