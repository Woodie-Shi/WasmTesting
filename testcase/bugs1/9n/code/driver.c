#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1094348457;
signed char var_1 = (signed char)-83;
signed char var_2 = (signed char)57;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)155;
unsigned char var_5 = (unsigned char)200;
int var_6 = 751223612;
int var_7 = -1270619886;
unsigned char var_8 = (unsigned char)22;
_Bool var_9 = (_Bool)0;
int zero = 0;
signed char var_10 = (signed char)72;
unsigned long long int var_11 = 9686326878169065083ULL;
int var_12 = 542897270;
unsigned int var_13 = 2221494495U;
unsigned char var_14 = (unsigned char)179;
unsigned char var_15 = (unsigned char)183;
unsigned char var_16 = (unsigned char)228;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)1;
int var_19 = -426313998;
short var_20 = (short)-6785;
unsigned int var_21 = 474207676U;
signed char var_22 = (signed char)22;
signed char var_23 = (signed char)48;
signed char var_24 = (signed char)62;
unsigned char var_25 = (unsigned char)248;
signed char var_26 = (signed char)-100;
unsigned char var_27 = (unsigned char)241;
signed char var_28 = (signed char)14;
int var_29 = 77369469;
int var_30 = 949445787;
int var_31 = 993127678;
int var_32 = -1249629098;
unsigned char var_33 = (unsigned char)254;
_Bool var_34 = (_Bool)1;
signed char var_35 = (signed char)-84;
short var_36 = (short)15480;
unsigned char var_37 = (unsigned char)2;
unsigned char var_38 = (unsigned char)109;
_Bool var_39 = (_Bool)1;
signed char var_40 = (signed char)-33;
signed char var_41 = (signed char)94;
unsigned char var_42 = (unsigned char)209;
_Bool var_43 = (_Bool)1;
unsigned char var_44 = (unsigned char)252;
unsigned char var_45 = (unsigned char)77;
int arr_0 [21] ;
short arr_1 [21] ;
unsigned char arr_2 [21] ;
unsigned char arr_3 [21] ;
short arr_4 [21] ;
unsigned char arr_6 [21] [21] ;
_Bool arr_7 [21] [21] [21] [21] [21] [21] ;
unsigned char arr_8 [21] [21] [21] [21] ;
unsigned char arr_9 [21] [21] [21] [21] ;
int arr_11 [21] [21] ;
unsigned long long int arr_12 [21] ;
long long int arr_13 [21] [21] [21] [21] [21] [21] [21] ;
signed char arr_14 [21] [21] ;
unsigned long long int arr_15 [21] [21] ;
short arr_17 [21] ;
unsigned int arr_21 [10] ;
signed char arr_23 [13] ;
int arr_24 [13] [13] ;
unsigned char arr_26 [13] [13] [13] ;
unsigned long long int arr_27 [13] [13] [13] ;
unsigned char arr_28 [13] ;
unsigned char arr_30 [13] [13] [13] ;
unsigned long long int arr_18 [21] ;
signed char arr_25 [13] ;
int arr_31 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 877210875;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (short)18298;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned char)97;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (unsigned char)254;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (short)-16258;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)9 : (unsigned char)232;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned char)198 : (unsigned char)24;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (unsigned char)163;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? -878863474 : -1694190513;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 12324348210210103585ULL : 12014401450508215088ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 21; ++i_6) 
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_4 % 2 == 0) ? 8430021640697919674LL : -6873985204507983320LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_14 [i_0] [i_1] = (signed char)20;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_15 [i_0] [i_1] = 17343555257479440769ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_17 [i_0] = (short)19268;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_21 [i_0] = 4140747826U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_23 [i_0] = (signed char)86;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_24 [i_0] [i_1] = -85041493;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (unsigned char)235;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = 12510620706120890687ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_28 [i_0] = (unsigned char)241;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (unsigned char)30;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_18 [i_0] = 2332787393003928720ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_25 [i_0] = (signed char)-126;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_31 [i_0] = 1101959341;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_31 [i_0] );
}
void test(int var_0, signed char var_1, signed char var_2, _Bool var_3, unsigned char var_4, unsigned char var_5, int var_6, int var_7, unsigned char var_8, _Bool var_9, int zero, int arr_0 [21] , short arr_1 [21] , unsigned char arr_2 [21] , unsigned char arr_3 [21] , short arr_4 [21] , unsigned char arr_6 [21] [21] , _Bool arr_7 [21] [21] [21] [21] [21] [21] , unsigned char arr_8 [21] [21] [21] [21] , unsigned char arr_9 [21] [21] [21] [21] , int arr_11 [21] [21] , unsigned long long int arr_12 [21] , long long int arr_13 [21] [21] [21] [21] [21] [21] [21] , signed char arr_14 [21] [21] , unsigned long long int arr_15 [21] [21] , short arr_17 [21] , unsigned int arr_21 [10] , signed char arr_23 [13] , int arr_24 [13] [13] , unsigned char arr_26 [13] [13] [13] , unsigned long long int arr_27 [13] [13] [13] , unsigned char arr_28 [13] , unsigned char arr_30 [13] [13] [13] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, zero, arr_0 , arr_1 , arr_2 , arr_3 , arr_4 , arr_6 , arr_7 , arr_8 , arr_9 , arr_11 , arr_12 , arr_13 , arr_14 , arr_15 , arr_17 , arr_21 , arr_23 , arr_24 , arr_26 , arr_27 , arr_28 , arr_30 );
    checksum();
    printf("%llu\n", seed);
}
