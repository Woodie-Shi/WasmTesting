#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21578;
_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)123;
unsigned long long int var_3 = 6373156676053005878ULL;
long long int var_4 = -3793292788947160931LL;
long long int var_5 = -5863640464421436848LL;
signed char var_6 = (signed char)20;
unsigned long long int var_7 = 15108621467477336164ULL;
unsigned long long int var_8 = 16296085396118591825ULL;
unsigned short var_9 = (unsigned short)57527;
unsigned char var_10 = (unsigned char)66;
int zero = 0;
long long int var_11 = -2144240748879849779LL;
unsigned int var_12 = 3719156666U;
unsigned short var_13 = (unsigned short)3100;
int var_14 = -2100669436;
int var_15 = 1266218074;
signed char var_16 = (signed char)-102;
unsigned short var_17 = (unsigned short)38785;
unsigned short var_18 = (unsigned short)2406;
unsigned short var_19 = (unsigned short)25256;
short var_20 = (short)9046;
unsigned char var_21 = (unsigned char)103;
unsigned char var_22 = (unsigned char)200;
int var_23 = -572567460;
unsigned short var_24 = (unsigned short)1672;
_Bool var_25 = (_Bool)0;
_Bool var_26 = (_Bool)1;
unsigned long long int var_27 = 17301860099073516628ULL;
int var_28 = 1387516661;
int var_29 = -508195423;
signed char var_30 = (signed char)45;
int var_31 = -631954191;
unsigned long long int var_32 = 13496881240103871827ULL;
unsigned int var_33 = 2226502848U;
unsigned int var_34 = 3127272398U;
unsigned int var_35 = 1322285373U;
unsigned char var_36 = (unsigned char)141;
unsigned int var_37 = 1469796664U;
_Bool arr_0 [11] [11] ;
int arr_2 [11] ;
unsigned short arr_7 [11] [11] [11] [11] ;
unsigned short arr_16 [20] [20] ;
unsigned char arr_17 [20] ;
long long int arr_19 [20] ;
unsigned char arr_20 [20] ;
unsigned long long int arr_24 [20] [20] [20] ;
int arr_26 [20] ;
_Bool arr_27 [20] ;
long long int arr_32 [20] [20] [20] ;
unsigned char arr_33 [20] [20] [20] ;
signed char arr_35 [20] [20] [20] [20] ;
unsigned long long int arr_37 [20] ;
long long int arr_38 [20] [20] [20] [20] ;
short arr_39 [20] [20] [20] ;
_Bool arr_40 [20] [20] [20] [20] [20] [20] ;
unsigned int arr_42 [20] [20] [20] [20] [20] ;
long long int arr_49 [19] ;
unsigned int arr_55 [13] ;
unsigned int arr_4 [11] ;
unsigned short arr_9 [11] [11] [11] ;
signed char arr_15 [11] [11] [11] [11] [11] ;
unsigned long long int arr_18 [20] [20] ;
signed char arr_21 [20] ;
int arr_22 [20] [20] [20] ;
_Bool arr_23 [20] [20] ;
short arr_28 [20] [20] [20] [20] [20] [20] ;
unsigned int arr_29 [20] [20] ;
unsigned long long int arr_30 [20] [20] ;
int arr_31 [20] ;
int arr_34 [20] ;
short arr_44 [20] [20] [20] [20] [20] [20] ;
int arr_45 [20] ;
long long int arr_46 [20] ;
unsigned int arr_51 [19] ;
short arr_52 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 1024477547 : 40586452;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned short)2459 : (unsigned short)54257;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned short)44703;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_17 [i_0] = (unsigned char)160;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_19 [i_0] = 4090979071860301396LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_20 [i_0] = (unsigned char)37;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = 2401971293210221854ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_26 [i_0] = -1290525024;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_27 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = 8034134214539432221LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = (unsigned char)186;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_35 [i_0] [i_1] [i_2] [i_3] = (signed char)8;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_37 [i_0] = 1860110687947163511ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_38 [i_0] [i_1] [i_2] [i_3] = 9128184035968109009LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_39 [i_0] [i_1] [i_2] = (short)3139;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_40 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_42 [i_0] [i_1] [i_2] [i_3] [i_4] = 2364078631U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_49 [i_0] = 2001913281707946306LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_55 [i_0] = 1644034857U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 2247497620U : 1236913978U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)5860 : (unsigned short)20112;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (signed char)-72 : (signed char)62;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_18 [i_0] [i_1] = 5116003976797680683ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_21 [i_0] = (signed char)-117;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = -1824849060;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_23 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)7968;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_29 [i_0] [i_1] = 3641550245U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_30 [i_0] [i_1] = 16022456723270343774ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_31 [i_0] = 637883532;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_34 [i_0] = -1394028826;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_44 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? (short)-18266 : (short)-18265;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_45 [i_0] = -272698275;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_46 [i_0] = 3563052063531668913LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_51 [i_0] = 1793157229U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_52 [i_0] = (short)-2979;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_22 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            hash(&seed, arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_29 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_30 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_31 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_34 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            hash(&seed, arr_44 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_45 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_46 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_51 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_52 [i_0] );
}
void test(short var_0, _Bool var_1, unsigned char var_2, unsigned long long int var_3, long long int var_4, long long int var_5, signed char var_6, unsigned long long int var_7, unsigned long long int var_8, unsigned short var_9, unsigned char var_10, int zero, _Bool arr_0 [11] [11] , int arr_2 [11] , unsigned short arr_7 [11] [11] [11] [11] , unsigned short arr_16 [20] [20] , unsigned char arr_17 [20] , long long int arr_19 [20] , unsigned char arr_20 [20] , unsigned long long int arr_24 [20] [20] [20] , int arr_26 [20] , _Bool arr_27 [20] , long long int arr_32 [20] [20] [20] , unsigned char arr_33 [20] [20] [20] , signed char arr_35 [20] [20] [20] [20] , unsigned long long int arr_37 [20] , long long int arr_38 [20] [20] [20] [20] , short arr_39 [20] [20] [20] , _Bool arr_40 [20] [20] [20] [20] [20] [20] , unsigned int arr_42 [20] [20] [20] [20] [20] , long long int arr_49 [19] , unsigned int arr_55 [13] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, zero, arr_0 , arr_2 , arr_7 , arr_16 , arr_17 , arr_19 , arr_20 , arr_24 , arr_26 , arr_27 , arr_32 , arr_33 , arr_35 , arr_37 , arr_38 , arr_39 , arr_40 , arr_42 , arr_49 , arr_55 );
    checksum();
    printf("%llu\n", seed);
}
