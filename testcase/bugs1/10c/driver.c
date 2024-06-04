#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2884367612U;
_Bool var_4 = (_Bool)0;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned short var_14 = (unsigned short)5958;
unsigned short var_15 = (unsigned short)27469;
unsigned short var_16 = (unsigned short)15501;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test(unsigned int var_2, _Bool var_4, _Bool var_8, int zero);

int main() {
    init();
    test(var_2, var_4, var_8, zero);
    checksum();
    printf("%llu\n", seed);
}
