#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3967;
unsigned char var_1 = (unsigned char)76;
unsigned long long int var_2 = 15489838583660618612ULL;
unsigned char var_3 = (unsigned char)159;
int var_4 = -978655455;
unsigned long long int var_5 = 12508058695879605179ULL;
unsigned int var_6 = 686288581U;
short var_7 = (short)-10811;
unsigned char var_8 = (unsigned char)50;
unsigned long long int var_9 = 3494421078573316275ULL;
short var_10 = (short)27962;
unsigned long long int var_11 = 5830021085322109920ULL;
signed char var_12 = (signed char)-63;
unsigned char var_13 = (unsigned char)251;
unsigned int var_14 = 3465975952U;
unsigned char var_15 = (unsigned char)232;
unsigned long long int var_16 = 2557307409489742519ULL;
int zero = 0;
unsigned int var_17 = 2328036557U;
unsigned long long int var_18 = 15093027690252330183ULL;
unsigned int var_19 = 2084384832U;
unsigned int var_20 = 1003269662U;
unsigned int var_21 = 2615336049U;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)0;
unsigned char var_24 = (unsigned char)41;
long long int var_25 = -6229796588050664811LL;
short var_26 = (short)5753;
unsigned long long int var_27 = 10363588608311759982ULL;
unsigned char var_28 = (unsigned char)179;
int var_29 = 395394773;
unsigned long long int var_30 = 18206003285435036616ULL;
unsigned short arr_0 [25] [25] ;
short arr_1 [25] ;
short arr_2 [25] [25] ;
unsigned int arr_3 [25] ;
unsigned long long int arr_5 [11] ;
unsigned long long int arr_6 [11] ;
unsigned long long int arr_12 [16] [16] ;
unsigned short arr_13 [16] ;
signed char arr_14 [16] [16] [16] ;
signed char arr_15 [16] [16] [16] ;
unsigned long long int arr_16 [16] [16] ;
unsigned long long int arr_17 [16] [16] [16] [16] ;
unsigned char arr_19 [16] [16] [16] [16] [16] ;
short arr_20 [16] [16] [16] [16] [16] [16] ;
unsigned char arr_22 [16] [16] [16] [16] ;
unsigned int arr_24 [16] [16] [16] [16] [16] [16] [16] ;
unsigned int arr_32 [16] [16] [16] ;
unsigned char arr_4 [25] ;
long long int arr_7 [11] [11] ;
short arr_8 [11] ;
unsigned char arr_9 [11] ;
unsigned long long int arr_10 [11] ;
long long int arr_25 [16] [16] [16] [16] ;
signed char arr_26 [16] [16] ;
short arr_27 [16] [16] [16] [16] [16] ;
_Bool arr_28 [16] [16] [16] [16] [16] ;
unsigned char arr_37 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)33919 : (unsigned short)65496;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (short)-6727 : (short)9892;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (short)24962;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 1001578633U : 1357974961U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = 4378845934438852736ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = 8354912509077450724ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_12 [i_0] [i_1] = 9394257939174543473ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_13 [i_0] = (unsigned short)45265;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (signed char)-32;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (signed char)-11;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_16 [i_0] [i_1] = (i_1 % 2 == 0) ? 6422916003081408185ULL : 10690404014630599338ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = 16281328668992007321ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)98;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? (short)-29990 : (short)12619;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned char)121 : (unsigned char)185;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 16; ++i_6) 
                                arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_1 % 2 == 0) ? 1247594903U : 3526232263U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 3902664253U : 767690299U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)65 : (unsigned char)253;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = -6912497123618471179LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = (short)-24573;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = (unsigned char)72;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = 3817810843849205566ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 5819624083042774913LL : -3366090556837992336LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_26 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-42 : (signed char)-66;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (short)30491 : (short)-18707;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_37 [i_0] = (i_0 % 2 == 0) ? (unsigned char)199 : (unsigned char)3;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_25 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        hash(&seed, arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        hash(&seed, arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_37 [i_0] );
}
void test(short var_0, unsigned char var_1, unsigned long long int var_2, unsigned char var_3, int var_4, unsigned long long int var_5, unsigned int var_6, short var_7, unsigned char var_8, unsigned long long int var_9, short var_10, unsigned long long int var_11, signed char var_12, unsigned char var_13, unsigned int var_14, unsigned char var_15, unsigned long long int var_16, int zero, unsigned short arr_0 [25] [25] , short arr_1 [25] , short arr_2 [25] [25] , unsigned int arr_3 [25] , unsigned long long int arr_5 [11] , unsigned long long int arr_6 [11] , unsigned long long int arr_12 [16] [16] , unsigned short arr_13 [16] , signed char arr_14 [16] [16] [16] , signed char arr_15 [16] [16] [16] , unsigned long long int arr_16 [16] [16] , unsigned long long int arr_17 [16] [16] [16] [16] , unsigned char arr_19 [16] [16] [16] [16] [16] , short arr_20 [16] [16] [16] [16] [16] [16] , unsigned char arr_22 [16] [16] [16] [16] , unsigned int arr_24 [16] [16] [16] [16] [16] [16] [16] , unsigned int arr_32 [16] [16] [16] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_13, var_14, var_15, var_16, zero, arr_0 , arr_1 , arr_2 , arr_3 , arr_5 , arr_6 , arr_12 , arr_13 , arr_14 , arr_15 , arr_16 , arr_17 , arr_19 , arr_20 , arr_22 , arr_24 , arr_32 );
    checksum();
    printf("%llu\n", seed);
}
