#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)39352;
unsigned long long int var_7 = 1670543448052672214ULL;
signed char var_9 = (signed char)-97;
int zero = 0;
short var_10 = (short)25392;
unsigned short var_11 = (unsigned short)41781;
unsigned long long int var_12 = 10106307496933663713ULL;
long long int var_13 = -7682129547348153731LL;
unsigned long long int var_14 = 323307821162656137ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test(unsigned short var_4, unsigned long long int var_7, signed char var_9, int zero);

int main() {
    init();
    test(var_4, var_7, var_9, zero);
    checksum();
    printf("%llu\n", seed);
}
