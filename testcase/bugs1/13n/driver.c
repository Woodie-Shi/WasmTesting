#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3794564146633910139LL;
signed char var_1 = (signed char)-112;
short var_2 = (short)-27512;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)20;
short var_5 = (short)7822;
unsigned char var_6 = (unsigned char)252;
long long int var_8 = 6936655448358725650LL;
int var_9 = -732237196;
long long int var_10 = -1348190508033125033LL;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)163;
unsigned char var_13 = (unsigned char)12;
int var_14 = 1004817675;
int zero = 0;
unsigned long long int var_15 = 583591485838104885ULL;
unsigned char var_16 = (unsigned char)172;
unsigned int var_17 = 3598720240U;
unsigned long long int var_18 = 11283286088001130658ULL;
long long int arr_0 [12] ;
unsigned int arr_1 [12] ;
long long int arr_2 [12] [12] ;
unsigned short arr_5 [12] [12] ;
unsigned char arr_6 [12] ;
unsigned int arr_11 [12] [12] [12] [12] [12] [12] [12] ;
unsigned char arr_14 [20] [20] ;
unsigned long long int arr_15 [20] [20] ;
unsigned short arr_12 [12] [12] [12] [12] [12] [12] ;
unsigned long long int arr_13 [12] [12] [12] [12] [12] ;
unsigned long long int arr_16 [20] [20] ;
long long int arr_17 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 355860775227897323LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 3792977134U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = -8697241675560526821LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)40686;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (unsigned char)92;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 12; ++i_6) 
                                arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 3804305357U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned char)227;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_15 [i_0] [i_1] = 11432626831281912393ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)27269;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = 11361818763910653752ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_16 [i_0] [i_1] = 16081015223928860734ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_17 [i_0] = 7736312188845610699LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test(long long int var_0, signed char var_1, short var_2, _Bool var_3, unsigned char var_4, short var_5, unsigned char var_6, long long int var_8, int var_9, long long int var_10, _Bool var_11, unsigned char var_12, unsigned char var_13, int var_14, int zero, long long int arr_0 [12] , unsigned int arr_1 [12] , long long int arr_2 [12] [12] , unsigned short arr_5 [12] [12] , unsigned char arr_6 [12] , unsigned int arr_11 [12] [12] [12] [12] [12] [12] [12] , unsigned char arr_14 [20] [20] , unsigned long long int arr_15 [20] [20] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_8, var_9, var_10, var_11, var_12, var_13, var_14, zero, arr_0 , arr_1 , arr_2 , arr_5 , arr_6 , arr_11 , arr_14 , arr_15 );
    checksum();
    printf("%llu\n", seed);
}
