#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1930067508976702262LL;
signed char var_1 = (signed char)127;
unsigned int var_2 = 1587117667U;
unsigned short var_3 = (unsigned short)13432;
unsigned short var_4 = (unsigned short)2804;
long long int var_5 = 1470458889577270170LL;
long long int var_6 = 2209972275464787915LL;
unsigned long long int var_9 = 16944441501840386005ULL;
long long int var_10 = -9217332164551053885LL;
long long int var_11 = -7628674430596072474LL;
unsigned int var_12 = 3480970326U;
unsigned long long int var_13 = 14037339876722639663ULL;
short var_15 = (short)21908;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)52468;
int zero = 0;
short var_19 = (short)22793;
long long int var_20 = 8209109573921682716LL;
unsigned long long int var_21 = 9246081068168407361ULL;
long long int var_22 = 2147000140327206536LL;
long long int var_23 = 927748075587284686LL;
short var_24 = (short)20439;
unsigned int var_25 = 1468193375U;
long long int var_26 = 85563223320892157LL;
unsigned int var_27 = 2421856442U;
int var_28 = -1841850500;
_Bool var_29 = (_Bool)0;
short var_30 = (short)-7212;
unsigned int var_31 = 50027214U;
unsigned long long int var_32 = 15611020213076886540ULL;
int var_33 = -607173634;
unsigned long long int var_34 = 6401281701447043717ULL;
unsigned short arr_0 [17] ;
unsigned long long int arr_1 [17] ;
unsigned long long int arr_2 [17] [17] ;
long long int arr_3 [17] [17] ;
unsigned long long int arr_4 [17] ;
long long int arr_5 [17] ;
_Bool arr_6 [17] [17] [17] ;
_Bool arr_7 [17] [17] [17] [17] [17] [17] ;
_Bool arr_8 [17] [17] [17] [17] [17] [17] ;
unsigned int arr_11 [17] ;
unsigned long long int arr_12 [17] ;
unsigned long long int arr_13 [17] [17] [17] [17] ;
unsigned short arr_14 [17] [17] [17] [17] [17] ;
short arr_15 [17] ;
unsigned short arr_16 [17] ;
int arr_17 [17] [17] [17] [17] [17] [17] [17] ;
unsigned int arr_9 [17] [17] ;
unsigned long long int arr_10 [17] ;
int arr_20 [17] ;
unsigned int arr_21 [17] [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned short)59612;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 11541892740012500091ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = 12203310903114494906ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = -2952700530484382638LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 9836187540730414428ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 3909127650504189974LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = 2006251301U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_12 [i_0] = 12334331406776785392ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = 6860788279360105353ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)5416;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_15 [i_0] = (short)-3020;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_16 [i_0] = (unsigned short)45083;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 17; ++i_6) 
                                arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = -1277798447;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_9 [i_0] [i_1] = 1562994697U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = 2872573007148315338ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_20 [i_0] = -1689873070;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] = 303114578U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        hash(&seed, arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test(long long int var_0, signed char var_1, unsigned int var_2, unsigned short var_3, unsigned short var_4, long long int var_5, long long int var_6, unsigned long long int var_9, long long int var_10, long long int var_11, unsigned int var_12, unsigned long long int var_13, short var_15, _Bool var_16, _Bool var_17, unsigned short var_18, int zero, unsigned short arr_0 [17] , unsigned long long int arr_1 [17] , unsigned long long int arr_2 [17] [17] , long long int arr_3 [17] [17] , unsigned long long int arr_4 [17] , long long int arr_5 [17] , _Bool arr_6 [17] [17] [17] , _Bool arr_7 [17] [17] [17] [17] [17] [17] , _Bool arr_8 [17] [17] [17] [17] [17] [17] , unsigned int arr_11 [17] , unsigned long long int arr_12 [17] , unsigned long long int arr_13 [17] [17] [17] [17] , unsigned short arr_14 [17] [17] [17] [17] [17] , short arr_15 [17] , unsigned short arr_16 [17] , int arr_17 [17] [17] [17] [17] [17] [17] [17] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_9, var_10, var_11, var_12, var_13, var_15, var_16, var_17, var_18, zero, arr_0 , arr_1 , arr_2 , arr_3 , arr_4 , arr_5 , arr_6 , arr_7 , arr_8 , arr_11 , arr_12 , arr_13 , arr_14 , arr_15 , arr_16 , arr_17 );
    checksum();
    printf("%llu\n", seed);
}
