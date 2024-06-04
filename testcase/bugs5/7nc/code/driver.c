#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 709221520125668724LL;
unsigned char var_7 = (unsigned char)61;
long long int var_13 = -2090985043396953404LL;
int zero = 0;
unsigned char var_17 = (unsigned char)64;
long long int var_18 = 2906015384359356451LL;
unsigned int var_19 = 1558157091U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test(long long int var_1, unsigned char var_7, long long int var_13, int zero);

int main() {
    init();
    test(var_1, var_7, var_13, zero);
    checksum();
    printf("%llu\n", seed);
}
