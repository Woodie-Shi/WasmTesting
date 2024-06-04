#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13355595654434907194ULL;
_Bool var_4 = (_Bool)1;
long long int var_13 = -6272845627256196108LL;
short var_16 = (short)-13694;
unsigned int var_17 = 3908207762U;
int zero = 0;
unsigned char var_19 = (unsigned char)163;
unsigned int var_20 = 1877847749U;
short var_21 = (short)20004;
unsigned int var_22 = 170800712U;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test(unsigned long long int var_1, _Bool var_4, long long int var_13, short var_16, unsigned int var_17, int zero);

int main() {
    init();
    test(var_1, var_4, var_13, var_16, var_17, zero);
    checksum();
    printf("%llu\n", seed);
}
