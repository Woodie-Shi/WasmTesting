#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
int var_13 = 154093448;
unsigned short var_14 = (unsigned short)50782;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test(int zero);

int main() {
    init();
    test(zero);
    checksum();
    printf("%llu\n", seed);
}
