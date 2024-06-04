#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 4667519743269789178ULL;
int var_3 = 383116979;
_Bool var_4 = (_Bool)0;
short var_5 = (short)-26135;
int var_6 = -546067853;
unsigned char var_7 = (unsigned char)3;
unsigned char var_8 = (unsigned char)161;
int var_9 = -224867379;
int zero = 0;
int var_10 = 1878886557;
unsigned int var_11 = 1033899727U;
_Bool var_12 = (_Bool)1;
short var_13 = (short)2865;
int var_14 = -459959938;
int var_15 = -1551071947;
int var_16 = -1493377948;
unsigned int var_17 = 1592007067U;
int var_18 = -512597043;
int var_19 = 1178641067;
long long int var_20 = -845790473902662106LL;
int var_21 = -1557977198;
int var_22 = -2108621492;
long long int var_23 = 5059523895718624301LL;
int var_24 = -741490196;
long long int var_25 = -4906354214003674979LL;
unsigned long long int var_26 = 1271854239214693126ULL;
_Bool var_27 = (_Bool)1;
unsigned char var_28 = (unsigned char)38;
_Bool var_29 = (_Bool)0;
_Bool var_30 = (_Bool)0;
int var_31 = -1466444066;
unsigned int var_32 = 3465612413U;
_Bool var_33 = (_Bool)1;
unsigned int var_34 = 3118309U;
int var_35 = 816760763;
long long int var_36 = -640138238359358972LL;
int var_37 = 1703382775;
unsigned int var_38 = 578988525U;
short var_39 = (short)-15985;
int arr_0 [22] ;
_Bool arr_2 [22] ;
long long int arr_3 [22] [22] [22] ;
_Bool arr_5 [22] ;
int arr_6 [22] ;
unsigned long long int arr_7 [22] [22] ;
unsigned long long int arr_9 [22] [22] [22] [22] ;
long long int arr_10 [22] [22] [22] [22] ;
_Bool arr_11 [22] [22] [22] [22] [22] [22] ;
unsigned int arr_12 [22] [22] ;
long long int arr_14 [22] [22] [22] ;
int arr_16 [22] ;
unsigned long long int arr_19 [22] [22] [22] [22] ;
unsigned long long int arr_20 [22] [22] [22] [22] [22] [22] ;
int arr_21 [22] [22] [22] [22] ;
int arr_22 [22] [22] [22] [22] ;
_Bool arr_24 [22] [22] ;
_Bool arr_26 [22] [22] [22] [22] ;
int arr_27 [22] [22] ;
short arr_29 [22] [22] [22] ;
unsigned long long int arr_31 [22] [22] [22] ;
long long int arr_44 [22] [22] [22] [22] ;
unsigned long long int arr_45 [22] [22] [22] [22] ;
long long int arr_52 [22] [22] [22] ;
_Bool arr_57 [22] [22] [22] [22] [22] [22] ;
_Bool arr_23 [22] [22] [22] [22] ;
int arr_39 [22] [22] ;
_Bool arr_40 [22] [22] [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 734832038;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -2790928748706601223LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = -160214470;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = 5583357739140320204ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 15003581161752982031ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 7513526658159560810LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_12 [i_0] [i_1] = 435468817U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 8963611280914449482LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_16 [i_0] = -1947523480;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = 9892376747848381468ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 3777288163659540591ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = -1543356060;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = -1521633340;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_24 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_27 [i_0] [i_1] = -1758845268;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (short)14925;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = 13715342990828177506ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_44 [i_0] [i_1] [i_2] [i_3] = -1675429344766277718LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_45 [i_0] [i_1] [i_2] [i_3] = 13049814291388245088ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_52 [i_0] [i_1] [i_2] = 6885181118629690667LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_57 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_39 [i_0] [i_1] = -1088253027;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_40 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)0;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_23 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_39 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            hash(&seed, arr_40 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
}
void test(_Bool var_0, _Bool var_1, unsigned long long int var_2, int var_3, _Bool var_4, short var_5, int var_6, unsigned char var_7, unsigned char var_8, int var_9, int zero, int arr_0 [22] , _Bool arr_2 [22] , long long int arr_3 [22] [22] [22] , _Bool arr_5 [22] , int arr_6 [22] , unsigned long long int arr_7 [22] [22] , unsigned long long int arr_9 [22] [22] [22] [22] , long long int arr_10 [22] [22] [22] [22] , _Bool arr_11 [22] [22] [22] [22] [22] [22] , unsigned int arr_12 [22] [22] , long long int arr_14 [22] [22] [22] , int arr_16 [22] , unsigned long long int arr_19 [22] [22] [22] [22] , unsigned long long int arr_20 [22] [22] [22] [22] [22] [22] , int arr_21 [22] [22] [22] [22] , int arr_22 [22] [22] [22] [22] , _Bool arr_24 [22] [22] , _Bool arr_26 [22] [22] [22] [22] , int arr_27 [22] [22] , short arr_29 [22] [22] [22] , unsigned long long int arr_31 [22] [22] [22] , long long int arr_44 [22] [22] [22] [22] , unsigned long long int arr_45 [22] [22] [22] [22] , long long int arr_52 [22] [22] [22] , _Bool arr_57 [22] [22] [22] [22] [22] [22] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, zero, arr_0 , arr_2 , arr_3 , arr_5 , arr_6 , arr_7 , arr_9 , arr_10 , arr_11 , arr_12 , arr_14 , arr_16 , arr_19 , arr_20 , arr_21 , arr_22 , arr_24 , arr_26 , arr_27 , arr_29 , arr_31 , arr_44 , arr_45 , arr_52 , arr_57 );
    checksum();
    printf("%llu\n", seed);
}
