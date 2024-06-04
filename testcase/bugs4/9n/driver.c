#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 954898900U;
unsigned short var_11 = (unsigned short)36832;
unsigned char var_13 = (unsigned char)11;
long long int var_16 = -1726303307787034641LL;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned char var_19 = (unsigned char)76;
unsigned int var_20 = 400779664U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test(unsigned int var_2, unsigned short var_11, unsigned char var_13, long long int var_16, _Bool var_18, int zero);

int main() {
    init();
    test(var_2, var_11, var_13, var_16, var_18, zero);
    checksum();
    printf("%llu\n", seed);
}
