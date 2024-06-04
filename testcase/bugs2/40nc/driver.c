#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-60;
signed char var_1 = (signed char)-63;
signed char var_2 = (signed char)25;
unsigned short var_4 = (unsigned short)54906;
unsigned int var_5 = 3375146008U;
unsigned short var_7 = (unsigned short)26632;
unsigned int var_8 = 513209914U;
long long int var_9 = -5920192936042327491LL;
unsigned int var_10 = 2860745354U;
long long int var_12 = -773896852716887977LL;
unsigned short var_13 = (unsigned short)4088;
unsigned int var_14 = 212949730U;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned short var_18 = (unsigned short)16673;
long long int var_19 = -8783308457530408946LL;
short var_20 = (short)-21126;
short var_21 = (short)-17340;
unsigned int var_22 = 2344070662U;
signed char var_23 = (signed char)0;
unsigned long long int var_24 = 854621788548074135ULL;
unsigned long long int var_25 = 5661509273842838496ULL;
int var_26 = 245119262;
long long int var_27 = -1162928064681267319LL;
unsigned short var_28 = (unsigned short)39594;
long long int arr_4 [11] [11] ;
_Bool arr_10 [12] [12] [12] ;
unsigned int arr_11 [12] [12] [12] ;
unsigned short arr_5 [11] ;
unsigned char arr_6 [11] ;
unsigned int arr_16 [12] [12] [12] ;
signed char arr_17 [12] [12] [12] [12] ;
signed char arr_18 [12] [12] [12] [12] ;
signed char arr_19 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = 782304287468724959LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 902745297U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)9990 : (unsigned short)48886;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)237 : (unsigned char)142;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 1852275057U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (signed char)-87;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (signed char)38;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_19 [i_0] = (signed char)-96;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test(signed char var_0, signed char var_1, signed char var_2, unsigned short var_4, unsigned int var_5, unsigned short var_7, unsigned int var_8, long long int var_9, unsigned int var_10, long long int var_12, unsigned short var_13, unsigned int var_14, _Bool var_15, _Bool var_16, int zero, long long int arr_4 [11] [11] , _Bool arr_10 [12] [12] [12] , unsigned int arr_11 [12] [12] [12] );

int main() {
    init();
    test(var_0, var_1, var_2, var_4, var_5, var_7, var_8, var_9, var_10, var_12, var_13, var_14, var_15, var_16, zero, arr_4 , arr_10 , arr_11 );
    checksum();
    printf("%llu\n", seed);
}
