#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1670;
long long int var_1 = 2912493521030125955LL;
long long int var_2 = 3084463525471000195LL;
unsigned char var_3 = (unsigned char)224;
_Bool var_4 = (_Bool)1;
unsigned char var_6 = (unsigned char)77;
unsigned int var_7 = 1633517978U;
unsigned int var_8 = 2447348156U;
int var_9 = 446012225;
unsigned int var_10 = 2450603097U;
unsigned int var_11 = 295413257U;
long long int var_12 = 8988769262962891651LL;
int zero = 0;
int var_13 = 1377674326;
signed char var_14 = (signed char)-108;
long long int var_15 = -1825025902218199845LL;
_Bool var_16 = (_Bool)0;
short var_17 = (short)1892;
signed char var_18 = (signed char)82;
int var_19 = -951952058;
long long int var_20 = -7134766871924211207LL;
signed char var_21 = (signed char)22;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)0;
signed char var_24 = (signed char)-126;
unsigned long long int var_25 = 7555517235908585962ULL;
signed char var_26 = (signed char)-21;
int var_27 = 1464018191;
short var_28 = (short)-24635;
signed char var_29 = (signed char)-3;
unsigned int var_30 = 1100638579U;
unsigned short var_31 = (unsigned short)24924;
unsigned long long int var_32 = 14321341468587108797ULL;
unsigned int var_33 = 1489514289U;
_Bool var_34 = (_Bool)0;
signed char var_35 = (signed char)46;
int var_36 = -930876149;
_Bool var_37 = (_Bool)0;
signed char var_38 = (signed char)120;
unsigned short var_39 = (unsigned short)54240;
signed char var_40 = (signed char)-90;
long long int var_41 = -6490389084522306970LL;
_Bool var_42 = (_Bool)0;
unsigned char var_43 = (unsigned char)149;
unsigned int var_44 = 2924549615U;
_Bool var_45 = (_Bool)0;
unsigned int var_46 = 3288342030U;
unsigned short var_47 = (unsigned short)12551;
int var_48 = 665811936;
unsigned long long int var_49 = 9792708321632357344ULL;
unsigned long long int var_50 = 3482040812414236365ULL;
short var_51 = (short)32496;
signed char var_52 = (signed char)6;
unsigned short var_53 = (unsigned short)9863;
unsigned char var_54 = (unsigned char)170;
long long int var_55 = -4079956923365624078LL;
long long int var_56 = -5114745500114710605LL;
_Bool var_57 = (_Bool)0;
unsigned int var_58 = 2481844200U;
_Bool var_59 = (_Bool)1;
unsigned int var_60 = 4026806117U;
unsigned long long int var_61 = 3160781461702292866ULL;
unsigned char var_62 = (unsigned char)225;
_Bool var_63 = (_Bool)1;
signed char var_64 = (signed char)-117;
unsigned int var_65 = 4076134842U;
signed char var_66 = (signed char)62;
signed char var_67 = (signed char)-81;
unsigned short var_68 = (unsigned short)3084;
signed char var_69 = (signed char)-76;
unsigned char var_70 = (unsigned char)109;
_Bool var_71 = (_Bool)0;
signed char var_72 = (signed char)71;
signed char var_73 = (signed char)96;
int var_74 = -1314874937;
long long int var_75 = 4792806856676258318LL;
int var_76 = 1964413803;
unsigned int var_77 = 1913336745U;
int var_78 = 1521050041;
signed char var_79 = (signed char)22;
unsigned short var_80 = (unsigned short)31252;
int var_81 = 175511414;
_Bool var_82 = (_Bool)0;
_Bool var_83 = (_Bool)1;
unsigned int var_84 = 1823939038U;
unsigned short var_85 = (unsigned short)59110;
short arr_0 [12] ;
long long int arr_1 [12] ;
unsigned short arr_3 [12] [12] ;
signed char arr_4 [12] ;
unsigned int arr_5 [12] [12] [12] ;
long long int arr_6 [12] ;
signed char arr_8 [12] [12] [12] ;
unsigned short arr_9 [12] ;
int arr_11 [12] [12] [12] ;
_Bool arr_12 [12] [12] [12] [12] ;
int arr_16 [12] [12] [12] [12] ;
int arr_18 [12] [12] ;
long long int arr_19 [12] [12] [12] [12] [12] [12] [12] ;
long long int arr_20 [12] ;
unsigned long long int arr_25 [12] [12] ;
short arr_30 [12] ;
int arr_32 [12] [12] ;
int arr_33 [12] [12] [12] [12] [12] [12] [12] ;
unsigned long long int arr_34 [12] [12] [12] ;
unsigned int arr_35 [12] [12] [12] [12] [12] [12] [12] ;
_Bool arr_40 [12] ;
unsigned short arr_43 [12] ;
unsigned long long int arr_44 [12] ;
short arr_45 [12] [12] [12] ;
unsigned long long int arr_46 [12] [12] [12] [12] ;
signed char arr_53 [12] [12] [12] [12] [12] [12] [12] ;
short arr_57 [12] [12] [12] [12] ;
unsigned int arr_58 [12] [12] [12] [12] [12] ;
short arr_61 [12] [12] [12] [12] [12] ;
unsigned short arr_65 [12] [12] [12] [12] [12] [12] ;
long long int arr_66 [12] ;
short arr_67 [12] [12] [12] [12] [12] ;
unsigned int arr_70 [12] [12] [12] ;
int arr_71 [12] [12] [12] [12] [12] [12] [12] ;
_Bool arr_73 [12] [12] ;
unsigned int arr_76 [12] ;
unsigned short arr_88 [12] [12] ;
signed char arr_96 [19] ;
_Bool arr_97 [19] ;
signed char arr_99 [25] ;
int arr_100 [25] ;
signed char arr_101 [25] [25] ;
unsigned int arr_107 [17] ;
unsigned int arr_113 [25] ;
unsigned int arr_116 [25] ;
unsigned int arr_2 [12] ;
long long int arr_7 [12] [12] ;
signed char arr_10 [12] [12] [12] [12] ;
unsigned short arr_13 [12] [12] [12] [12] [12] ;
_Bool arr_14 [12] [12] [12] [12] ;
int arr_21 [12] [12] [12] ;
unsigned char arr_22 [12] [12] [12] [12] ;
int arr_23 [12] [12] ;
long long int arr_24 [12] [12] [12] ;
unsigned char arr_37 [12] [12] [12] ;
unsigned long long int arr_38 [12] [12] [12] [12] [12] ;
unsigned int arr_39 [12] [12] ;
unsigned char arr_50 [12] ;
int arr_51 [12] [12] [12] [12] [12] ;
unsigned short arr_52 [12] [12] [12] [12] [12] [12] [12] ;
int arr_55 [12] [12] [12] ;
unsigned int arr_56 [12] [12] [12] [12] [12] [12] ;
unsigned short arr_60 [12] [12] [12] [12] [12] ;
unsigned long long int arr_63 [12] [12] [12] [12] ;
_Bool arr_69 [12] ;
int arr_72 [12] [12] [12] [12] [12] ;
short arr_75 [12] [12] [12] [12] [12] ;
long long int arr_78 [12] [12] [12] [12] [12] [12] ;
int arr_79 [12] [12] [12] [12] ;
signed char arr_85 [12] [12] [12] ;
int arr_86 [12] [12] [12] ;
short arr_87 [12] [12] [12] ;
int arr_93 [12] [12] ;
signed char arr_94 [12] ;
long long int arr_95 [12] ;
_Bool arr_98 [19] [19] ;
long long int arr_102 [25] [25] ;
signed char arr_106 [10] [10] ;
signed char arr_118 [25] [25] [25] [25] ;
signed char arr_119 [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (short)-3516;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 4387503109893055255LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)18180;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (signed char)52;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 2325052756U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = 4464203450929333312LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (signed char)-77;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = (unsigned short)25696;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 659477806 : 1571037853;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = -1006338978;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_18 [i_0] [i_1] = (i_1 % 2 == 0) ? -1189004128 : 1906756633;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 12; ++i_6) 
                                arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = -2576252393679382245LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_20 [i_0] = 2956268711080895862LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_25 [i_0] [i_1] = 1945943153202556873ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_30 [i_0] = (short)3337;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_32 [i_0] [i_1] = -375309945;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 12; ++i_6) 
                                arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_4 % 2 == 0) ? -642713603 : 684036921;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = 18123965816543977852ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 12; ++i_6) 
                                arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_6 % 2 == 0) ? 3126933509U : 1014268079U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_40 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_43 [i_0] = (i_0 % 2 == 0) ? (unsigned short)45397 : (unsigned short)56263;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_44 [i_0] = 13376323372510334246ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_45 [i_0] [i_1] [i_2] = (short)31359;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_46 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 2068991620134597611ULL : 6108464362772366310ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 12; ++i_6) 
                                arr_53 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (signed char)-93;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_57 [i_0] [i_1] [i_2] [i_3] = (short)-5272;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_58 [i_0] [i_1] [i_2] [i_3] [i_4] = 484376275U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_61 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-23559;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_65 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? (unsigned short)45767 : (unsigned short)52406;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_66 [i_0] = -4287185585131746428LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_67 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)6556;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_70 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 3475510568U : 487617696U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 12; ++i_6) 
                                arr_71 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 366119221;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_73 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_76 [i_0] = 63124968U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_88 [i_0] [i_1] = (unsigned short)41558;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_96 [i_0] = (signed char)-3;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_97 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_99 [i_0] = (signed char)112;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_100 [i_0] = -524189647;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_101 [i_0] [i_1] = (signed char)125;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_107 [i_0] = 2945538335U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_113 [i_0] = 3795594907U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_116 [i_0] = 1480888858U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 803008807U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = 1976222622750263868LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (signed char)10 : (signed char)-78;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (unsigned short)12329 : (unsigned short)9979;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 805107309 : 1857289825;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned char)178 : (unsigned char)232;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_23 [i_0] [i_1] = (i_1 % 2 == 0) ? 199527981 : -761095564;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 6863781660867784557LL : 7493514675854738559LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_37 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)98 : (unsigned char)42;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_38 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? 17001613739129492865ULL : 10913980487364097972ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_39 [i_0] [i_1] = (i_0 % 2 == 0) ? 2060797653U : 129116307U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_50 [i_0] = (i_0 % 2 == 0) ? (unsigned char)111 : (unsigned char)92;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_51 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 263912592 : 939769657;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 12; ++i_6) 
                                arr_52 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_2 % 2 == 0) ? (unsigned short)27467 : (unsigned short)27709;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_55 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -524967698 : -1172870870;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_56 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? 2085108383U : 800149170U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_60 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (unsigned short)20581 : (unsigned short)35956;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_63 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 12916319832476134178ULL : 4967591088635110379ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_69 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_72 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? -1517687259 : 1088479411;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_75 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (short)15006 : (short)-23504;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_78 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? 3992376236981066136LL : 6406706265096475478LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_79 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 235422433 : 1802295447;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_85 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)19 : (signed char)90;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_86 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -1294082421 : 885633637;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_87 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)-31222 : (short)2455;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_93 [i_0] [i_1] = 2110713890;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_94 [i_0] = (signed char)62;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_95 [i_0] = 1231034187795057778LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_98 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_102 [i_0] [i_1] = 3592373431928937076LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_106 [i_0] [i_1] = (signed char)-4;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_118 [i_0] [i_1] [i_2] [i_3] = (signed char)105;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_119 [i_0] [i_1] [i_2] [i_3] = (signed char)-16;
}

