#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 6156667216651394616LL;
int var_7 = -2092270980;
unsigned int var_8 = 2510151393U;
int zero = 0;
int var_11 = 1673243694;
signed char var_12 = (signed char)-59;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test(long long int var_5, int var_7, unsigned int var_8, int zero);

int main() {
    init();
    test(var_5, var_7, var_8, zero);
    checksum();
    printf("%llu\n", seed);
}
