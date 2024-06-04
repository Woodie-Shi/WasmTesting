#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)58433;
unsigned char var_5 = (unsigned char)29;
unsigned char var_6 = (unsigned char)201;
long long int var_11 = 622648073373385756LL;
unsigned int var_13 = 3504243112U;
int zero = 0;
long long int var_15 = 7425557409470784654LL;
signed char var_16 = (signed char)-43;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test(unsigned short var_2, unsigned char var_5, unsigned char var_6, long long int var_11, unsigned int var_13, int zero);

int main() {
    init();
    test(var_2, var_5, var_6, var_11, var_13, zero);
    checksum();
    printf("%llu\n", seed);
}
