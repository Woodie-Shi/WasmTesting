#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)23469;
long long int var_4 = 7111609075701372776LL;
unsigned short var_8 = (unsigned short)47926;
long long int var_10 = -8744880928824115475LL;
long long int var_11 = -2670806542075246039LL;
unsigned int var_12 = 4250502821U;
unsigned short var_14 = (unsigned short)29981;
int zero = 0;
unsigned int var_17 = 1120101860U;
unsigned int var_18 = 3994303895U;
unsigned short var_19 = (unsigned short)43741;
unsigned long long int var_20 = 13046908364567053689ULL;
unsigned char var_21 = (unsigned char)249;
unsigned long long int var_22 = 16544266388049149567ULL;
short arr_0 [13] ;
unsigned int arr_2 [13] ;
unsigned long long int arr_9 [25] ;
long long int arr_10 [25] ;
unsigned char arr_11 [25] [25] ;
unsigned long long int arr_15 [25] [25] [25] [25] ;
unsigned short arr_17 [25] [25] [25] [25] ;
unsigned short arr_20 [25] [25] [25] [25] [25] [25] ;
signed char arr_8 [13] [13] [13] [13] ;
unsigned long long int arr_21 [25] [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (short)-15477;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 2618424676U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = 1028555016639675414ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = 4563040962794695355LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)84 : (unsigned char)249;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 15539003700272798296ULL : 10003356911233607109ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (unsigned short)31850;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)22095;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (signed char)63;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 13368914612899207814ULL : 2035813980908140887ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        hash(&seed, arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test(short var_1, long long int var_4, unsigned short var_8, long long int var_10, long long int var_11, unsigned int var_12, unsigned short var_14, int zero, short arr_0 [13] , unsigned int arr_2 [13] , unsigned long long int arr_9 [25] , long long int arr_10 [25] , unsigned char arr_11 [25] [25] , unsigned long long int arr_15 [25] [25] [25] [25] , unsigned short arr_17 [25] [25] [25] [25] , unsigned short arr_20 [25] [25] [25] [25] [25] [25] );

int main() {
    init();
    test(var_1, var_4, var_8, var_10, var_11, var_12, var_14, zero, arr_0 , arr_2 , arr_9 , arr_10 , arr_11 , arr_15 , arr_17 , arr_20 );
    checksum();
    printf("%llu\n", seed);
}
