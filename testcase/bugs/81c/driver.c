#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40643;
unsigned int var_1 = 703636858U;
unsigned short var_2 = (unsigned short)3527;
unsigned short var_3 = (unsigned short)27117;
unsigned long long int var_4 = 17273371678723731463ULL;
unsigned char var_5 = (unsigned char)99;
_Bool var_6 = (_Bool)1;
short var_7 = (short)3710;
int var_8 = -628736457;
unsigned short var_9 = (unsigned short)62000;
int var_11 = -1123503812;
unsigned short var_12 = (unsigned short)20879;
unsigned int var_13 = 2289504579U;
unsigned int var_14 = 4004494967U;
unsigned long long int var_15 = 3444228131076100353ULL;
int zero = 0;
unsigned long long int var_16 = 4335355935162014710ULL;
unsigned char var_17 = (unsigned char)102;
int var_18 = -1151578176;
int var_19 = 2087721290;
short var_20 = (short)-11193;
unsigned long long int var_21 = 743507214194278799ULL;
unsigned short var_22 = (unsigned short)25107;
unsigned short var_23 = (unsigned short)14951;
short var_24 = (short)-5081;
short var_25 = (short)28338;
int var_26 = -1416706839;
void init() {
}

void checksum() {
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
}
void test(unsigned short var_0, unsigned int var_1, unsigned short var_2, unsigned short var_3, unsigned long long int var_4, unsigned char var_5, _Bool var_6, short var_7, int var_8, unsigned short var_9, int var_11, unsigned short var_12, unsigned int var_13, unsigned int var_14, unsigned long long int var_15, int zero);

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_11, var_12, var_13, var_14, var_15, zero);
    checksum();
    printf("%llu\n", seed);
}
