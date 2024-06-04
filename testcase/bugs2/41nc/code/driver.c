#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)246;
_Bool var_1 = (_Bool)0;
short var_2 = (short)30269;
int var_3 = -273691874;
unsigned int var_5 = 3122052511U;
int var_6 = 1012824266;
unsigned short var_7 = (unsigned short)14867;
unsigned char var_8 = (unsigned char)109;
unsigned long long int var_9 = 4663500607613427480ULL;
int var_10 = 2006171056;
short var_11 = (short)-26358;
unsigned char var_13 = (unsigned char)126;
unsigned int var_14 = 3906244893U;
long long int var_15 = -4530351201714737965LL;
unsigned short var_16 = (unsigned short)7031;
unsigned short var_17 = (unsigned short)44669;
int zero = 0;
unsigned short var_18 = (unsigned short)36;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)76;
unsigned long long int var_21 = 14416278514291315591ULL;
signed char var_22 = (signed char)-31;
unsigned short var_23 = (unsigned short)27083;
unsigned short var_24 = (unsigned short)14815;
unsigned long long int var_25 = 9302864330005854930ULL;
_Bool var_26 = (_Bool)1;
unsigned short arr_0 [18] ;
int arr_1 [18] [18] ;
unsigned short arr_2 [18] [18] ;
int arr_3 [18] ;
long long int arr_7 [15] [15] ;
unsigned long long int arr_8 [15] [15] ;
unsigned char arr_10 [15] ;
unsigned short arr_11 [15] [15] ;
unsigned short arr_12 [15] ;
unsigned long long int arr_13 [15] [15] ;
int arr_14 [15] [15] [15] [15] ;
signed char arr_17 [15] [15] [15] [15] ;
unsigned int arr_20 [15] [15] ;
signed char arr_4 [18] ;
short arr_5 [18] [18] ;
long long int arr_6 [18] ;
unsigned long long int arr_21 [15] [15] [15] [15] [15] ;
unsigned short arr_22 [15] [15] [15] [15] [15] [15] [15] ;
signed char arr_23 [15] ;
int arr_24 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned short)24916;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = 899804995;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)20916;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 385166094 : 1406955530;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = 6558929781789928349LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_8 [i_0] [i_1] = 2190967399289177251ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = (unsigned char)20;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned short)50629;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = (unsigned short)17727;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_13 [i_0] [i_1] = 10530813898340506828ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = 1333118089;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (signed char)-33 : (signed char)-65;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_20 [i_0] [i_1] = (i_0 % 2 == 0) ? 2714424015U : 833996826U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)17 : (signed char)-99;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)27764 : (short)16345;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 7615212514524060782LL : -3561176861988765016LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 17535814248971049002ULL : 13748219471710308924ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_4 % 2 == 0) ? (unsigned short)42589 : (unsigned short)54181;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_23 [i_0] = (signed char)-83;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_24 [i_0] [i_1] = 866111666;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        hash(&seed, arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                hash(&seed, arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
}
void test(unsigned char var_0, _Bool var_1, short var_2, int var_3, unsigned int var_5, int var_6, unsigned short var_7, unsigned char var_8, unsigned long long int var_9, int var_10, short var_11, unsigned char var_13, unsigned int var_14, long long int var_15, unsigned short var_16, unsigned short var_17, int zero, unsigned short arr_0 [18] , int arr_1 [18] [18] , unsigned short arr_2 [18] [18] , int arr_3 [18] , long long int arr_7 [15] [15] , unsigned long long int arr_8 [15] [15] , unsigned char arr_10 [15] , unsigned short arr_11 [15] [15] , unsigned short arr_12 [15] , unsigned long long int arr_13 [15] [15] , int arr_14 [15] [15] [15] [15] , signed char arr_17 [15] [15] [15] [15] , unsigned int arr_20 [15] [15] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_13, var_14, var_15, var_16, var_17, zero, arr_0 , arr_1 , arr_2 , arr_3 , arr_7 , arr_8 , arr_10 , arr_11 , arr_12 , arr_13 , arr_14 , arr_17 , arr_20 );
    checksum();
    printf("%llu\n", seed);
}
