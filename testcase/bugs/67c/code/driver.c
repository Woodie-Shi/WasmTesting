#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 4748865;
unsigned int var_1 = 1722824869U;
unsigned int var_2 = 397006464U;
unsigned char var_5 = (unsigned char)163;
signed char var_6 = (signed char)-2;
long long int var_8 = 7480003332848676565LL;
unsigned long long int var_11 = 10153202166527181481ULL;
unsigned long long int var_12 = 1399308375737799175ULL;
long long int var_13 = 6236845486844672739LL;
int zero = 0;
unsigned int var_14 = 3892822501U;
signed char var_15 = (signed char)3;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 1020105955899674257ULL;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)116;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test(int var_0, unsigned int var_1, unsigned int var_2, unsigned char var_5, signed char var_6, long long int var_8, unsigned long long int var_11, unsigned long long int var_12, long long int var_13, int zero);

int main() {
    init();
    test(var_0, var_1, var_2, var_5, var_6, var_8, var_11, var_12, var_13, zero);
    checksum();
    printf("%llu\n", seed);
}
