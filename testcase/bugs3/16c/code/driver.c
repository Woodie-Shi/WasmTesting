#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2546416389983496195ULL;
unsigned int var_2 = 4028672287U;
signed char var_3 = (signed char)-8;
unsigned char var_4 = (unsigned char)246;
unsigned short var_5 = (unsigned short)13381;
_Bool var_6 = (_Bool)0;
unsigned int var_8 = 1905045129U;
int zero = 0;
int var_10 = 1522840715;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-96;
unsigned int var_13 = 3559609818U;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)24846;
unsigned short var_16 = (unsigned short)40215;
long long int var_17 = 7897038047519229784LL;
unsigned int var_18 = 439874373U;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 1089901578U;
unsigned short var_21 = (unsigned short)52814;
signed char var_22 = (signed char)-101;
unsigned short var_23 = (unsigned short)6380;
unsigned short var_24 = (unsigned short)42984;
_Bool var_25 = (_Bool)0;
signed char var_26 = (signed char)-100;
signed char var_27 = (signed char)103;
unsigned int var_28 = 1645615893U;
_Bool var_29 = (_Bool)1;
_Bool var_30 = (_Bool)0;
int var_31 = -1402912513;
long long int var_32 = 3750006681484902819LL;
long long int var_33 = 4985821704813676416LL;
unsigned int var_34 = 1890044022U;
unsigned long long int var_35 = 2837047774700394381ULL;
unsigned long long int var_36 = 373051857521853127ULL;
signed char var_37 = (signed char)104;
unsigned long long int var_38 = 3169738206098804338ULL;
unsigned short var_39 = (unsigned short)9812;
unsigned short var_40 = (unsigned short)17051;
signed char var_41 = (signed char)-28;
unsigned short var_42 = (unsigned short)61623;
_Bool var_43 = (_Bool)0;
signed char var_44 = (signed char)114;
signed char var_45 = (signed char)-102;
unsigned char arr_0 [19] [19] ;
unsigned short arr_1 [19] ;
int arr_2 [19] ;
unsigned int arr_3 [19] ;
unsigned short arr_4 [19] [19] ;
int arr_5 [19] [19] [19] ;
unsigned short arr_6 [19] [19] [19] ;
signed char arr_7 [19] [19] [19] [19] ;
_Bool arr_8 [19] [19] [19] ;
_Bool arr_9 [19] [19] [19] [19] ;
unsigned short arr_10 [19] [19] ;
long long int arr_11 [19] [19] [19] [19] [19] [19] ;
unsigned char arr_12 [19] [19] [19] [19] ;
long long int arr_13 [19] [19] [19] [19] ;
_Bool arr_14 [19] [19] [19] ;
unsigned long long int arr_15 [19] [19] [19] [19] [19] [19] ;
signed char arr_16 [19] [19] [19] [19] [19] ;
unsigned char arr_17 [19] [19] [19] [19] [19] [19] [19] ;
_Bool arr_18 [19] ;
long long int arr_19 [19] [19] [19] [19] [19] [19] ;
unsigned short arr_21 [19] [19] [19] [19] [19] ;
unsigned int arr_25 [19] [19] [19] [19] [19] ;
_Bool arr_26 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)213;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned short)6286;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = -2011063453;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 2720133953U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)36220;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 693876754;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)16723;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (signed char)62;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)13029;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -4492627738563741221LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned char)202 : (unsigned char)201;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 6552404013428181462LL : 4065239560504146613LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 16195477246382558045ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (signed char)62 : (signed char)-118;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 19; ++i_6) 
                                arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_1 % 2 == 0) ? (unsigned char)117 : (unsigned char)193;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -5906407633834188360LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)9261;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] = 217291604U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_26 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
}
void test(unsigned long long int var_0, unsigned int var_2, signed char var_3, unsigned char var_4, unsigned short var_5, _Bool var_6, unsigned int var_8, int zero, unsigned char arr_0 [19] [19] , unsigned short arr_1 [19] , int arr_2 [19] , unsigned int arr_3 [19] , unsigned short arr_4 [19] [19] , int arr_5 [19] [19] [19] , unsigned short arr_6 [19] [19] [19] , signed char arr_7 [19] [19] [19] [19] , _Bool arr_8 [19] [19] [19] , _Bool arr_9 [19] [19] [19] [19] , unsigned short arr_10 [19] [19] , long long int arr_11 [19] [19] [19] [19] [19] [19] , unsigned char arr_12 [19] [19] [19] [19] , long long int arr_13 [19] [19] [19] [19] , _Bool arr_14 [19] [19] [19] , unsigned long long int arr_15 [19] [19] [19] [19] [19] [19] , signed char arr_16 [19] [19] [19] [19] [19] , unsigned char arr_17 [19] [19] [19] [19] [19] [19] [19] , _Bool arr_18 [19] , long long int arr_19 [19] [19] [19] [19] [19] [19] , unsigned short arr_21 [19] [19] [19] [19] [19] , unsigned int arr_25 [19] [19] [19] [19] [19] , _Bool arr_26 [19] [19] );

int main() {
    init();
    test(var_0, var_2, var_3, var_4, var_5, var_6, var_8, zero, arr_0 , arr_1 , arr_2 , arr_3 , arr_4 , arr_5 , arr_6 , arr_7 , arr_8 , arr_9 , arr_10 , arr_11 , arr_12 , arr_13 , arr_14 , arr_15 , arr_16 , arr_17 , arr_18 , arr_19 , arr_21 , arr_25 , arr_26 );
    checksum();
    printf("%llu\n", seed);
}
