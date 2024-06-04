#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12978237774205734690ULL;
unsigned long long int var_3 = 11446373246533434769ULL;
signed char var_4 = (signed char)11;
unsigned long long int var_5 = 12372559938111086950ULL;
_Bool var_7 = (_Bool)0;
long long int var_9 = -2769015247633958085LL;
signed char var_11 = (signed char)-49;
unsigned short var_12 = (unsigned short)1322;
int var_14 = -796836672;
int zero = 0;
unsigned char var_15 = (unsigned char)237;
int var_16 = -744883706;
unsigned int var_17 = 3794617690U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test(unsigned long long int var_2, unsigned long long int var_3, signed char var_4, unsigned long long int var_5, _Bool var_7, long long int var_9, signed char var_11, unsigned short var_12, int var_14, int zero);

int main() {
    init();
    test(var_2, var_3, var_4, var_5, var_7, var_9, var_11, var_12, var_14, zero);
    checksum();
    printf("%llu\n", seed);
}
