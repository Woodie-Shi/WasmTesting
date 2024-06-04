#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)146;
unsigned char var_1 = (unsigned char)24;
long long int var_2 = -2655078652922983772LL;
unsigned char var_3 = (unsigned char)75;
int var_4 = -1784644909;
unsigned long long int var_5 = 3178281595164791924ULL;
unsigned char var_6 = (unsigned char)106;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)52567;
signed char var_10 = (signed char)3;
unsigned char var_11 = (unsigned char)244;
_Bool var_12 = (_Bool)1;
int var_13 = -1769953641;
int var_14 = 228380092;
unsigned short var_15 = (unsigned short)6917;
unsigned long long int var_16 = 2728208410502605930ULL;
int zero = 0;
_Bool var_17 = (_Bool)0;
int var_18 = -1242884399;
signed char var_19 = (signed char)-16;
unsigned long long int var_20 = 15561464342143212682ULL;
int var_21 = 1859020982;
short var_22 = (short)15806;
int var_23 = 1788876276;
unsigned long long int var_24 = 14113565144136107187ULL;
int var_25 = -1340227239;
unsigned long long int var_26 = 7067139683017494128ULL;
unsigned char var_27 = (unsigned char)154;
int var_28 = -1414676302;
unsigned long long int var_29 = 13764695445631301408ULL;
_Bool var_30 = (_Bool)0;
signed char var_31 = (signed char)-117;
unsigned long long int var_32 = 3082831546432391414ULL;
unsigned char var_33 = (unsigned char)230;
int var_34 = -163136837;
unsigned char var_35 = (unsigned char)94;
unsigned long long int var_36 = 10141510638918354504ULL;
unsigned char arr_0 [24] [24] ;
short arr_1 [24] ;
unsigned int arr_2 [24] [24] [24] ;
unsigned char arr_4 [24] [24] ;
_Bool arr_5 [24] [24] ;
int arr_7 [24] [24] [24] [24] ;
long long int arr_8 [24] ;
short arr_9 [24] [24] [24] [24] ;
unsigned long long int arr_10 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)74;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (short)14649;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 3409166466U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)28 : (unsigned char)132;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = -599017014;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? -5518451717026009557LL : -8375595138295941282LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (short)27114 : (short)-17578;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 16731313247538527081ULL : 9837526575634377979ULL;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
}
void test(unsigned char var_0, unsigned char var_1, long long int var_2, unsigned char var_3, int var_4, unsigned long long int var_5, unsigned char var_6, _Bool var_7, _Bool var_8, unsigned short var_9, signed char var_10, unsigned char var_11, _Bool var_12, int var_13, int var_14, unsigned short var_15, unsigned long long int var_16, int zero, unsigned char arr_0 [24] [24] , short arr_1 [24] , unsigned int arr_2 [24] [24] [24] , unsigned char arr_4 [24] [24] , _Bool arr_5 [24] [24] , int arr_7 [24] [24] [24] [24] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_13, var_14, var_15, var_16, zero, arr_0 , arr_1 , arr_2 , arr_4 , arr_5 , arr_7 );
    checksum();
    printf("%llu\n", seed);
}
