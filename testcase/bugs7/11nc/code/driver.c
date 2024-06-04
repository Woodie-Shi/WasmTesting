#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)153;
unsigned short var_3 = (unsigned short)38880;
unsigned short var_4 = (unsigned short)39339;
unsigned short var_7 = (unsigned short)58747;
unsigned short var_8 = (unsigned short)65406;
unsigned int var_9 = 413237200U;
unsigned short var_10 = (unsigned short)12018;
int var_11 = 1680724995;
signed char var_12 = (signed char)108;
int zero = 0;
long long int var_13 = -4183872642622790438LL;
unsigned short var_14 = (unsigned short)57454;
unsigned short var_15 = (unsigned short)51453;
int var_16 = -1597883529;
int var_17 = -1767845136;
unsigned char var_18 = (unsigned char)28;
unsigned short arr_0 [18] [18] ;
int arr_1 [18] ;
unsigned short arr_2 [18] ;
short arr_3 [18] ;
unsigned short arr_4 [18] ;
unsigned short arr_5 [18] [18] ;
unsigned long long int arr_8 [18] ;
short arr_9 [18] [18] ;
unsigned int arr_13 [18] ;
unsigned int arr_18 [18] [18] ;
unsigned short arr_19 [18] [18] [18] [18] ;
int arr_7 [18] [18] [18] ;
unsigned int arr_21 [18] [18] [18] [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)16797;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 1371701398;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned short)49577;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (short)-22212;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (unsigned short)5214;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)50688;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = 3708065488576097415ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_9 [i_0] [i_1] = (short)-17138;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = 3041511071U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_18 [i_0] [i_1] = 2354946657U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (unsigned short)58242;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -800709572 : 1028372909;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 18; ++i_6) 
                                arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_0 % 2 == 0) ? 1336777120U : 919546391U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 18; ++i_6) 
                                hash(&seed, arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
}
void test(unsigned char var_0, unsigned short var_3, unsigned short var_4, unsigned short var_7, unsigned short var_8, unsigned int var_9, unsigned short var_10, int var_11, signed char var_12, int zero, unsigned short arr_0 [18] [18] , int arr_1 [18] , unsigned short arr_2 [18] , short arr_3 [18] , unsigned short arr_4 [18] , unsigned short arr_5 [18] [18] , unsigned long long int arr_8 [18] , short arr_9 [18] [18] , unsigned int arr_13 [18] , unsigned int arr_18 [18] [18] , unsigned short arr_19 [18] [18] [18] [18] );

int main() {
    init();
    test(var_0, var_3, var_4, var_7, var_8, var_9, var_10, var_11, var_12, zero, arr_0 , arr_1 , arr_2 , arr_3 , arr_4 , arr_5 , arr_8 , arr_9 , arr_13 , arr_18 , arr_19 );
    checksum();
    printf("%llu\n", seed);
}