void checksum() {
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
    hash(&seed, var_55);
    hash(&seed, var_56);
    hash(&seed, var_57);
    hash(&seed, var_58);
    hash(&seed, var_59);
    hash(&seed, var_60);
    hash(&seed, var_61);
    hash(&seed, var_62);
    hash(&seed, var_63);
    hash(&seed, var_64);
    hash(&seed, var_65);
    hash(&seed, var_66);
    hash(&seed, var_67);
    hash(&seed, var_68);
    hash(&seed, var_69);
    hash(&seed, var_70);
    hash(&seed, var_71);
    hash(&seed, var_72);
    hash(&seed, var_73);
    hash(&seed, var_74);
    hash(&seed, var_75);
    hash(&seed, var_76);
    hash(&seed, var_77);
    hash(&seed, var_78);
    hash(&seed, var_79);
    hash(&seed, var_80);
    hash(&seed, var_81);
    hash(&seed, var_82);
    hash(&seed, var_83);
    hash(&seed, var_84);
    hash(&seed, var_85);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_22 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_24 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_37 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        hash(&seed, arr_38 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_39 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_50 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        hash(&seed, arr_51 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 12; ++i_6) 
                                hash(&seed, arr_52 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_55 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            hash(&seed, arr_56 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        hash(&seed, arr_60 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_63 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_69 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        hash(&seed, arr_72 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        hash(&seed, arr_75 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            hash(&seed, arr_78 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_79 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_85 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_86 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_87 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_93 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_94 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_95 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_98 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_102 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_106 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    hash(&seed, arr_118 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    hash(&seed, arr_119 [i_0] [i_1] [i_2] [i_3] );
}
void test(short var_0, long long int var_1, long long int var_2, unsigned char var_3, _Bool var_4, unsigned char var_6, unsigned int var_7, unsigned int var_8, int var_9, unsigned int var_10, unsigned int var_11, long long int var_12, int zero, short arr_0 [12] , long long int arr_1 [12] , unsigned short arr_3 [12] [12] , signed char arr_4 [12] , unsigned int arr_5 [12] [12] [12] , long long int arr_6 [12] , signed char arr_8 [12] [12] [12] , unsigned short arr_9 [12] , int arr_11 [12] [12] [12] , _Bool arr_12 [12] [12] [12] [12] , int arr_16 [12] [12] [12] [12] , int arr_18 [12] [12] , long long int arr_19 [12] [12] [12] [12] [12] [12] [12] , long long int arr_20 [12] , unsigned long long int arr_25 [12] [12] , short arr_30 [12] , int arr_32 [12] [12] , int arr_33 [12] [12] [12] [12] [12] [12] [12] , unsigned long long int arr_34 [12] [12] [12] , unsigned int arr_35 [12] [12] [12] [12] [12] [12] [12] , _Bool arr_40 [12] , unsigned short arr_43 [12] , unsigned long long int arr_44 [12] , short arr_45 [12] [12] [12] , unsigned long long int arr_46 [12] [12] [12] [12] , signed char arr_53 [12] [12] [12] [12] [12] [12] [12] , short arr_57 [12] [12] [12] [12] , unsigned int arr_58 [12] [12] [12] [12] [12] , short arr_61 [12] [12] [12] [12] [12] , unsigned short arr_65 [12] [12] [12] [12] [12] [12] , long long int arr_66 [12] , short arr_67 [12] [12] [12] [12] [12] , unsigned int arr_70 [12] [12] [12] , int arr_71 [12] [12] [12] [12] [12] [12] [12] , _Bool arr_73 [12] [12] , unsigned int arr_76 [12] , unsigned short arr_88 [12] [12] , signed char arr_96 [19] , _Bool arr_97 [19] , signed char arr_99 [25] , int arr_100 [25] , signed char arr_101 [25] [25] , unsigned int arr_107 [17] , unsigned int arr_113 [25] , unsigned int arr_116 [25] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_6, var_7, var_8, var_9, var_10, var_11, var_12, zero, arr_0 , arr_1 , arr_3 , arr_4 , arr_5 , arr_6 , arr_8 , arr_9 , arr_11 , arr_12 , arr_16 , arr_18 , arr_19 , arr_20 , arr_25 , arr_30 , arr_32 , arr_33 , arr_34 , arr_35 , arr_40 , arr_43 , arr_44 , arr_45 , arr_46 , arr_53 , arr_57 , arr_58 , arr_61 , arr_65 , arr_66 , arr_67 , arr_70 , arr_71 , arr_73 , arr_76 , arr_88 , arr_96 , arr_97 , arr_99 , arr_100 , arr_101 , arr_107 , arr_113 , arr_116 );
    checksum();
    printf("%llu\n", seed);
}
