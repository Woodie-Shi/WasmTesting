#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3785451692U;
unsigned char var_2 = (unsigned char)122;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 13748951391338700514ULL;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)1;
unsigned char var_9 = (unsigned char)167;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 7560687960708298164ULL;
signed char var_12 = (signed char)65;
unsigned short var_15 = (unsigned short)3772;
short var_16 = (short)-10820;
signed char var_17 = (signed char)98;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned int var_19 = 1319467607U;
_Bool var_20 = (_Bool)1;
short var_21 = (short)3124;
unsigned int var_22 = 583441595U;
unsigned char arr_0 [17] [17] ;
long long int arr_2 [17] ;
unsigned long long int arr_3 [17] ;
unsigned long long int arr_4 [17] [17] ;
_Bool arr_5 [17] ;
unsigned short arr_6 [17] [17] [17] ;
short arr_7 [17] [17] [17] ;
unsigned int arr_9 [17] [17] [17] [17] [17] [17] ;
long long int arr_11 [17] [17] [17] [17] ;
unsigned int arr_15 [25] [25] ;
long long int arr_16 [25] ;
_Bool arr_17 [25] [25] [25] ;
signed char arr_13 [17] [17] [17] [17] [17] [17] [17] ;
unsigned short arr_14 [17] ;
unsigned long long int arr_20 [25] [25] ;
unsigned int arr_21 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)20 : (unsigned char)178;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 9012785857796139479LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 5308279304395310797ULL : 616012895100800833ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = 4892944540326503671ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)18578;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (short)7607;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? 1834600814U : 544774258U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = -8811967122072115065LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_15 [i_0] [i_1] = 4074866325U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_16 [i_0] = 6985448871656776193LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 17; ++i_6) 
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_0 % 2 == 0) ? (signed char)-67 : (signed char)55;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (unsigned short)44531 : (unsigned short)46847;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_20 [i_0] [i_1] = (i_0 % 2 == 0) ? 13366770378728391742ULL : 12929577326010716093ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_21 [i_0] [i_1] = (i_1 % 2 == 0) ? 75487894U : 2823406015U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 17; ++i_6) 
                                hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
}
void test(unsigned int var_0, unsigned char var_2, _Bool var_3, unsigned long long int var_4, _Bool var_6, signed char var_7, unsigned char var_9, _Bool var_10, unsigned long long int var_11, signed char var_12, unsigned short var_15, short var_16, signed char var_17, _Bool var_18, int zero, unsigned char arr_0 [17] [17] , long long int arr_2 [17] , unsigned long long int arr_3 [17] , unsigned long long int arr_4 [17] [17] , _Bool arr_5 [17] , unsigned short arr_6 [17] [17] [17] , short arr_7 [17] [17] [17] , unsigned int arr_9 [17] [17] [17] [17] [17] [17] , long long int arr_11 [17] [17] [17] [17] , unsigned int arr_15 [25] [25] , long long int arr_16 [25] , _Bool arr_17 [25] [25] [25] );

int main() {
    init();
    test(var_0, var_2, var_3, var_4, var_6, var_7, var_9, var_10, var_11, var_12, var_15, var_16, var_17, var_18, zero, arr_0 , arr_2 , arr_3 , arr_4 , arr_5 , arr_6 , arr_7 , arr_9 , arr_11 , arr_15 , arr_16 , arr_17 );
    checksum();
    printf("%llu\n", seed);
}
