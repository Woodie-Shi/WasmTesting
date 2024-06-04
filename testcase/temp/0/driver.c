#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 320525383601052796LL;
unsigned char var_13 = (unsigned char)17;
int var_15 = -2044902190;
int zero = 0;
unsigned short var_16 = (unsigned short)3814;
unsigned char var_17 = (unsigned char)45;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test(long long int var_1, unsigned char var_13, int var_15, int zero);

int main() {
    init();
    test(var_1, var_13, var_15, zero);
    checksum();
    printf("%llu\n", seed);
}
