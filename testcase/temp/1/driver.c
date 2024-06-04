#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5222406065582735272LL;
unsigned short var_1 = (unsigned short)48516;
_Bool var_2 = (_Bool)1;
short var_3 = (short)-31900;
unsigned long long int var_4 = 6796809793354496567ULL;
unsigned long long int var_5 = 8698536794893613589ULL;
unsigned short var_6 = (unsigned short)22683;
unsigned int var_7 = 3778714079U;
unsigned short var_8 = (unsigned short)28026;
_Bool var_9 = (_Bool)1;
short var_10 = (short)16780;
signed char var_11 = (signed char)-37;
unsigned short var_12 = (unsigned short)11096;
short var_13 = (short)-11286;
long long int var_14 = -5051014465302262088LL;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)43476;
int zero = 0;
_Bool var_17 = (_Bool)1;
int var_18 = -1815452724;
signed char var_19 = (signed char)-61;
signed char var_20 = (signed char)-124;
signed char var_21 = (signed char)-54;
int var_22 = 1216614297;
unsigned char var_23 = (unsigned char)175;
_Bool var_24 = (_Bool)1;
unsigned short var_25 = (unsigned short)26371;
int var_26 = -390010411;
unsigned short var_27 = (unsigned short)38802;
unsigned short var_28 = (unsigned short)27068;
unsigned short var_29 = (unsigned short)1382;
unsigned int var_30 = 816360372U;
int var_31 = -1037394550;
unsigned long long int var_32 = 2798534862504531487ULL;
_Bool var_33 = (_Bool)1;
signed char var_34 = (signed char)16;
unsigned int var_35 = 408204862U;
short var_36 = (short)-4898;
unsigned int var_37 = 3921724231U;
int var_38 = 222105263;
_Bool var_39 = (_Bool)1;
unsigned short var_40 = (unsigned short)58641;
unsigned short var_41 = (unsigned short)62828;
unsigned int var_42 = 323246098U;
unsigned short var_43 = (unsigned short)61854;
unsigned long long int var_44 = 9764681255496720654ULL;
_Bool var_45 = (_Bool)1;
short var_46 = (short)-14288;
unsigned int var_47 = 4136361354U;
unsigned long long int var_48 = 4129925600070361594ULL;
unsigned long long int var_49 = 115825169484687049ULL;
unsigned long long int var_50 = 12298453620999217410ULL;
unsigned int arr_0 [21] ;
unsigned short arr_1 [21] ;
int arr_2 [21] ;
unsigned short arr_3 [21] [21] ;
signed char arr_4 [21] ;
unsigned short arr_5 [21] ;
long long int arr_6 [21] [21] [21] ;
signed char arr_7 [21] [21] [21] [21] ;
int arr_8 [21] ;
unsigned short arr_9 [21] ;
_Bool arr_10 [21] ;
short arr_11 [21] [21] [21] ;
int arr_12 [21] [21] ;
long long int arr_13 [21] ;
unsigned short arr_14 [21] [21] [21] [21] [21] [21] ;
unsigned short arr_15 [21] [21] [21] [21] [21] ;
short arr_16 [21] [21] [21] [21] [21] [21] ;
long long int arr_18 [21] [21] [21] [21] ;
_Bool arr_19 [21] [21] [21] [21] [21] ;
_Bool arr_21 [21] [21] ;
unsigned char arr_22 [21] [21] [21] [21] ;
long long int arr_24 [21] [21] [21] [21] [21] ;
unsigned int arr_27 [21] [21] [21] [21] [21] ;
int arr_31 [13] [13] ;
unsigned short arr_33 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 888662921U : 266195489U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)47773 : (unsigned short)2412;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 555259908;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)20490;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (signed char)-91;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (unsigned short)19605;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 3132535795019362618LL : 8161483899064037037LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (signed char)-110;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = 348365513;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned short)7674 : (unsigned short)48532;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (short)30191;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? -258905503 : -429004114;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = -7433055175799078883LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? (unsigned short)53743 : (unsigned short)13919;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (unsigned short)39433 : (unsigned short)13051;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? (short)-25013 : (short)1508;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = -2230578364267015573LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_21 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned char)32 : (unsigned char)184;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] = -5478187850799617900LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] = 3501920812U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_31 [i_0] [i_1] = 1439658083;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_33 [i_0] [i_1] = (unsigned short)40554;
}

void checksum() {
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
    hash(&seed, var_48);
    hash(&seed, var_49);
    hash(&seed, var_50);
}
void test(long long int var_0, unsigned short var_1, _Bool var_2, short var_3, unsigned long long int var_4, unsigned long long int var_5, unsigned short var_6, unsigned int var_7, unsigned short var_8, _Bool var_9, short var_10, signed char var_11, unsigned short var_12, short var_13, long long int var_14, _Bool var_15, unsigned short var_16, int zero, unsigned int arr_0 [21] , unsigned short arr_1 [21] , int arr_2 [21] , unsigned short arr_3 [21] [21] , signed char arr_4 [21] , unsigned short arr_5 [21] , long long int arr_6 [21] [21] [21] , signed char arr_7 [21] [21] [21] [21] , int arr_8 [21] , unsigned short arr_9 [21] , _Bool arr_10 [21] , short arr_11 [21] [21] [21] , int arr_12 [21] [21] , long long int arr_13 [21] , unsigned short arr_14 [21] [21] [21] [21] [21] [21] , unsigned short arr_15 [21] [21] [21] [21] [21] , short arr_16 [21] [21] [21] [21] [21] [21] , long long int arr_18 [21] [21] [21] [21] , _Bool arr_19 [21] [21] [21] [21] [21] , _Bool arr_21 [21] [21] , unsigned char arr_22 [21] [21] [21] [21] , long long int arr_24 [21] [21] [21] [21] [21] , unsigned int arr_27 [21] [21] [21] [21] [21] , int arr_31 [13] [13] , unsigned short arr_33 [13] [13] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_13, var_14, var_15, var_16, zero, arr_0 , arr_1 , arr_2 , arr_3 , arr_4 , arr_5 , arr_6 , arr_7 , arr_8 , arr_9 , arr_10 , arr_11 , arr_12 , arr_13 , arr_14 , arr_15 , arr_16 , arr_18 , arr_19 , arr_21 , arr_22 , arr_24 , arr_27 , arr_31 , arr_33 );
    checksum();
    printf("%llu\n", seed);
}
