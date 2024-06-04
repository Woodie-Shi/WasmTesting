#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8269206275189607809ULL;
long long int var_2 = 8311758825931327041LL;
signed char var_3 = (signed char)-30;
_Bool var_5 = (_Bool)0;
long long int var_6 = 1769783129697760112LL;
unsigned short var_7 = (unsigned short)38109;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 15588622062913801343ULL;
unsigned short var_11 = (unsigned short)11749;
signed char var_12 = (signed char)-64;
signed char var_13 = (signed char)-33;
signed char var_14 = (signed char)-103;
int zero = 0;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)1;
int var_18 = -2065425277;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test(unsigned long long int var_0, long long int var_2, signed char var_3, _Bool var_5, long long int var_6, unsigned short var_7, _Bool var_8, unsigned long long int var_9, unsigned short var_11, signed char var_12, signed char var_13, signed char var_14, int zero);

int main() {
    init();
    test(var_0, var_2, var_3, var_5, var_6, var_7, var_8, var_9, var_11, var_12, var_13, var_14, zero);
    checksum();
    printf("%llu\n", seed);
}
