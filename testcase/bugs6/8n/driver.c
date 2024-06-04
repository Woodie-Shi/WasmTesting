#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29382;
signed char var_1 = (signed char)-77;
unsigned short var_2 = (unsigned short)51543;
signed char var_3 = (signed char)-65;
long long int var_4 = -5210824667019182068LL;
unsigned int var_5 = 3872628063U;
unsigned long long int var_6 = 7982858051270468630ULL;
unsigned short var_7 = (unsigned short)4019;
unsigned short var_8 = (unsigned short)3362;
unsigned short var_9 = (unsigned short)25244;
int zero = 0;
unsigned short var_10 = (unsigned short)61083;
unsigned short var_11 = (unsigned short)46798;
unsigned short var_12 = (unsigned short)49244;
unsigned long long int var_13 = 3543404977334446357ULL;
signed char var_14 = (signed char)-7;
short var_15 = (short)31549;
unsigned int var_16 = 4182247914U;
signed char var_17 = (signed char)104;
signed char var_18 = (signed char)-77;
signed char var_19 = (signed char)-25;
short var_20 = (short)28583;
signed char var_21 = (signed char)16;
long long int var_22 = -9062371436373815861LL;
unsigned long long int var_23 = 9803032909648886636ULL;
long long int var_24 = -6979193208406500217LL;
short var_25 = (short)-12207;
signed char var_26 = (signed char)91;
signed char var_27 = (signed char)-34;
signed char var_28 = (signed char)-2;
unsigned int var_29 = 2300611045U;
unsigned short var_30 = (unsigned short)4451;
int var_31 = -1257904291;
signed char var_32 = (signed char)-98;
int var_33 = -769208528;
unsigned int var_34 = 446534969U;
signed char var_35 = (signed char)-55;
short var_36 = (short)28191;
int var_37 = -1270838561;
unsigned long long int var_38 = 17077253185057357678ULL;
unsigned int var_39 = 3484898613U;
unsigned short var_40 = (unsigned short)7656;
signed char var_41 = (signed char)72;
unsigned char var_42 = (unsigned char)90;
int var_43 = -1562297706;
signed char var_44 = (signed char)61;
short var_45 = (short)16490;
unsigned short var_46 = (unsigned short)8577;
unsigned int var_47 = 2014903635U;
long long int arr_15 [23] [23] [23] [23] [23] [23] ;
unsigned long long int arr_20 [23] [23] [23] [23] [23] ;
unsigned short arr_30 [11] [11] [11] [11] ;
signed char arr_31 [11] ;
long long int arr_34 [13] ;
int arr_48 [21] [21] [21] ;
int arr_49 [21] [21] ;
short arr_50 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? 8928832729358970851LL : 1687061285760987450LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? 973743729604999707ULL : 12814263513543869741ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned short)34353 : (unsigned short)44348;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_31 [i_0] = (signed char)-75;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_34 [i_0] = -1962171110466127624LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_48 [i_0] [i_1] [i_2] = 1904756315;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_49 [i_0] [i_1] = -744647901;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_50 [i_0] [i_1] = (short)28679;
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
    hash(&seed, var_46);
    hash(&seed, var_47);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        hash(&seed, arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_30 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_31 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_34 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_48 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_49 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_50 [i_0] [i_1] );
}
void test(short var_0, signed char var_1, unsigned short var_2, signed char var_3, long long int var_4, unsigned int var_5, unsigned long long int var_6, unsigned short var_7, unsigned short var_8, unsigned short var_9, int zero);

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, zero);
    checksum();
    printf("%llu\n", seed);
}
