#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)56;
unsigned long long int var_1 = 4562724125438946986ULL;
long long int var_3 = 1437957700666273973LL;
signed char var_4 = (signed char)23;
int var_5 = -595339495;
unsigned int var_6 = 3470179799U;
unsigned long long int var_8 = 3236142507178193282ULL;
signed char var_9 = (signed char)-39;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)56070;
short var_12 = (short)-2814;
signed char var_13 = (signed char)23;
int zero = 0;
signed char var_14 = (signed char)-49;
signed char var_15 = (signed char)113;
int var_16 = -955054665;
unsigned char var_17 = (unsigned char)35;
short var_18 = (short)21709;
signed char var_19 = (signed char)-93;
signed char var_20 = (signed char)-102;
unsigned char var_21 = (unsigned char)149;
signed char var_22 = (signed char)54;
long long int var_23 = 2283024136915572514LL;
unsigned short var_24 = (unsigned short)53432;
unsigned long long int arr_1 [20] ;
unsigned long long int arr_2 [20] [20] ;
unsigned int arr_3 [20] [20] ;
long long int arr_5 [20] [20] [20] ;
signed char arr_6 [20] [20] ;
_Bool arr_7 [20] [20] ;
_Bool arr_8 [20] [20] ;
_Bool arr_9 [20] [20] ;
int arr_11 [20] [20] [20] ;
unsigned int arr_13 [20] [20] [20] [20] [20] ;
int arr_15 [20] ;
long long int arr_12 [20] [20] [20] ;
short arr_18 [20] [20] [20] [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 6450512012322767254ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = 11818217872120369238ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = 4008915120U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 3629036064111457126LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)27 : (signed char)-50;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -394302203 : 252448455;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 317648861U : 2556671927U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 1715580540 : 323772631;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -3835546750719620527LL : 4674271262355674931LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 20; ++i_6) 
                                arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_1 % 2 == 0) ? (short)335 : (short)678;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 20; ++i_6) 
                                hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
}
void test(signed char var_0, unsigned long long int var_1, long long int var_3, signed char var_4, int var_5, unsigned int var_6, unsigned long long int var_8, signed char var_9, _Bool var_10, unsigned short var_11, short var_12, signed char var_13, int zero, unsigned long long int arr_1 [20] , unsigned long long int arr_2 [20] [20] , unsigned int arr_3 [20] [20] , long long int arr_5 [20] [20] [20] , signed char arr_6 [20] [20] , _Bool arr_7 [20] [20] , _Bool arr_8 [20] [20] , _Bool arr_9 [20] [20] , int arr_11 [20] [20] [20] , unsigned int arr_13 [20] [20] [20] [20] [20] , int arr_15 [20] );

int main() {
    init();
    test(var_0, var_1, var_3, var_4, var_5, var_6, var_8, var_9, var_10, var_11, var_12, var_13, zero, arr_1 , arr_2 , arr_3 , arr_5 , arr_6 , arr_7 , arr_8 , arr_9 , arr_11 , arr_13 , arr_15 );
    checksum();
    printf("%llu\n", seed);
}
