#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)47696;
unsigned char var_9 = (unsigned char)173;
int zero = 0;
long long int var_13 = -152866408411371196LL;
int var_14 = 1079363471;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test(unsigned short var_4, unsigned char var_9, int zero);

int main() {
    init();
    test(var_4, var_9, zero);
    checksum();
    printf("%llu\n", seed);
}
