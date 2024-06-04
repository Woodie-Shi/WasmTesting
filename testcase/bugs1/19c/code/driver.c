#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)11755;
unsigned int var_6 = 243210940U;
int zero = 0;
short var_13 = (short)-24526;
long long int var_14 = 3328347756785941673LL;
unsigned short var_15 = (unsigned short)5942;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test(short var_4, unsigned int var_6, int zero);

int main() {
    init();
    test(var_4, var_6, zero);
    checksum();
    printf("%llu\n", seed);
}
