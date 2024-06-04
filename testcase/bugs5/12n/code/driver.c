#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)12122;
unsigned short var_7 = (unsigned short)22547;
unsigned int var_9 = 2136808598U;
int var_11 = -276674138;
short var_12 = (short)-9406;
int zero = 0;
short var_13 = (short)1554;
long long int var_14 = 5574811425270876189LL;
unsigned int var_15 = 3294535561U;
short var_16 = (short)-10869;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test(unsigned short var_6, unsigned short var_7, unsigned int var_9, int var_11, short var_12, int zero);

int main() {
    init();
    test(var_6, var_7, var_9, var_11, var_12, zero);
    checksum();
    printf("%llu\n", seed);
}
