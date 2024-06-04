#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)124;
long long int var_1 = 5738874423761096647LL;
int var_2 = 321796563;
unsigned long long int var_3 = 11499801352573937786ULL;
_Bool var_4 = (_Bool)1;
short var_5 = (short)-31748;
unsigned long long int var_6 = 1365893975963808456ULL;
long long int var_7 = -2202672964033666487LL;
unsigned long long int var_8 = 8760921967692241197ULL;
unsigned long long int var_9 = 2181248097958040044ULL;
int var_10 = -630738039;
int zero = 0;
unsigned long long int var_11 = 14423178589748381960ULL;
int var_12 = -1643250445;
unsigned long long int var_13 = 13872168805692425481ULL;
int var_14 = -427577090;
unsigned long long int var_15 = 17332057618935492424ULL;
signed char var_16 = (signed char)-95;
_Bool var_17 = (_Bool)1;
int var_18 = 1491501098;
unsigned long long int var_19 = 1833171543872403835ULL;
unsigned long long int var_20 = 13286788768576616376ULL;
unsigned long long int var_21 = 12121370863869934328ULL;
int var_22 = 882111119;
signed char var_23 = (signed char)-27;
int var_24 = 1551181209;
_Bool var_25 = (_Bool)0;
_Bool var_26 = (_Bool)0;
unsigned long long int var_27 = 10432745472002404201ULL;
int var_28 = -1915128122;
long long int var_29 = -7439904072564143005LL;
short var_30 = (short)-3264;
_Bool var_31 = (_Bool)0;
signed char var_32 = (signed char)-50;
signed char var_33 = (signed char)6;
_Bool var_34 = (_Bool)0;
unsigned long long int var_35 = 14911816681281508020ULL;
signed char var_36 = (signed char)18;
long long int var_37 = -8444830947874077406LL;
unsigned long long int var_38 = 14985551577610892633ULL;
unsigned long long int var_39 = 18193846965675649639ULL;
int arr_0 [20] ;
long long int arr_1 [20] ;
signed char arr_2 [20] ;
signed char arr_3 [20] ;
int arr_4 [20] ;
short arr_6 [20] ;
short arr_7 [20] ;
unsigned long long int arr_8 [20] [20] ;
signed char arr_9 [20] ;
short arr_10 [20] [20] ;
short arr_12 [20] [20] [20] [20] [20] [20] [20] ;
unsigned long long int arr_16 [20] [20] [20] ;
short arr_17 [20] [20] [20] [20] [20] [20] ;
short arr_18 [20] ;
long long int arr_19 [20] [20] [20] [20] ;
long long int arr_23 [20] [20] [20] [20] [20] [20] ;
unsigned short arr_5 [20] [20] ;
signed char arr_13 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = -239039326;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 4047986381826908120LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)57 : (signed char)-119;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (signed char)81;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 1682137211;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (short)-2283;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (short)-29804;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? 2067732994870838290ULL : 16685171955295098405ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (signed char)103;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)29852 : (short)31674;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 20; ++i_6) 
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_1 % 2 == 0) ? (short)19939 : (short)-31335;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 14995894029401090514ULL : 10557233188892263157ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)11581;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_18 [i_0] = (short)7568;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? -8394532811683493508LL : -6781353408683596600LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? -3933346507218922679LL : -7045192598433294053LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)9210 : (unsigned short)663;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-104 : (signed char)-74;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
}
void test(signed char var_0, long long int var_1, int var_2, unsigned long long int var_3, _Bool var_4, short var_5, unsigned long long int var_6, long long int var_7, unsigned long long int var_8, unsigned long long int var_9, int var_10, int zero, int arr_0 [20] , long long int arr_1 [20] , signed char arr_2 [20] , signed char arr_3 [20] , int arr_4 [20] , short arr_6 [20] , short arr_7 [20] , unsigned long long int arr_8 [20] [20] , signed char arr_9 [20] , short arr_10 [20] [20] , short arr_12 [20] [20] [20] [20] [20] [20] [20] , unsigned long long int arr_16 [20] [20] [20] , short arr_17 [20] [20] [20] [20] [20] [20] , short arr_18 [20] , long long int arr_19 [20] [20] [20] [20] , long long int arr_23 [20] [20] [20] [20] [20] [20] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, zero, arr_0 , arr_1 , arr_2 , arr_3 , arr_4 , arr_6 , arr_7 , arr_8 , arr_9 , arr_10 , arr_12 , arr_16 , arr_17 , arr_18 , arr_19 , arr_23 );
    checksum();
    printf("%llu\n", seed);
}
