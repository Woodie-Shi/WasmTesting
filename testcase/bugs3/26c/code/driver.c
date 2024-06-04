#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1092302322;
unsigned long long int var_1 = 10737337289606086066ULL;
unsigned char var_2 = (unsigned char)175;
short var_3 = (short)18637;
short var_4 = (short)32558;
unsigned int var_6 = 1483776793U;
int var_7 = 1425984555;
int var_8 = 840491850;
short var_9 = (short)-28968;
int zero = 0;
unsigned int var_10 = 1936118522U;
unsigned char var_11 = (unsigned char)127;
_Bool var_12 = (_Bool)1;
int var_13 = -598112037;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 2761381906U;
unsigned short var_16 = (unsigned short)14389;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test(int var_0, unsigned long long int var_1, unsigned char var_2, short var_3, short var_4, unsigned int var_6, int var_7, int var_8, short var_9, int zero);

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_6, var_7, var_8, var_9, zero);
    checksum();
    printf("%llu\n", seed);
}
