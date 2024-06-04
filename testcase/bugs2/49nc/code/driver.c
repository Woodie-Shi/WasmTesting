#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 2406718572U;
long long int var_2 = -1097416537934535942LL;
unsigned short var_3 = (unsigned short)16552;
long long int var_4 = 8100881101516800568LL;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)98;
_Bool var_7 = (_Bool)1;
long long int var_8 = 2705194273443517242LL;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)1;
int zero = 0;
int var_11 = 997059024;
unsigned char var_12 = (unsigned char)75;
unsigned long long int var_13 = 12466490830865183313ULL;
unsigned long long int var_14 = 4623080017985815375ULL;
signed char var_15 = (signed char)-98;
unsigned char var_16 = (unsigned char)100;
unsigned long long int var_17 = 15877042027637150026ULL;
unsigned long long int var_18 = 14269402862668211869ULL;
signed char var_19 = (signed char)-6;
signed char var_20 = (signed char)34;
unsigned short var_21 = (unsigned short)58222;
int var_22 = 1641656735;
unsigned int var_23 = 3170499263U;
unsigned char var_24 = (unsigned char)45;
signed char var_25 = (signed char)98;
unsigned long long int var_26 = 14768734778578777084ULL;
unsigned long long int var_27 = 6212826801452037655ULL;
short var_28 = (short)12182;
signed char var_29 = (signed char)-46;
unsigned long long int var_30 = 369058251069466138ULL;
_Bool var_31 = (_Bool)1;
unsigned int var_32 = 2136411529U;
short var_33 = (short)17221;
long long int var_34 = 518543531320641085LL;
unsigned int var_35 = 68453826U;
unsigned char var_36 = (unsigned char)217;
long long int var_37 = 1529906543666923676LL;
unsigned char var_38 = (unsigned char)189;
long long int var_39 = 6696530898499052975LL;
unsigned char var_40 = (unsigned char)224;
signed char var_41 = (signed char)4;
unsigned long long int var_42 = 7372747679584702449ULL;
_Bool var_43 = (_Bool)0;
unsigned short var_44 = (unsigned short)51232;
unsigned long long int var_45 = 3952222599429606825ULL;
long long int var_46 = 3533524281340205782LL;
unsigned int var_47 = 222749012U;
signed char var_48 = (signed char)112;
signed char var_49 = (signed char)17;
unsigned char var_50 = (unsigned char)137;
long long int var_51 = 4483741260205195883LL;
unsigned long long int var_52 = 7468968972029626551ULL;
unsigned char var_53 = (unsigned char)89;
unsigned int var_54 = 1440892656U;
long long int arr_0 [22] ;
signed char arr_1 [22] [22] ;
unsigned int arr_2 [22] ;
long long int arr_3 [22] ;
signed char arr_4 [22] [22] [22] ;
unsigned char arr_6 [22] [22] [22] ;
unsigned long long int arr_7 [22] ;
unsigned char arr_8 [22] ;
signed char arr_9 [22] [22] [22] [22] ;
long long int arr_10 [22] [22] [22] ;
unsigned long long int arr_11 [22] [22] [22] [22] ;
long long int arr_13 [22] ;
unsigned char arr_14 [22] [22] [22] [22] [22] [22] [22] ;
short arr_16 [22] [22] [22] [22] [22] [22] ;
long long int arr_17 [22] [22] [22] [22] [22] ;
unsigned short arr_18 [22] [22] [22] ;
long long int arr_19 [22] [22] [22] ;
int arr_20 [22] [22] [22] ;
int arr_22 [22] [22] [22] [22] [22] ;
short arr_23 [22] [22] [22] [22] [22] [22] ;
int arr_24 [22] ;
unsigned short arr_27 [22] ;
unsigned char arr_28 [22] [22] ;
long long int arr_31 [22] [22] [22] ;
int arr_34 [22] [22] ;
unsigned int arr_35 [22] [22] ;
unsigned long long int arr_37 [22] [22] [22] ;
long long int arr_38 [22] [22] ;
int arr_39 [22] ;
_Bool arr_40 [22] [22] ;
long long int arr_41 [22] ;
int arr_42 [22] [22] ;
unsigned long long int arr_46 [22] [22] [22] ;
int arr_47 [22] [22] ;
unsigned short arr_48 [22] [22] [22] ;
unsigned int arr_55 [22] [22] [22] [22] [22] ;
unsigned char arr_5 [22] ;
unsigned long long int arr_12 [22] [22] ;
long long int arr_26 [22] [22] [22] [22] [22] [22] ;
long long int arr_29 [22] ;
unsigned long long int arr_32 [22] [22] [22] ;
unsigned char arr_33 [22] [22] ;
unsigned char arr_53 [22] [22] [22] [22] [22] [22] ;
unsigned char arr_54 [22] [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 2993542899848002953LL : 8606393046524347044LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)118;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 1372969777U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 3914357319969923382LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)54;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)8;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = 10986685188337906590ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (unsigned char)108;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (signed char)65;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 4070927330574209664LL : -6877322752197142093LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 1765535123574848571ULL : 9656537639969557215ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 656868720070631832LL : -2137194374839060712LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 22; ++i_6) 
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_1 % 2 == 0) ? (unsigned char)241 : (unsigned char)23;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)27846;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = -6448813450512267641LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)24180 : (unsigned short)23768;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = 587806707938764245LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = 1517351562;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] = 1560968609;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? (short)14427 : (short)-25313;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_24 [i_0] = -1981782896;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_27 [i_0] = (unsigned short)50030;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_28 [i_0] [i_1] = (unsigned char)119;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = 5001756517893765852LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_34 [i_0] [i_1] = 1979095105;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_35 [i_0] [i_1] = 3110748176U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_37 [i_0] [i_1] [i_2] = 5368474016796186519ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_38 [i_0] [i_1] = 5186393157959783305LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_39 [i_0] = 84634961;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_40 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_41 [i_0] = -291137408773354617LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_42 [i_0] [i_1] = -1876886125;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_46 [i_0] [i_1] [i_2] = 4059539823282718133ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_47 [i_0] [i_1] = 1319360899;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_48 [i_0] [i_1] [i_2] = (unsigned short)57626;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_55 [i_0] [i_1] [i_2] [i_3] [i_4] = 908545007U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned char)217 : (unsigned char)214;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? 830222008888439665ULL : 3031997388242469773ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? 6574044104164101368LL : -6495942179580847629LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_29 [i_0] = -6879609762706268100LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = 10887897149504029919ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_33 [i_0] [i_1] = (unsigned char)82;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_53 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? (unsigned char)169 : (unsigned char)148;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_54 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (unsigned char)39 : (unsigned char)24;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
    hash(&seed, var_50);
    hash(&seed, var_51);
    hash(&seed, var_52);
    hash(&seed, var_53);
    hash(&seed, var_54);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            hash(&seed, arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_32 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_33 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            hash(&seed, arr_53 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        hash(&seed, arr_54 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test(_Bool var_0, unsigned int var_1, long long int var_2, unsigned short var_3, long long int var_4, _Bool var_5, signed char var_6, _Bool var_7, long long int var_8, _Bool var_9, _Bool var_10, int zero, long long int arr_0 [22] , signed char arr_1 [22] [22] , unsigned int arr_2 [22] , long long int arr_3 [22] , signed char arr_4 [22] [22] [22] , unsigned char arr_6 [22] [22] [22] , unsigned long long int arr_7 [22] , unsigned char arr_8 [22] , signed char arr_9 [22] [22] [22] [22] , long long int arr_10 [22] [22] [22] , unsigned long long int arr_11 [22] [22] [22] [22] , long long int arr_13 [22] , unsigned char arr_14 [22] [22] [22] [22] [22] [22] [22] , short arr_16 [22] [22] [22] [22] [22] [22] , long long int arr_17 [22] [22] [22] [22] [22] , unsigned short arr_18 [22] [22] [22] , long long int arr_19 [22] [22] [22] , int arr_20 [22] [22] [22] , int arr_22 [22] [22] [22] [22] [22] , short arr_23 [22] [22] [22] [22] [22] [22] , int arr_24 [22] , unsigned short arr_27 [22] , unsigned char arr_28 [22] [22] , long long int arr_31 [22] [22] [22] , int arr_34 [22] [22] , unsigned int arr_35 [22] [22] , unsigned long long int arr_37 [22] [22] [22] , long long int arr_38 [22] [22] , int arr_39 [22] , _Bool arr_40 [22] [22] , long long int arr_41 [22] , int arr_42 [22] [22] , unsigned long long int arr_46 [22] [22] [22] , int arr_47 [22] [22] , unsigned short arr_48 [22] [22] [22] , unsigned int arr_55 [22] [22] [22] [22] [22] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, zero, arr_0 , arr_1 , arr_2 , arr_3 , arr_4 , arr_6 , arr_7 , arr_8 , arr_9 , arr_10 , arr_11 , arr_13 , arr_14 , arr_16 , arr_17 , arr_18 , arr_19 , arr_20 , arr_22 , arr_23 , arr_24 , arr_27 , arr_28 , arr_31 , arr_34 , arr_35 , arr_37 , arr_38 , arr_39 , arr_40 , arr_41 , arr_42 , arr_46 , arr_47 , arr_48 , arr_55 );
    checksum();
    printf("%llu\n", seed);
}
