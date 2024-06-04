#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 392244237U;
short var_2 = (short)-17109;
unsigned long long int var_6 = 17391908622520355215ULL;
int zero = 0;
signed char var_11 = (signed char)0;
int var_12 = -741425645;
int var_13 = 1344162589;
int var_14 = 1623586478;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test(unsigned int var_0, short var_2, unsigned long long int var_6, int zero);

int main() {
    init();
    test(var_0, var_2, var_6, zero);
    checksum();
    printf("%llu\n", seed);
}
