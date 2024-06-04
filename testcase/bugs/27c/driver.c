#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)74;
unsigned short var_1 = (unsigned short)15563;
unsigned char var_3 = (unsigned char)44;
signed char var_6 = (signed char)-114;
int zero = 0;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)9;
unsigned char var_13 = (unsigned char)137;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test(signed char var_0, unsigned short var_1, unsigned char var_3, signed char var_6, int zero);

int main() {
    init();
    test(var_0, var_1, var_3, var_6, zero);
    checksum();
    printf("%llu\n", seed);
}
