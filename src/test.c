#include <check.h>
#include <string.h>
#include "limits.h"
#include "s21_string.h"
// s21_sprintf

#define BUFF_SIZE 512

START_TEST(sprintf_001) {
char str[100];
char str1[100];
s21_sprintf(str, "%c", 'a');
sprintf(str1, "%c", 'a');
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_002) {
char str[100];
char str1[100];
s21_sprintf(str, "%-c", 'a');
sprintf(str1, "%-c", 'a');
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_003) {
char str[100];
char str1[100];
s21_sprintf(str, "%10c", 'a');
sprintf(str1, "%10c", 'a');
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_004) {
char str[100];
char str1[100];
s21_sprintf(str, "%-2c", 'a');
sprintf(str1, "%-2c", 'a');
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_005) {
char str[100];
char str1[100];
s21_sprintf(str, "%c", '\0');
sprintf(str1, "%c", '\0');
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_006) {
char str[100];
char str1[100];
s21_sprintf(str, "%-c", '\0');
sprintf(str1, "%-c", '\0');
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_007) {
char str[100];
char str1[100];
s21_sprintf(str, "%10c", '\0');
sprintf(str1, "%10c", '\0');
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_008) {
char str[100];
char str1[100];
s21_sprintf(str, "%-2c", '\0');
sprintf(str1, "%-2c", '\0');
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_009) {
char str[100];
char str1[100];
s21_sprintf(str, "%d", 0);
sprintf(str1, "%d", 0);
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_010) {
char str[100];
char str1[100];
s21_sprintf(str, "%.d", 0);
sprintf(str1, "%.d", 0);
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_011) {
char str[100];
char str1[100];
s21_sprintf(str, "%10.d", 0);
sprintf(str1, "%10.d", 0);
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_012) {
char str[100];
char str1[100];
s21_sprintf(str, "%10.2d", 0);
sprintf(str1, "%10.2d", 0);
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_013) {
char str[100];
char str1[100];
s21_sprintf(str, "%-10.2d", 0);
sprintf(str1, "%-10.2d", 0);
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_014) {
char str[100];
char str1[100];
s21_sprintf(str, "%-.2d", 0);
sprintf(str1, "%-.2d", 0);
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_015) {
char str[200];
char str1[200];
s21_sprintf(str, "%ld", 100000000000000000);
sprintf(str1, "%ld", 100000000000000000);
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_016) {
char str[100];
char str1[100];
short int x = 400;
s21_sprintf(str, "%hd", x);
sprintf(str1, "%hd", x);
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_017) {
char str[100];
char str1[100];
s21_sprintf(str, "%-5d", 0);
sprintf(str1, "%-5d", 0);
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_018) {
char str[100];
char str1[100];
s21_sprintf(str, "%5.d", 0);
sprintf(str1, "%5.d", 0);
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_019) {
char str[100];
char str1[100];
s21_sprintf(str, "%-d", 0);
sprintf(str1, "%-d", 0);
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_020) {
char str[100];
char str1[100];
s21_sprintf(str, "%+d", 0);
sprintf(str1, "%+d", 0);
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_021) {
char str[100];
char str1[100];
s21_sprintf(str, "%3.5d", 20);
sprintf(str1, "%3.5d", 20);
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_022) {
char str[100];
char str1[100];
s21_sprintf(str, "%3.5ld", -100000000000000000);
sprintf(str1, "%3.5ld", -100000000000000000);
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_023) {
char str[100];
char str1[100];
s21_sprintf(str, "% 3.7d", -666);
sprintf(str1, "% 3.7d", -666);
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_024) {
char str[100];
char str1[100];
s21_sprintf(str, "%d", -1);
sprintf(str1, "%d", -1);
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_025) {
char str[100];
char str1[100];
s21_sprintf(str, "%.d", -1);
sprintf(str1, "%.d", -1);
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_026) {
char str[100];
char str1[100];
s21_sprintf(str, "%10.d", -1);
sprintf(str1, "%10.d", -1);
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_027) {
char str[100];
char str1[100];
s21_sprintf(str, "%10.2d", -1);
sprintf(str1, "%10.2d", -1);
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_028) {
char str[100];
char str1[100];
s21_sprintf(str, "%-10.2d", -1);
sprintf(str1, "%-10.2d", -1);
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_029) {
char str[100];
char str1[100];
s21_sprintf(str, "%-.2d", -1);
sprintf(str1, "%-.2d", -1);
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_030) {
char str[200];
char str1[200];
s21_sprintf(str, "%ld", -1234852342345245);
sprintf(str1, "%ld", -1234852342345245);
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_031) {
char str[100];
char str1[100];
short int x = -400;
s21_sprintf(str, "%hd", x);
sprintf(str1, "%hd", x);
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_032) {
char str[100];
char str1[100];
s21_sprintf(str, "%-5d", -1);
sprintf(str1, "%-5d", -1);
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_033) {
char str[100];
char str1[100];
s21_sprintf(str, "%5d", -1);
sprintf(str1, "%5d", -1);
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_034) {
char str[100];
char str1[100];
s21_sprintf(str, "%-d", -1);
sprintf(str1, "%-d", -1);
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_035) {
char str[100];
char str1[100];
s21_sprintf(str, "%+d", -1);
sprintf(str1, "%+d", -1);
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_036) {
char str[100];
char str1[100];
unsigned int z = 0;
s21_sprintf(str, "%u", z);
sprintf(str1, "%u", z);
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_037) {
char str[100];
char str1[100];
s21_sprintf(str, "%.u", (unsigned)0);
sprintf(str1, "%.u", (unsigned)0);
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_038) {
char str[100];
char str1[100];
s21_sprintf(str, "%10.u", (unsigned)0);
sprintf(str1, "%10.u", (unsigned)0);
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_039) {
char str[100];
char str1[100];
s21_sprintf(str, "%10.2u", (unsigned)0);
sprintf(str1, "%10.2u", (unsigned)0);
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_040) {
char str[100];
char str1[100];
s21_sprintf(str, "%-10.2u", (unsigned)0);
sprintf(str1, "%-10.2u", (unsigned)0);
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_041) {
char str[100];
char str1[100];
s21_sprintf(str, "%-.2u", (unsigned)0);
sprintf(str1, "%-.2u", (unsigned)0);
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_042) {
char str[200];
char str1[200];
s21_sprintf(str, "%lu", (unsigned long)100000000000000000);
sprintf(str1, "%lu", (unsigned long)100000000000000000);
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_043) {
char str[100];
char str1[100];
unsigned short x = 400;
s21_sprintf(str, "%hu", x);
sprintf(str1, "%hu", x);
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_044) {
char str[100];
char str1[100];
s21_sprintf(str, "%-5u", (unsigned)0);
sprintf(str1, "%-5u", (unsigned)0);
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_045) {
char str[100];
char str1[100];
s21_sprintf(str, "%5u", (unsigned)0);
sprintf(str1, "%5u", (unsigned)0);
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_046) {
char str[100];
char str1[100];
s21_sprintf(str, "%-u", (unsigned)0);
sprintf(str1, "%-u", (unsigned)0);
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_047) {
char str[100];
char str1[100];
s21_sprintf(str, "%3.5u", (unsigned)20);
sprintf(str1, "%3.5u", (unsigned)20);
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_048) {
char str[100];
char str1[100];
s21_sprintf(str, "%3.5lu", (unsigned long)-100000000000000000);
sprintf(str1, "%3.5lu", (unsigned long)-100000000000000000);
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_049) {
char str[100];
char str1[100];
s21_sprintf(str, "%u", (unsigned)-1);
sprintf(str1, "%u", (unsigned)-1);
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_050) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%.u", (unsigned)-1),
sprintf(str1, "%.u", (unsigned)-1));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_051) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%10.u", (unsigned)-1),
sprintf(str1, "%10.u", (unsigned)-1));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_052) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%10.2u", (unsigned)-1),
sprintf(str1, "%10.2u", (unsigned)-1));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_053) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%-10.2u", (unsigned)-1),
sprintf(str1, "%-10.2u", (unsigned)-1));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_054) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%-.2u", (unsigned)-1),
sprintf(str1, "%-.2u", (unsigned)-1));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_055) {
char str[200];
char str1[200];
ck_assert_int_eq(s21_sprintf(str, "%lu", (unsigned long)-12348523423452),
sprintf(str1, "%lu", (unsigned long)-12348523423452));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_056) {
char str[100];
char str1[100];
unsigned short x = -400;
ck_assert_int_eq(s21_sprintf(str, "%hu", x),
sprintf(str1, "%hu", x));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_057) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%-5u", (unsigned)-1),
sprintf(str1, "%-5u", (unsigned)-1));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_058) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%5u", (unsigned)-1),
sprintf(str1, "%5u", (unsigned)-1));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_059) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%-u", (unsigned)-1),
sprintf(str1, "%-u", (unsigned)-1));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_060) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%i", 0),
sprintf(str1, "%i", 0));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_061) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%.i", 0),
sprintf(str1, "%.i", 0));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_062) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%10.i", 0),
sprintf(str1, "%10.i", 0));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_063) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%10.2i", 0),
sprintf(str1, "%10.2i", 0));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_064) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%-10.2i", 0),
sprintf(str1, "%-10.2i", 0));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_065) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%-.2i", 0),
sprintf(str1, "%-.2i", 0));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_066) {
char str[200];
char str1[200];
ck_assert_int_eq(s21_sprintf(str, "%li", 100000000000000000),
sprintf(str1, "%li", 100000000000000000));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_067) {
char str[100];
char str1[100];
short int x = 400;
ck_assert_int_eq(s21_sprintf(str, "%hi", x),
sprintf(str1, "%hi", x));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_068) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%-5i", 0),
sprintf(str1, "%-5i", 0));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_069) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%5i", 0),
sprintf(str1, "%5i", 0));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_070) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%-i", 0),
sprintf(str1, "%-i", 0));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_071) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%+i", 0),
sprintf(str1, "%+i", 0));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_072) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%3.5i", 20),
sprintf(str1, "%3.5i", 20));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_073) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%3.5li", -100000000000000000),
sprintf(str1, "%3.5li", -100000000000000000));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_074) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "% 3.7i", -666),
sprintf(str1, "% 3.7i", -666));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_075) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%i", -1),
sprintf(str1, "%i", -1));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_076) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%.i", -1),
sprintf(str1, "%.i", -1));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_077) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%10.i", -1),
sprintf(str1, "%10.i", -1));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_078) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%10.2i", -1),
sprintf(str1, "%10.2i", -1));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_079) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%-10.2i", -1),
sprintf(str1, "%-10.2i", -1));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_080) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%-.2i", -1),
sprintf(str1, "%-.2i", -1));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_081) {
char str[200];
char str1[200];
ck_assert_int_eq(s21_sprintf(str, "%li", -1234852342345245),
sprintf(str1, "%li", -1234852342345245));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_082) {
char str[100];
char str1[100];
short int x = -400;
ck_assert_int_eq(s21_sprintf(str, "%hi", x),
sprintf(str1, "%hi", x));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_083) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%-5i", -1),
sprintf(str1, "%-5i", -1));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_084) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%5i", -1),
sprintf(str1, "%5i", -1));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_085) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%-i", -1),
sprintf(str1, "%-i", -1));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_086) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%+i", -1),
sprintf(str1, "%+i", -1));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_087) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%f", 1337.228),
sprintf(str1, "%f", 1337.228));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_088) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%10f", 1337.228),
sprintf(str1, "%10f", 1337.228));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_089) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%10.2f", 1337.228),
sprintf(str1, "%10.2f", 1337.228));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_090) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%10.12f", 1337.228),
sprintf(str1, "%10.12f", 1337.228));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_091) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%-1.12f", 1337.228),
sprintf(str1, "%-1.12f", 1337.228));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_092) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%.12f", 1337.228),
sprintf(str1, "%.12f", 1337.228));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_093) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "% 12f", 1337.228),
sprintf(str1, "% 12f", 1337.228));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_094) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%+12f", 1337.228),
sprintf(str1, "%+12f", 1337.228));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_095) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%.0f", 1337.228),
sprintf(str1, "%.0f", 1337.228));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_096) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%.5f", 1337.228),
sprintf(str1, "%.5f", 1337.228));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_097) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%3.5f", 1337.228),
sprintf(str1, "%3.5f", 1337.228));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_098) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%30.12f", 1337.228),
sprintf(str1, "%30.12f", 1337.228));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_099) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%-30.12f", 1337.228),
sprintf(str1, "%-30.12f", 1337.228));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_100) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "% 02.12f", 1337.228),
sprintf(str1, "% 02.12f", 1337.228));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_101) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%f", -1337.228), sprintf(str1, "%f", -1337.228));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_102) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%10f", -1337.228), sprintf(str1, "%10f", -1337.228));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_103) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%10.2f", -1337.228), sprintf(str1, "%10.2f", -1337.228));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_104) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%10.12f", -1337.228), sprintf(str1, "%10.12f", -1337.228));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_105) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%-1.12f", -1337.228), sprintf(str1, "%-1.12f", -1337.228));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_106) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%.12f", -1337.228), sprintf(str1, "%.12f", -1337.228));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_107) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "% 20f", -1337.228), sprintf(str1, "% 20f", -1337.228));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_108) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%+20f", -1337.228), sprintf(str1, "%+20f", -1337.228));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_109) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%.0f", -1337.228), sprintf(str1, "%.0f", -1337.228));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_110) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%.5f", -1337.228), sprintf(str1, "%.5f", -1337.228));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_111) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%3.5f", -1337.228), sprintf(str1, "%3.5f", -1337.228));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_112) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%30.12f", -1337.228), sprintf(str1, "%30.12f", -1337.228));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_113) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%-30.12f", -1337.228), sprintf(str1, "%-30.12f", -1337.228));
ck_assert_str_eq(str, str1);
} END_TEST


START_TEST(sprintf_114) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "% 02.12f", -1337.228), sprintf(str1, "% 02.12f", -1337.228));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_115) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%s", "ABOBA"), sprintf(str1, "%s", "ABOBA"));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_116) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%-s", "ABOBA"), sprintf(str1, "%-s", "ABOBA"));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_117) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%20s", "ABOBA"), sprintf(str1, "%20s", "ABOBA"));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_118) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%20s", "123456789"), sprintf(str1, "%20s", "123456789"));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_119) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%3s", "A B O B A"), sprintf(str1, "%3s", "A B O B A"));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_120) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%-3s", "A B O B A"), sprintf(str1, "%-3s", "A B O B A"));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_121) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%.5s", "A B O B A"), sprintf(str1, "%.5s", "A B O B A"));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_122) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%.25s", "A B O B A"), sprintf(str1, "%.25s", "A B O B A"));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_123) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%.s", "A B O B A"), sprintf(str1, "%.s", "A B O B A"));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_124) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%-.5s", "SampleText"), sprintf(str1, "%-.5s", "SampleText"));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_125) {
char str[100];
char str1[100];
s21_sprintf(str, "%5.10s", "SampleText");
sprintf(str1, "%5.10s", "SampleText");
ck_assert_int_eq(s21_sprintf(str, "%5.10s", "SampleText"), sprintf(str1, "%5.10s", "SampleText"));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_126) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%5.1s", "SampleText"), sprintf(str1, "%5.1s", "SampleText"));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_127) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%-5.1s", "SampleText"), sprintf(str1, "%-5.1s", "SampleText"));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_128) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%-5.0s", "SampleText"), sprintf(str1, "%-5.0s", "SampleText"));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_129) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%s", "\0\0\0\0\0\0"), sprintf(str1, "%s", "\0\0\0\0\0\0"));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_130) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%-s", "\0\0\0\0\0\0"), sprintf(str1, "%-s", "\0\0\0\0\0\0"));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_131) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%20s", "\0\0\0\0\0\0"), sprintf(str1, "%20s", "\0\0\0\0\0\0"));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_132) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%20s", "\0\0\0\0\0\0"), sprintf(str1, "%20s", "\0\0\0\0\0\0"));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_133) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%3s", "\0\0\0\0\0\0"), sprintf(str1, "%3s", "\0\0\0\0\0\0"));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_134) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%-3s", "\0\0\0\0\0\0"), sprintf(str1, "%-3s", "\0\0\0\0\0\0"));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_135) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%.5s", "\0\0\0\0\0\0"), sprintf(str1, "%.5s", "\0\0\0\0\0\0"));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_136) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%.25s", "\0\0\0\0\0\0"), sprintf(str1, "%.25s", "\0\0\0\0\0\0"));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_137) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%.s", "\0\0\0\0\0\0"), sprintf(str1, "%.s", "\0\0\0\0\0\0"));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_138) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%-.5s", "\0\0\0\0\0\0\0"), sprintf(str1, "%-.5s", "\0\0\0\0\0\0\0"));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_139) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%5.10s", "\0\0\0\0\0\0\0"), sprintf(str1, "%5.10s", "\0\0\0\0\0\0\0"));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_140) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%5.1s", "\0\0\0\0\0\0\0"), sprintf(str1, "%5.1s", "\0\0\0\0\0\0\0"));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_141) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%-5.1s", "\0\0\0\0\0\0\0"), sprintf(str1, "%-5.1s", "\0\0\0\0\0\0\0"));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_142) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%-5.0s", "\0\0\0\0\0\0\0"), sprintf(str1, "%-5.0s", "\0\0\0\0\0\0\0"));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_143) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%s", ""), sprintf(str1, "%s", ""));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_144) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%-s", ""), sprintf(str1, "%-s", ""));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_145) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%20s", ""), sprintf(str1, "%20s", ""));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_146) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%20s", ""), sprintf(str1, "%20s", ""));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_147) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%3s", ""), sprintf(str1, "%3s", ""));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_148) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%-3s", ""), sprintf(str1, "%-3s", ""));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_149) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%.5s", ""), sprintf(str1, "%.5s", ""));
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_150) {
char str[100];
char str1[100];
ck_assert_int_eq(s21_sprintf(str, "%.25s", ""), sprintf(str1, "%.25s", ""));
ck_assert_str_eq(str, str1);
} END_TEST
START_TEST(sprintf_151) {
char str[100];
char str1[100];
s21_sprintf(str, "%.s", "");
sprintf(str1, "%.s", "");
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_152) {
char str[100];
char str1[100];
s21_sprintf(str, "%-.5s", "");
sprintf(str1, "%-.5s", "");
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_153) {
char str[100];
char str1[100];
s21_sprintf(str, "%5.10s", "");
sprintf(str1, "%5.10s", "");
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_154) {
char str[100];
char str1[100];
s21_sprintf(str, "%5.1s", "");
sprintf(str1, "%5.1s", "");
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_155) {
char str[100];
char str1[100];
s21_sprintf(str, "%-5.1s", "");
sprintf(str1, "%-5.1s", "");
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_156) {
char str[100];
char str1[100];
s21_sprintf(str, "%-5.0s", "");
sprintf(str1, "%-5.0s", "");
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_157) {
char str[100];
char str1[100];
s21_sprintf(str, "%%");
sprintf(str1, "%%");
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_158) {
char str[100];
char str1[100];
s21_sprintf(str, "%%");
sprintf(str1, "%%");
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_159) {
char str[100];
char str1[100];
s21_sprintf(str, "%%%+.d%.1u%+.i%+.f%.4s", 21, (unsigned)-42, 0xF1AC, -2313.1313, "it will go");
sprintf(str1, "%%%+.d%.1u%+.i%+.f%.4s", 21, (unsigned)-42, 0xF1AC, -2313.1313, "it will go");
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_160) {
char str[100];
char str1[100];
    for (int i = -101; i <= 101;) {
        s21_sprintf(str1, "% -i % -d % -5d", i, i + 1, 143646235);
        sprintf(str, "% -i % -d % -5d", i, i + 1, 143646235);
        i += 7;
        ck_assert_str_eq(str, str1);
    }
} END_TEST

START_TEST(sprintf_161) {
char str[100];
char str1[100];
s21_sprintf(str, "%.f", 56.7);
sprintf(str1, "%.f", 56.7);
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_162) {
char str[100];
char str1[100];
s21_sprintf(str, "%.f", 56.2);
sprintf(str1, "%.f", 56.2);
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_163) {
char str[100];
char str1[100];
s21_sprintf(str, "%.f", 5634.9);
sprintf(str1, "%.f", 5634.9);
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_165) {
char data[1000];
char data1[1000];
wchar_t buf[100] = L"hello";
s21_sprintf(data, "%ls", buf);
sprintf(data1, "%ls", buf);
ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(sprintf_166) {
char str[100];
char str1[100];
s21_sprintf(str, "%f", 1337.228);
sprintf(str1, "%f", 1337.228);
ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_167) {
char data[1000];
char data1[1000];
wchar_t buf[100] = L"hello";
s21_sprintf(data, "%-ls", buf);
sprintf(data1, "%-ls", buf);
ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(sprintf_168) {
char data[1000];
char data1[1000];
wchar_t buf[100] = L"hello";
s21_sprintf(data, "%-.5ls", buf);
sprintf(data1, "%-.5ls", buf);
ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(sprintf_169) {
char data[1000];
char data1[1000];
wchar_t buf[100] = L"helloooooooooooooooooo";
s21_sprintf(data, "%-.8ls", buf);
sprintf(data1, "%-.8ls", buf);
ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(sprintf_170) {
    char str1[512];
    char str2[512];
    char *format = "This is a simple value %d";
    int val = 69;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_171) {
    char str1[512];
    char str2[512];
    char *format = "%.5i";
    int val = 69;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_361) {
    char str1[512];
    char str2[512];
    char *format = "%5d";
    int val = 69;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_172) {
    char str1[512];
    char str2[512];
    char *format = "%-5i";
    int val = 69;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_173) {
    char str1[512];
    char str2[512];
    char *format = "%+12d";
    int val = 69;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_174) {
    char str1[512];
    char str2[512];
    char *format = "%+5.31li";
    long int val = 698518581899;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
} END_TEST

START_TEST(sprintf_175) {
    char str1[512];
    char str2[512];
    char *format = "%-16.9hi";
    short int val = 6958;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_176) {
    char str1[512];
    char str2[512];
    char *format = "%.0d";
    int val = 0;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_177) {
    char str1[512];
    char str2[512];
    char *format = "% d";
    int val = 0;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_178) {
    char str1[512];
    char str2[512];
    char *format = "%u";
    unsigned int val = 14140;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_179) {
    char str1[512];
    char str2[512];
    char *format = "%15u";
    unsigned int val = 14140;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_180) {
    char str1[512];
    char str2[512];
    char *format = "%-16u";
    unsigned int val = 14140;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_181) {
    char str1[512];
    char str2[512];
    char *format = "%.51u";
    unsigned int val = 14140;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_182) {
    char str1[512];
    char str2[512];
    char *format = "% 5.51u";
    unsigned int val = 14140;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_183) {
    char str1[512];
    char str2[512];
    char *format = "%hu";
    unsigned short int val = 14140;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_184) {
    char str1[512];
    char str2[512];
    char *format = "%lu";
    unsigned long int val = 949149114140;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_185) {
    char str1[512];
    char str2[512];
    char *format = "%lu, %u, %hu, %.5u, %5.u";
    unsigned long int val = 949149114140;
    ck_assert_int_eq(s21_sprintf(str1, format, val, 14, 1441, 14414, 9681),
    sprintf(str2, format, val, (unsigned)14,
                             (unsigned short)1441, (unsigned)14414,
                             (unsigned)9681));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_186) {
    char str1[512];
    char str2[512];
    char *format = "%hd";
    short int val = 14140;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
    ck_assert_str_eq(str1, str2);
} END_TEST


START_TEST(sprintf_187) {
    char str1[512];
    char str2[512];
    char *format = "%u";
    ck_assert_int_eq(s21_sprintf(str1, format, 0), sprintf(str2, format, (unsigned)0));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_188) {
    char str1[512];
    char str2[512];
    char *format = "%c";
    char val = 'X';
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_189) {
    char str1[512];
    char str2[512];
    char *format = "%.5c";
    char val = 'c';
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_190) {
    char str1[512];
    char str2[512];
    char *format = "% -5c";
    char val = 'c';
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_191) {
    char str1[512];
    char str2[512];
    char *format = "%15c";
    char val = 'c';
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_192) {
    char str1[512];
    char str2[512];
    char *format = "%-5.3c%c%c%c%c Hello! ABOBA";
    char val = 'c';
    ck_assert_int_eq(s21_sprintf(str1, format, val, 'c', 'a', 'b', 'b'),
    sprintf(str2, format, val, 'c', 'a', 'b', 'b'));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_193) {
    char str1[512];
    char str2[512];
    char *format = "%-5.3c";
    char val = 'c';
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_194) {
    char str1[512];
    char str2[512];
    char *format = "%s";
    char *val = "I LOVE STRINGS AND TESTS AND SCHOOL21 NO JOKE";
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_195) {
    char str1[512];
    char str2[512];
    char *format = "%.15s";
    char *val = "I LOVE STRINGS AND TESTS AND SCHOOL21 NO JOKE";
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_196) {
    char str1[512];
    char str2[512];
    char *format = "%15s";
    char *val = "69 IS MY FAVORITE NUMBER";
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_197) {
    char str1[512];
    char str2[512];
    char *format = "%-15.9s";
    char *val = "69 IS MY FAVORITE NUMBER";
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_198) {
    char str1[512];
    char str2[512];
    char *format = "%s";
    char *val =
        "69 IS MY FAVORITE NUMBER THIS IS SUPPOSED TO BE A VERY LONG STRING";
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_199) {
    char str1[512];
    char str2[512];
    char *format = "%s%s%s%s";
    char *val =
        "69 IS MY FAVORITE NUMBER THIS IS SUPPOSED TO BE A VERY LONG STRING";
    char *s1 = "";
    char *s2 = "87418347813748913749871389480913";
    char *s3 = "HAHAABOBASUCKER";
    ck_assert_int_eq(s21_sprintf(str1, format, val, s1, s2, s3), sprintf(str2, format, val, s1, s2, s3));
    ck_assert_str_eq(str1, str2);
} END_TEST


START_TEST(sprintf_200) {
    char str1[512];
    char str2[512];
    char *val = "kjafdiuhfjahfjdahf";
    char *format = "%120s";
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_201) {
    char str1[512];
    char str2[512];
    char *format = "% f";
    float val = 0;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_202) {
    char str1[512];
    char str2[512];
    ck_assert_int_eq(s21_sprintf(str1, "abc"), sprintf(str2, "abc"));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_203) {
    char str1[512];
    char str2[512];
    ck_assert_int_eq(s21_sprintf(str1, "abc"), sprintf(str2, "abc"));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_204) {
    char str1[512];
    char str2[512];
    ck_assert_int_eq(s21_sprintf(str1, "%c", '\t'), sprintf(str2, "%c", '\t'));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_205) {
    char str1[512];
    char str2[512];
    ck_assert_int_eq(s21_sprintf(str1, "%c%c%c%c%c", '\t', '\n', '0', 'S', 's'),
    sprintf(str2, "%c%c%c%c%c", '\t', '\n', '0', 'S', 's'));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_206) {
    char str1[512];
    char str2[512];
    ck_assert_int_eq(s21_sprintf(str1, "%s", "Drop Sega PLS"), sprintf(str2, "%s", "Drop Sega PLS"));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_207) {
    char str1[512];
    char str2[512];
    ck_assert_int_eq(
        s21_sprintf(str1, "%s%s%s%s%s", "Drop", " ", "Sega", " ", "PLS"),
        sprintf(str2, "%s%s%s%s%s", "Drop", " ", "Sega", " ", "PLS"));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_208) {
    char str1[512];
    char str2[512];
    ck_assert_int_eq(s21_sprintf(str1, "%d", 666), sprintf(str2, "%d", 666));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_209) {
    char str1[512];
    char str2[512];
    ck_assert_int_eq(s21_sprintf(str1, "%d%d%d%d", -999, 0, 666, -100),
    sprintf(str2, "%d%d%d%d", -999, 0, 666, -100));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_210) {
    char str1[512];
    char str2[512];
    ck_assert_int_eq(s21_sprintf(str1, "%i", -0), sprintf(str2, "%i", -0));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_211) {
    char str1[512];
    char str2[512];
    ck_assert_int_eq(s21_sprintf(str1, "%i%i%i%i", -999, 0, 666, -100),
    sprintf(str2, "%i%i%i%i", -999, 0, 666, -100));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_212) {
    char str1[512];
    char str2[512];
    ck_assert_int_eq(s21_sprintf(str1, "%f", 0.0001), sprintf(str2, "%f", 0.0001));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_213) {
    char str1[512];
    char str2[512];
    ck_assert_int_eq(
        s21_sprintf(str1, "%f%f%f%f", -999.666, 0.0001, 666.999, -100.001),
        sprintf(str2, "%f%f%f%f", -999.666, 0.0001, 666.999, -100.001));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_214) {
    char str1[512];
    char str2[512];
    ck_assert_int_eq(s21_sprintf(str1, "%u", 100), sprintf(str2, "%u", (unsigned)100));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_215) {
    char str1[512];
    char str2[512];
    ck_assert_int_eq(s21_sprintf(str1, "%u%u%u%u", 999, 0, 666, 100),
    sprintf(str2, "%u%u%u%u", (unsigned)999, (unsigned)0,
                             (unsigned)666, (unsigned)100));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_216) {
    char str1[512];
    char str2[512];
    ck_assert_int_eq(s21_sprintf(str1, "%8c", '\t'), sprintf(str2, "%8c", '\t'));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_217) {
    char str1[512];
    char str2[512];
    ck_assert_int_eq(s21_sprintf(str1, "%-8c", '\t'), sprintf(str2, "%-8c", '\t'));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_218) {
    char str1[512];
    char str2[512];
    ck_assert_int_eq(
        s21_sprintf(str1, "%3c%-11c%10c%-2c%c", '\t', '\n', '0', 'S', 's'),
        sprintf(str2, "%3c%-11c%10c%-2c%c", '\t', '\n', '0', 'S', 's'));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_219) {
    char str1[512];
    char str2[512];
    char format[] = "%10ld";
    ck_assert_int_eq(s21_sprintf(str1, format, 1), sprintf(str2, format, 1));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_220) {
    char str1[512];
    char str2[512];
    char format[] = "%1.1f";
    ck_assert_int_eq(s21_sprintf(str1, format, 1.1), sprintf(str2, format, 1.1));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_221) {
    char str1[512];
    char str2[512];
    char format[] = "%8.3c";
    ck_assert_int_eq(s21_sprintf(str1, format, 'a'), sprintf(str2, format, 'a'));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_222) {
    char str1[512];
    char str2[512];
    char format[] = "%+5.5d aboba";
    int val = 10000;
    int a = s21_sprintf(str1, format, val);
    int b = sprintf(str2, format, val);
    ck_assert_int_eq(a, b);
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_223) {
    char str1[512];
    char str2[512];
    char format[] = "%7.7f";
    ck_assert_int_eq(s21_sprintf(str1, format, 11.123456), sprintf(str2, format, 11.123456));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_224) {
    char str1[512];
    char str2[512];
    char format[] = "%7.4s";
    ck_assert_int_eq(s21_sprintf(str1, format, "aboba floppa"), sprintf(str2, format, "aboba floppa"));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_225) {
    char str1[512];
    char str2[512];
    char format[] = "%6.6u";
    ck_assert_int_eq(s21_sprintf(str1, format, 12341151), sprintf(str2, format, 12341151));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_226) {
    char str1[512];
    char str2[512];
    char format[] = "%li%ld%lu";
    ck_assert_int_eq(s21_sprintf(str1, format, 666666666666, 777, 111),
    sprintf(str2, format, 666666666666, 777, 111));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_227) {
    char str1[512];
    char str2[512];
    char format[] = "%hi%hd%hu";
    ck_assert_int_eq(s21_sprintf(str1, format, 666, -777, 111), sprintf(str2, format, 666, -777, 111));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_228) {
    char str1[512];
    char str2[512];
    char format[] = "%+li%+lu%+d%+lf";
    ck_assert_int_eq(s21_sprintf(str1, format, -123, 321, -5555, -1213.123),
    sprintf(str2, format, -123, 321, -5555, -1213.123));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_229) {
    char str1[512];
    char str2[512];
    char format[] = "%-11.11li%-35.5lu%-3.5ld";
    ck_assert_int_eq(
        s21_sprintf(str1, format, 66666666666, 5555555555, 44444444444),
        sprintf(str2, format, 66666666666, 5555555555, 44444444444));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_230) {
    char str1[512];
    char str2[512];
    char format[] = "% c";
    ck_assert_int_eq(s21_sprintf(str1, format, 'a'), sprintf(str2, format, 'a'));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_231) {
    char str1[512];
    char str2[512];
    char format[] = "% s";
    ck_assert_int_eq(s21_sprintf(str1, format, "aboba likes floppa"),
    sprintf(str2, format, "aboba likes floppa"));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_232) {
    char str1[512];
    char str2[512];
    char format[] = "% s% c";
    ck_assert_int_eq(s21_sprintf(str1, format, "", 'f'), sprintf(str2, format, "", 'f'));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_233) {
    char str1[512];
    char str2[512];
    char format[] = "%210s";
    ck_assert_int_eq(s21_sprintf(str1, format, "AHHAHAHA\0AHHAHAHAH"),
    sprintf(str2, format, "AHHAHAHA\0AHHAHAHAH"));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_234) {
    char str1[512];
    char str2[512];
    char format[] = "%-115s";
    ck_assert_int_eq(s21_sprintf(str1, format, "Nick her"), sprintf(str2, format, "Nick her"));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_235) {
    char str1[512];
    char str2[512];
    char format[] = "%+2.1c%+4.2d%+5.4i%+10.2f%+55.55s%+1.1u";
    ck_assert_int_eq(
        s21_sprintf(str1, format, 'f', 21, 42, 666.666,
                    "Lorem ipsum dolor sit amet. Aut quam ducimus.", 11),
        sprintf(str2, format, 'f', 21, 42, 666.666,
                "Lorem ipsum dolor sit amet. Aut quam ducimus.", 11));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_236) {
    char str1[512];
    char str2[512];
    char format[] = "%.f";
    ck_assert_int_eq(s21_sprintf(str1, format, 121.123), sprintf(str2, format, 121.123));
    ck_assert_str_eq(str1, str2);
} END_TEST

// START_TEST(sprintf_237) {
//     char str1[512];
//     char str2[512];
//     char format[] = "%%";
//     ck_assert_int_eq(s21_sprintf(str1, format), sprintf(str2, format));
//     ck_assert_str_eq(str1, str2);
// } END_TEST

// START_TEST(sprintf_238) {
//     char str1[512];
//     char str2[512];
//     char format[] = "%%%%%%%%";
//     ck_assert_int_eq(s21_sprintf(str1, format), sprintf(str2, format));
//     ck_assert_str_eq(str1, str2);
// } END_TEST


START_TEST(sprintf_239) {
    char str1[512];
    char str2[512];
    char format[] = "%-.f";
    ck_assert_int_eq(s21_sprintf(str1, format, 111.111), sprintf(str2, format, 111.111));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_240) {
    char str1[512];
    char str2[512];
    char format[] = "%-.1d";

    ck_assert_int_eq(s21_sprintf(str1, format, 111), sprintf(str2, format, 111));

    ck_assert_str_eq(str1, str2);
} END_TEST


START_TEST(sprintf_241) {
    char str1[512];
    char str2[512];
    char *format = "This is a simple wide char %lc";
    unsigned long w = L'汉';
    int a = s21_sprintf(str1, format, w);
    int b = sprintf(str2, format, w);
    ck_assert_str_eq(str1, str2);
    ck_assert_int_eq(a, b);
}

START_TEST(sprintf_242) {
    char str1[512];
    char str2[512];
    char *format = "This is a simple wide char %5c";
    char w = 'c';
    int a = s21_sprintf(str1, format, w);
    int b = sprintf(str2, format, w);
    ck_assert_str_eq(str1, str2);
    ck_assert_int_eq(a, b);
}

START_TEST(sprintf_243) {
    char str1[512];
    char str2[512];

    char *format = "This is a simple wide char %-5lc";
    unsigned long w = L'森';
    int a = s21_sprintf(str1, format, w);
    int b = sprintf(str2, format, w);
    ck_assert_str_eq(str1, str2);
    ck_assert_int_eq(a, b);
} END_TEST

START_TEST(sprintf_244) {
    char str1[512];
    char str2[512];

    char *format = "This is a simple wide char %ls";
    wchar_t w[] = L"森我爱菠萝";
    int a = s21_sprintf(str1, format, w);
    int b = sprintf(str2, format, w);
    ck_assert_str_eq(str1, str2);
    ck_assert_int_eq(a, b);
} END_TEST

START_TEST(sprintf_245) {
    char str1[512];
    char str2[512];

    char *format = "This is a simple wide char %5.12ls";
    wchar_t w[] = L"森我爱菠萝";
    int a = s21_sprintf(str1, format, w);
    int b = sprintf(str2, format, w);
    ck_assert_str_eq(str1, str2);
    ck_assert_int_eq(a, b);
} END_TEST

START_TEST(sprintf_246) {
    char str1[512];
    char str2[512];

    char *format = "This is a simple wide char %120ls ABOBA";
    wchar_t w[] = L"森我爱菠萝";
    int a = s21_sprintf(str1, format, w);
    int b = sprintf(str2, format, w);
    ck_assert_str_eq(str1, str2);
    ck_assert_int_eq(a, b);
} END_TEST

START_TEST(sprintf_247) {
    char str1[512];
    char str2[512];

    char *format = "This is a simple wide char %-43ls";
    wchar_t w[] = L"森我爱菠萝";
    int a = s21_sprintf(str1, format, w);
    int b = sprintf(str2, format, w);
    ck_assert_str_eq(str1, str2);
    ck_assert_int_eq(a, b);
} END_TEST

START_TEST(sprintf_248) {
    char str1[512];
    char str2[512];
    char *format = "This is a simple wide char %43ls";
    wchar_t w[] = L"森我爱菠萝";
    int a = s21_sprintf(str1, format, w);
    int b = sprintf(str2, format, w);
    ck_assert_str_eq(str1, str2);
    ck_assert_int_eq(a, b);
} END_TEST

START_TEST(sprintf_249) {
    char str1[512];
    char str2[512];
    char *format = "This is a simple wide char %43lc";
    unsigned long w = L'森';
    int a = s21_sprintf(str1, format, w);
    int b = sprintf(str2, format, w);
    ck_assert_int_eq(a, b);
    ck_assert_str_eq(str1, str2);
} END_TEST


START_TEST(sprintf_250) {
    char str[100];
    char str2[100];

    ck_assert_int_eq(
        s21_sprintf(str, "Hello %s", "tendyrir"), sprintf(str2, "Hello %s", "tendyrir"));
    ck_assert_int_eq(
        s21_sprintf(str, "Hello %-s", "tendyrir"), sprintf(str2, "Hello %-s", "tendyrir"));
    ck_assert_int_eq(
        s21_sprintf(str, "Hello %-20s", "tendyrir"), sprintf(str2, "Hello %-20s", "tendyrir"));
    ck_assert_int_eq(
        s21_sprintf(str, "Hello %-20.s", "tendyrir"), sprintf(str2, "Hello %-20.s", "tendyrir"));
    ck_assert_int_eq(
        s21_sprintf(str, "Hello %-.s", "tendyrir"), sprintf(str2, "Hello %-.s", "tendyrir"));
    ck_assert_int_eq(
        s21_sprintf(str, "Hello %.s", "tendyrir"), sprintf(str2, "Hello %.s", "tendyrir"));
    ck_assert_int_eq(
        s21_sprintf(str, "Hello %-10.20s", "tendyrir"), sprintf(str2, "Hello %-10.20s", "tendyrir"));
    ck_assert_int_eq(
        s21_sprintf(str, "Hello %-.20s", "tendyrir"), sprintf(str2, "Hello %-.20s", "tendyrir"));
    ck_assert_int_eq(
        s21_sprintf(str, "Hello %21.20s", "tendyrir"), sprintf(str2, "Hello %21.20s", "tendyrir"));
    ck_assert_int_eq(
        s21_sprintf(str, "Hello %21.20s and %-2.4s", "tendyrir", "school"),
         sprintf(str2, "Hello %21.20s and %-2.4s", "tendyrir", "school"));
} END_TEST

START_TEST(sprintf_252) {
    char str[100];
    char str2[100];

    ck_assert_int_eq(
        s21_sprintf(str, "2 + 2 = %d ! = %d", +4, -1),
         sprintf(str2, "2 + 2 = %d ! = %d", +4, -1));
    ck_assert_int_eq(
        s21_sprintf(str, "2 + 2 = %-d ! = %+d", 4, 10),
         sprintf(str2, "2 + 2 = %-d ! = %+d", 4, 10));
    ck_assert_int_eq(
        s21_sprintf(str, "2 + 2 = % -d ! = %+-d", +4, 10),
         sprintf(str2, "2 + 2 = % -d ! = %+-d", +4, 10));
    ck_assert_int_eq(
        s21_sprintf(str, "2 + 2 = % 10d ! = %+-20d", -4, 10),
         sprintf(str2, "2 + 2 = % 10d ! = %+-20d", -4, 10));
    ck_assert_int_eq(
        s21_sprintf(str, "2 + 2 = % 10.d ! = %+-20.20d", 0, -182),
         sprintf(str2, "2 + 2 = % 10.d ! = %+-20.20d", 0, -182));
    ck_assert_int_eq(
        s21_sprintf(str, "2 + 2 = % 10.hd ! = %+-20.20ld", 4, 276892067102856),
         sprintf(str2, "2 + 2 = % 10.hd ! = %+-20.20ld", (short)4, 276892067102856));
    ck_assert_int_eq(
        s21_sprintf(str, "2 + 2 = % 10.hd ! = %+-20.20ld", 010, 0x1275623445),
         sprintf(str2, "2 + 2 = % 10.hd ! = %+-20.20ld", (short)010, 0x1275623445));
} END_TEST

START_TEST(sprintf_253) {
    char str[100];
    char str2[100];

    ck_assert_int_eq(
        s21_sprintf(str, "2 + 2 = %i ! = %i", 4, 10),
         sprintf(str2, "2 + 2 = %i ! = %i", 4, 10));
    ck_assert_int_eq(
        s21_sprintf(str, "2 + 2 = %-i ! = %+i", 4, 10),
         sprintf(str2, "2 + 2 = %-i ! = %+i", 4, 10));
    ck_assert_int_eq(
        s21_sprintf(str, "2 + 2 = % -i ! = %+-i", 4, -10),
         sprintf(str2, "2 + 2 = % -i ! = %+-i", 4, -10));
    ck_assert_int_eq(
        s21_sprintf(str, "2 + 2 = % 10d ! = %+-20i", 4, 10),
         sprintf(str2, "2 + 2 = % 10i ! = %+-20i", 4, 10));
    ck_assert_int_eq(
        s21_sprintf(str, "2 + 2 = % 10.i ! = %+-20.20i", 4, -10),
         sprintf(str2, "2 + 2 = % 10.i ! = %+-20.20i", 4, -10));
    ck_assert_int_eq(
        s21_sprintf(str, "2 + 2 = % 10.hi ! = %+-20.20li", -4, +276892067102856),
        sprintf(str2, "2 + 2 = % 10.hi ! = %+-20.20li", (short)-4, +276892067102856));
    ck_assert_int_eq(
        s21_sprintf(str, "2 + 2 = % 10.hi ! = %+-20.20li", 010, 0x1275623445),
         sprintf(str2, "2 + 2 = % 10.hi ! = %+-20.20li", (short)010, 0x1275623445));
} END_TEST

START_TEST(sprintf_254) {
    char str[100];
    char str2[100];

    ck_assert_int_eq(
        s21_sprintf(str, "2 + 2 = %d ! = %u", -4, (unsigned)10),
        sprintf(str2, "2 + 2 = %d ! = %u", -4, (unsigned)10));
    ck_assert_int_eq(
        s21_sprintf(str, "2 + 2 = %-d ! = %u", 4, (unsigned)10),
        sprintf(str2, "2 + 2 = %-d ! = %u", 4, (unsigned)10));
    ck_assert_int_eq(
        s21_sprintf(str, "2 + 2 = % -i ! = %-u", 4, (unsigned)10),
        sprintf(str2, "2 + 2 = % -i ! = %-u", 4, (unsigned)10));
    ck_assert_int_eq(
        s21_sprintf(str, "2 + 2 = % 10d ! = %-20u", 4, (unsigned)10),
        sprintf(str2, "2 + 2 = % 10d ! = %-20u", 4, (unsigned)10));
    ck_assert_int_eq(
        s21_sprintf(str, "2 + 2 = % 10.i ! = %-20.20u", 4, (unsigned)10),
        sprintf(str2, "2 + 2 = % 10.i ! = %-20.20u", 4, (unsigned)10));
    ck_assert_int_eq(
        s21_sprintf(str, "2 + 2 = %10.hu ! = %-20.20lu", (unsigned short)4, (unsigned long)276892067102856),
        sprintf(str2, "2 + 2 = %10.hu ! = %-20.20lu", (unsigned short)4, (unsigned long)276892067102856));
} END_TEST

START_TEST(sprintf_255) {
    char str[100];
    char str2[100];

    ck_assert_int_eq(
        s21_sprintf(str, "2 + 2 = %f ! = %f", -4.21, +42.21),
        sprintf(str2, "2 + 2 = %f ! = %f", -4.21, +42.21));
    ck_assert_int_eq(
        s21_sprintf(str, "2 + 2 = %-f ! = %+f", -4.21, +42.21),
        sprintf(str2, "2 + 2 = %-f ! = %+f", -4.21, +42.21));
    ck_assert_int_eq(
        s21_sprintf(str, "2 + 2 = %-10f ! = %+12f", -4.21, +42.21),
        sprintf(str2, "2 + 2 = %-10f ! = %+12f", -4.21, +42.21));
    ck_assert_int_eq(
        s21_sprintf(str, "2 + 2 = %- 10.f ! = %+12.5f", -4.21, +42.21),
        sprintf(str2, "2 + 2 = %- 10.f ! = %+12.5f", -4.21, +42.21));
    ck_assert_int_eq(
        s21_sprintf(str, "2 + 2 = %- 10.f ! = %+12.5lf", -4.21, +42.21),
        sprintf(str2, "2 + 2 = %- 10.f ! = %+12.5lf", -4.21, +42.21));
} END_TEST

START_TEST(sprintf_256) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %.2d ";
    sprintf(sp, format, -1);
    s21_sprintf(s21, format, -1);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(sprintf_257) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %.2d ";
    sprintf(sp, format, 1);
    s21_sprintf(s21, format, 1);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(sprintf_258) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %.1d ";
    sprintf(sp, format, 9);
    s21_sprintf(s21, format, 9);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(sprintf_259) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %.2d ";
    sprintf(sp, format, 10);
    s21_sprintf(s21, format, 10);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(sprintf_260) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %.3d ";
    sprintf(sp, format, 11);
    s21_sprintf(s21, format, 11);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(sprintf_261) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %.4d ";
    sprintf(sp, format, 15);
    s21_sprintf(s21, format, 15);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(sprintf_262) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %.5d ";
    sprintf(sp, format, 16);
    s21_sprintf(s21, format, 16);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(sprintf_263) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %.6d ";
    sprintf(sp, format, 17);
    s21_sprintf(s21, format, 17);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(sprintf_264) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %.1d ";
    sprintf(sp, format, 99);
    s21_sprintf(s21, format, 99);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(sprintf_265) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %.2d ";
    sprintf(sp, format, 100);
    s21_sprintf(s21, format, 100);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(sprintf_266) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %.3d ";
    sprintf(sp, format, 101);
    s21_sprintf(s21, format, 101);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(sprintf_267) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %.1d ";
    sprintf(sp, format, -9);
    s21_sprintf(s21, format, -9);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(sprintf_268) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %.2d ";
    sprintf(sp, format, -10);
    s21_sprintf(s21, format, -10);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(sprintf_269) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %.3d ";
    sprintf(sp, format, -11);
    s21_sprintf(s21, format, -11);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(sprintf_270) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %.4d ";
    sprintf(sp, format, -14);
    s21_sprintf(s21, format, -14);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(sprintf_271) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %.1d ";
    sprintf(sp, format, -15);
    s21_sprintf(s21, format, -15);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(sprintf_272) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %.2d ";
    sprintf(sp, format, -16);
    s21_sprintf(s21, format, -16);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(sprintf_273) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %.3d ";
    sprintf(sp, format, -99);
    s21_sprintf(s21, format, -99);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(sprintf_274) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %.3d ";
    sprintf(sp, format, -100);
    s21_sprintf(s21, format, -100);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(sprintf_275) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %.4d ";
    sprintf(sp, format, -101);
    s21_sprintf(s21, format, -101);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(sprintf_276) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %.8d ";
    sprintf(sp, format, INT_MAX);
    s21_sprintf(s21, format, INT_MAX);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(sprintf_277) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %.10d ";
    sprintf(sp, format, LONG_MAX);
    s21_sprintf(s21, format, LONG_MAX);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(sprintf_278) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %.11d ";
    sprintf(sp, format, LONG_MIN);
    s21_sprintf(s21, format, LONG_MIN);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(sprintf_279) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %.12d ";
    sprintf(sp, format, UINT_MAX);
    s21_sprintf(s21, format, UINT_MAX);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(sprintf_280) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %.13ld ";
    sprintf(sp, format, ULONG_MAX);
    s21_sprintf(s21, format, ULONG_MAX);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(sprintf_281) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %.14d ";
    sprintf(sp, format, 922337);
    s21_sprintf(s21, format, 922337);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(sprintf_282) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %.8d %.9d %.10d %.11d %.12d %.13d %.14d";
    sprintf(sp, format, INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
    s21_sprintf(s21, format, INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(sprintf_283) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %+d ";
    sprintf(sp, format, 100);
    s21_sprintf(s21, format, 100);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(sprintf_284) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %+d ";
    sprintf(sp, format, 101);
    s21_sprintf(s21, format, 101);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(sprintf_285) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %+d ";
    sprintf(sp, format, -9);
    s21_sprintf(s21, format, -9);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(sprintf_286) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %+d ";
    sprintf(sp, format, -10);
    s21_sprintf(s21, format, -10);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(sprintf_287) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %+d ";
    sprintf(sp, format, -101);
    s21_sprintf(s21, format, -101);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(sprintf_288) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %+d ";
    sprintf(sp, format, INT_MAX);
    s21_sprintf(s21, format, INT_MAX);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(sprintf_289) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %+d ";
    sprintf(sp, format, INT_MIN);
    s21_sprintf(s21, format, INT_MIN);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(sprintf_290) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %+d %+d %+d %+d %+d %+d %+d";
    sprintf(sp, format, INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
    s21_sprintf(s21, format, INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(sprintf_291) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " {% d} {% d} {% d} {% d} {% d} {% d} {% d}";
    sprintf(sp, format, INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
    s21_sprintf(s21, format, INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(sprintf_292) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = "%d -- %ld";
    sprintf(sp, format, INT_MAX, LONG_MAX);
    s21_sprintf(s21, format, INT_MAX, LONG_MAX);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(sprintf_293) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = "%hd -- %hd";
    sprintf(sp, format, INT_MAX, LONG_MAX);
    s21_sprintf(s21, format, INT_MAX, LONG_MAX);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(sprintf_294) {
    char data[100] = {'\0'};
    char data1[100] = {'\0'};
    s21_sprintf(data, "(%-42.21u)\n", (unsigned)123456789);
    sprintf(data1, "(%-42.21u)\n", (unsigned)123456789);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(sprintf_295) {
    char data[100] = {'\0'};
    char data1[100] = {'\0'};
    s21_sprintf(data, "(%42.20u)", (unsigned)-123456789);
    sprintf(data1, "(%42.20u)", (unsigned)-123456789);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(sprintf_296) {
    char data[100] = {'\0'};
    char data1[100] = {'\0'};
    s21_sprintf(data, "(%-14.12u)\n", (unsigned)72);
    sprintf(data1, "(%-14.12u)\n", (unsigned)72);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(sprintf_297) {
    char data[100] = {'\0'};
    char data1[100] = {'\0'};
    unsigned short int a = 9;
    s21_sprintf(data, "(%hu)\n", a);
    sprintf(data1, "(%hu)\n", a);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(sprintf_298) {
    char data[100] = {'\0'};
    char data1[100] = {'\0'};
    unsigned long n = 123456;
    s21_sprintf(data, "(%-lu)\n", n);
    sprintf(data1, "(%lu)\n", n);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(sprintf_299) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "(%.13f)\n", 15.22222222222);
    sprintf(data1, "(%.13f)\n", 15.22222222222);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(sprintf_300) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "(% -42.21f)\n", 21.123456789);
    sprintf(data1, "(% -42.21f)\n", 21.123456789);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(sprintf_301) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "(%-+42.18f)\n", 123456789.1234567898);
    sprintf(data1, "(%-+42.18f)\n", 123456789.1234567898);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(sprintf_302) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "(% -42.30f)\n", -123456789.123456789);
    sprintf(data1, "(% -42.30f)\n", -123456789.123456789);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(sprintf_303) {
    char data1[100] = {'\0'};
    char data2[100] = {'\0'};
    char format[] = "{(% c)(% c)(%%)(% c)}";
    s21_sprintf(data1, format, 42, '1', 'H');
    sprintf(data2, format, 42, '1', 'H');
    ck_assert_str_eq(data1, data2);
} END_TEST

START_TEST(sprintf_304) {
    char data1[100] = {'\0'};
    char data2[100] = {'\0'};
    char format[] = "(%-42c) [%21c]";
    s21_sprintf(data1, format, 'C', 99);
    sprintf(data2, format, 'C', 99);
    ck_assert_str_eq(data1, data2);
} END_TEST

START_TEST(sprintf_305) {
    char data1[100] = {'\0'};
    char data2[100] = {'\0'};
    char format[] = " %c ";
    s21_sprintf(data1, format, 'C');
    sprintf(data2, format, 'C');
    ck_assert_str_eq(data1, data2);
} END_TEST

START_TEST(sprintf_306) {
    char data1[100] = {'\0'};
    char data2[100] = {'\0'};
    char format[] = " %c";
    s21_sprintf(data1, format, '0' - 256);
    sprintf(data2, format, '0' - 256);
    ck_assert_str_eq(data1, data2);
} END_TEST

START_TEST(sprintf_307) {
    char sp[100] = {'\0'};
    char my_sp[100] = {'\0'};
    char format[] = "{  %c   %c   %c  }";
    s21_sprintf(my_sp, format, '0', 0, '1');
    sprintf(sp, format, '0', 0, '1');
    ck_assert_str_eq(sp, my_sp);
} END_TEST

START_TEST(sprintf_308) {
    char data1[100] = {'\0'};
    char data2[100] = {'\0'};
    char format[] = " %c %c %c ";
    s21_sprintf(data1, format, ' ', ' ', ' ');
    sprintf(data2, format, ' ', ' ', ' ');
    ck_assert_str_eq(data1, data2);
} END_TEST

START_TEST(sprintf_309) {
    char data1[100] = {'\0'};
    char data2[100] = {'\0'};
    char format[] = " %c %c %c ";
    s21_sprintf(data1, format, '1', '2', '3');
    sprintf(data2, format, '1', '2', '3');
    ck_assert_str_eq(data1, data2);
} END_TEST

START_TEST(sprintf_310) {
    char data1[100] = {'\0'};
    char data2[100] = {'\0'};
    char format[] = "{%%%c%c%c%%}";
    s21_sprintf(data1, format, 0, '1', '2');
    sprintf(data2, format, 0, '1', '2');
    ck_assert_str_eq(data1, data2);
} END_TEST

START_TEST(sprintf_311) {
    char data[70] = {'\0'};
    char data1[70] = {'\0'};
    char  format[] = "(%s)";
    s21_sprintf(data, format, "Hello, sprintf!");
    sprintf(data1, format, "Hello, sprintf!");
    ck_assert_pstr_eq(data, data1);
} END_TEST

START_TEST(sprintf_312) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char  format[] = "%s";
    s21_sprintf(s21, format, "");
    sprintf(sp, format, "");
    ck_assert_pstr_eq(sp, s21);
} END_TEST

START_TEST(sprintf_313) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char  format[] = "%s ";
    s21_sprintf(s21, format, "");
    sprintf(sp, format, "");
    ck_assert_pstr_eq(sp, s21);
} END_TEST

START_TEST(sprintf_314) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char  format[] = " %s ";
    s21_sprintf(s21, format, "");
    sprintf(sp, format, "");
    ck_assert_pstr_eq(sp, s21);
} END_TEST

START_TEST(sprintf_315) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char  format[] = " %s %s ";
    s21_sprintf(s21, format, "", "-");
    sprintf(sp, format, "", "-");
    ck_assert_pstr_eq(sp, s21);
} END_TEST

START_TEST(sprintf_316) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char  format[] = " %s %s ";
    s21_sprintf(s21, format, "", "-");
    sprintf(sp, format, "", "-");
    ck_assert_pstr_eq(sp, s21);
} END_TEST

START_TEST(sprintf_317) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char  format[] = " %s %s ";
    s21_sprintf(s21, format, " - ", "");
    sprintf(sp, format, " - ", "");
    ck_assert_pstr_eq(sp, s21);
} END_TEST

START_TEST(sprintf_318) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char s2[] = "AMOGUS";
    char  format[] = " %s %s %s %s %s";
    s21_sprintf(s21, format, " - ", "", "4", "", s2);
    sprintf(sp, format, " - ", "", "4", "", s2);
    ck_assert_pstr_eq(sp, s21);
} END_TEST

START_TEST(sprintf_319) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char  format[] = " %s %s %s %s %s ";
    s21_sprintf(s21, format, " - ", "", "4", "", "2 ");
    sprintf(sp, format, " - ", "", "4", "", "2 ");
    ck_assert_pstr_eq(sp, s21);
} END_TEST

START_TEST(sprintf_320) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char  format[] = " S21_NULL %s S21_NULL ";
    s21_sprintf(s21, format, S21_NULL);
    sprintf(sp, format, S21_NULL);
    ck_assert_pstr_eq(sp, s21);
} END_TEST

START_TEST(sprintf_321) {
    char data[1024] = {'\0'};
    char data1[1024] = {'\0'};
    char  format[] = "(%.s)";
    s21_sprintf(data, format, "Hello, sprintf!");
    sprintf(data1, format, "Hello, sprintf!");
    ck_assert_pstr_eq(data, data1);
} END_TEST

START_TEST(sprintf_322) {
    char data[1024] = {'\0'};
    char data1[1024] = {'\0'};
    char  format[] = "(%.5s)";
    s21_sprintf(data, format, "Hello, sprintf!");
    sprintf(data1, format, "Hello, sprintf!");
    ck_assert_pstr_eq(data, data1);
} END_TEST

START_TEST(sprintf_323) {
    char data[1024] = {'\0'};
    char data1[1024] = {'\0'};
    char  format[] = "(%1.0s)";
    s21_sprintf(data, format, "Hello, sprintf!");
    sprintf(data1, format, "Hello, sprintf!");
    ck_assert_pstr_eq(data, data1);
} END_TEST

START_TEST(sprintf_324) {
    char data[1024] = {'\0'};
    char data1[1024] = {'\0'};
    char  format[] = "(%150.15s)";
    s21_sprintf(data, format, "Hello, sprintf!");
    sprintf(data1, format, "Hello, sprintf!");
    ck_assert_pstr_eq(data, data1);
} END_TEST

START_TEST(sprintf_325) {
    char data[1024] = {'\0'};
    char data1[1024] = {'\0'};
    char  format[] = "(%-.6s)";
    s21_sprintf(data, format, "Hello, sprintf!");
    sprintf(data1, format, "Hello, sprintf!");
    ck_assert_pstr_eq(data, data1);
} END_TEST

START_TEST(sprintf_326) {
    char data[1024] = {'\0'};
    char data1[1024] = {'\0'};
    char  format[] = "(%-100.100s)";
    s21_sprintf(data, format, "Hello, sprintf!");
    sprintf(data1, format, "Hello, sprintf!");
    ck_assert_pstr_eq(data, data1);
} END_TEST

START_TEST(sprintf_327) {
    char data[1024] = {'\0'};
    char data1[1024] = {'\0'};
    char  format[] = "(%11.11s) %.5s %10s";
    s21_sprintf(data, format, "Hello, sprintf!", "000", "\0");
    sprintf(data1, format, "Hello, sprintf!", "000", "\0");
    ck_assert_pstr_eq(data, data1);
} END_TEST

START_TEST(sprintf_328) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char  format[] = "%.s";
    s21_sprintf(s21, format, "");
    sprintf(sp, format, "");
    ck_assert_pstr_eq(sp, s21);
} END_TEST

START_TEST(sprintf_329) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char  format[] = " %.1s";
    s21_sprintf(s21, format, "");
    sprintf(sp, format, "");
    ck_assert_pstr_eq(sp, s21);
} END_TEST

START_TEST(sprintf_330) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char  format[] = "%.1s ";
    s21_sprintf(s21, format, "");
    sprintf(sp, format, "");
    ck_assert_pstr_eq(sp, s21);
} END_TEST

START_TEST(sprintf_331) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char  format[] = " %.s ";
    s21_sprintf(s21, format, "");
    sprintf(sp, format, "");
    ck_assert_pstr_eq(sp, s21);
} END_TEST

START_TEST(sprintf_332) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char  format[] = " %.s ";
    s21_sprintf(s21, format, "-");
    sprintf(sp, format, "-");
    ck_assert_pstr_eq(sp, s21);
} END_TEST

START_TEST(sprintf_333) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char  format[] = " %.2s %.1s ";
    s21_sprintf(s21, format, "", "-");
    sprintf(sp, format, "", "-");
    ck_assert_pstr_eq(sp, s21);
} END_TEST

START_TEST(sprintf_334) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char  format[] = " %.3s %.2s ";
    s21_sprintf(s21, format, " - ", "");
    sprintf(sp, format, " - ", "");
    ck_assert_pstr_eq(sp, s21);
} END_TEST

START_TEST(sprintf_335) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char  format[] = " %.1s %.2s %.3s %.4s ";
    s21_sprintf(s21, format, " - ", "", "4", "");
    sprintf(sp, format, " - ", "", "4", "");
    ck_assert_pstr_eq(sp, s21);
} END_TEST

START_TEST(sprintf_336) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char  format[] = " % 10.2s % 23.3s % 3.4s % 44.5s % .1s ";
    s21_sprintf(s21, format, " - ", "", "4", "", "2 ");
    sprintf(sp, format, " - ", "", "4", "", "2 ");
    ck_assert_pstr_eq(sp, s21);
} END_TEST

START_TEST(sprintf_337) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char  format[] = "%s";
    s21_sprintf(s21, format, "Чебурек");
    sprintf(sp, format, "Чебурек");
    ck_assert_pstr_eq(sp, s21);
} END_TEST


START_TEST(sprintf_339) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char  format[] = "%c %c %c";
    s21_sprintf(s21, format, ' ', '#', '@');
    sprintf(sp, format, ' ', '#', '@');
    ck_assert_pstr_eq(sp, s21);
} END_TEST

START_TEST(sprintf_340) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    long int n = 3;
    char  format[] = "%ld%.5d  % d   %+d %d%-2.d";
    s21_sprintf(s21, format, n, -2, 3, 2, 46, 4, -53, 9);
    sprintf(sp, format, n, -2, 3, 2, 46, 4, -53, 9);
    ck_assert_pstr_eq(sp, s21);
} END_TEST

START_TEST(sprintf_341) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    short int n = 11;
    char  format[] = "%hi %.5i %i";
    s21_sprintf(s21, format, n, -46, 57);
    sprintf(sp, format, n, -46, 57);
    ck_assert_pstr_eq(sp, s21);
} END_TEST

START_TEST(sprintf_342) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char  format[] = "%d %.s %.3s %s";
    s21_sprintf(s21, format, -2, "Hello", " world", "!");
    sprintf(sp, format, -2, "Hello", " world", "!");
    ck_assert_pstr_eq(sp, s21);
} END_TEST

START_TEST(sprintf_343) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    unsigned short n = 2;
    unsigned long m = 33;
    char  format[] = "%hi %.5i %i";
    s21_sprintf(s21, format,  n, m, (unsigned)58432322);
    sprintf(sp, format,  n, m, (unsigned)58432322);
    ck_assert_pstr_eq(sp, s21);
} END_TEST

START_TEST(sprintf_344) {
    char buffer1[100] = {'\0'};
    char buffer2[100] = {'\0'};
    sprintf(buffer1, "%s", "Xenon");
    s21_sprintf(buffer2, "%s", "Xenon");
    ck_assert_str_eq(buffer1, buffer2);
} END_TEST

START_TEST(sprintf_345) {
    char buffer1[100] = {'\0'};
    char buffer2[100] = {'\0'};
    sprintf(buffer1, "%.10d%%\n", 4);
    s21_sprintf(buffer2, "%.10d%%\n", 4);
    ck_assert_str_eq(buffer1, buffer2);
} END_TEST

START_TEST(sprintf_346) {
    long unsigned key_l = 421;
    char buffer1[100] = {'\0'};
    char buffer2[100] = {'\0'};
    sprintf(buffer1, "%-10lu%%\n", key_l);
    s21_sprintf(buffer2, "%-10lu%%\n", key_l);
    ck_assert_str_eq(buffer1, buffer2);
} END_TEST

START_TEST(sprintf_347) {
    char buffer1[100] = {'\0'};
    char buffer2[100] = {'\0'};
    short unsigned key_h = 421;
    sprintf(buffer1, "%-10hu%%\n", key_h);
    s21_sprintf(buffer2, "%-10hu%%\n", key_h);
    ck_assert_str_eq(buffer1, buffer2);
} END_TEST

START_TEST(sprintf_348) {
    char buffer1[100] = {'\0'};
    char buffer2[100] = {'\0'};
    sprintf(buffer1, "%-10u%%\n", (unsigned)421);
    s21_sprintf(buffer2, "%-10u%%\n", (unsigned)421);
    ck_assert_str_eq(buffer1, buffer2);
} END_TEST

START_TEST(sprintf_350) {
    char buffer1[100] = {'\0'};
    char buffer2[100] = {'\0'};
    short var_short = 123;
    sprintf(buffer1, "%hd%%\n", var_short);
    s21_sprintf(buffer2, "%hd%%\n", var_short);
    ck_assert_str_eq(buffer1, buffer2);
} END_TEST

START_TEST(sprintf_351) {
    char buffer1[100] = {'\0'};
    char buffer2[100] = {'\0'};
    sprintf(buffer1, "%+10d%%\n", -4);
    s21_sprintf(buffer2, "%+10d%%\n", -4);
    ck_assert_str_eq(buffer1, buffer2);
} END_TEST

START_TEST(sprintf_352) {
    char buffer1[100] = {'\0'};
    char buffer2[100] = {'\0'};
    sprintf(buffer1, "%-+10d%%\n", 4);
    s21_sprintf(buffer2, "%-+10d%%\n", 4);
    ck_assert_str_eq(buffer1, buffer2);
} END_TEST

START_TEST(sprintf_353) {
    char buffer1[100] = {'\0'};
    char buffer2[100] = {'\0'};
    sprintf(buffer1, "%+f %+f", -200000.4, 2000.231);
    s21_sprintf(buffer2, "%+f %+f", -200000.4, 2000.231);
    ck_assert_str_eq(buffer1, buffer2);
} END_TEST

START_TEST(sprintf_355) {
    char data1[100] = {'\0'};
    char data2[100] = {'\0'};
    s21_sprintf(data1, "(%%)");
    sprintf(data2, "(%%)");
    ck_assert_str_eq(data1, data2);
} END_TEST

START_TEST(sprintf_356) {
    char data1[100] = {'\0'};
    char data2[100] = {'\0'};
    s21_sprintf(data1, "(%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%)");
    sprintf(data2, "(%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%)");
    ck_assert_str_eq(data1, data2);
} END_TEST

START_TEST(sprintf_357) {
    char data1[100] = {'\0'};
    char data2[100] = {'\0'};
    s21_sprintf(data1, "(School %% 21 %% TESTER %%%% LOL %%)");
    sprintf(data2, "(School %% 21 %% TESTER %%%% LOL %%)");
    ck_assert_str_eq(data1, data2);
} END_TEST

// START_TEST(sprintf_358) {
//     char a[10] = {'\0'};
//     char b[10] = {'\0'};
//     char format[] = "";
//     s21_sprintf(a, format);
//     sprintf(b, format);
//     ck_assert_str_eq(a, b);
// } END_TEST

// START_TEST(sprintf_359) {
//     char a[256] = {'\0'};
//     char b[256] = {'\0'};
//     char format[] = "";
//     s21_sprintf(a, format);
//     sprintf(b, format);
//     ck_assert_str_eq(a, b);
// } END_TEST

// START_TEST(sprintf_360) {
//     char a[10] = {'\0'};
//     char b[10] = {'\0'};
//     char* format = "\n\n";
//     s21_sprintf(a, format);
//     sprintf(b, format);
//     ck_assert_str_eq(a, b);
// } END_TEST


/* ------===== This part for testing sprintf and sscanf =====------ */
/* ------=====                   START                  =====------ */


START_TEST(sprintf_simple_int) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "This is a simple value %d";
    int val = 69;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_precise_int) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%.5i";
    int val = 69;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_width_int) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%5d";
    int val = 69;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_minus_width_int) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%-5i";
    int val = 69;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_plus_width_int) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%+12d";
    int val = 69;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST



START_TEST(sprintf_flags_long_int) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%+5.31li";
    long int val = 698518581899;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_flags_short_int) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%-16.9hi";
    short int val = 6958;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST


START_TEST(sprintf_zero_precision_zero_int) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%.0d";
    int val = 0;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_space_flag_int) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "% d";
    int val = 0;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_unsigned_val) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%u";
    unsigned int val = 14140;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_unsigned_val_width) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%15u";
    unsigned int val = 14140;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_unsigned_val_flags) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%-16u";
    unsigned int val = 14140;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_unsigned_val_precision) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%.51u";
    unsigned int val = 14140;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_unsigned_val_many_flags) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "% 5.51u";
    unsigned int val = 14140;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_unsigned_val_short) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%hu";
    unsigned short int val = 14140;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_unsigned_val_long) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%lu";
    unsigned long int val = 949149114140;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_unsigned_val_many) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%lu, %u, %hu, %.5u, %5.u";
    unsigned long int val = 949149114140;
    ck_assert_int_eq(s21_sprintf(str1, format, val, 14, 1441, 14414, 9681), sprintf(str2, format, val, (unsigned)14,
                             (unsigned short)1441, (unsigned)14414,
                             (unsigned)9681));

    ck_assert_str_eq(str1, str2);
} END_TEST


START_TEST(sprintf_unsigned_zero) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%u";
    ck_assert_int_eq(s21_sprintf(str1, format, 0), sprintf(str2, format, (unsigned)0));

    ck_assert_str_eq(str1, str2);
} END_TEST


START_TEST(sprintf_one_char) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%c";
    char val = 'X';
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST
START_TEST(sprintf_one_precision) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%.5c";
    char val = 'c';
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_one_flags) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "% -5c";
    char val = 'c';
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_one_width) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%15c";
    char val = 'c';
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_one_many) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%-5.3c%c%c%c%c Hello! ABOBA";
    char val = 'c';
    ck_assert_int_eq(s21_sprintf(str1, format, val, 'c', 'a', 'b', 'b'), sprintf(str2, format, val, 'c', 'a', 'b', 'b'));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_one_many_flags) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%-5.3c";
    char val = 'c';
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_string) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%s";
    char *val = "I LOVE STRINGS AND TESTS AND SCHOOL21 NO JOKE";
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_string_precision) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%.15s";
    char *val = "I LOVE STRINGS AND TESTS AND SCHOOL21 NO JOKE";
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_string_width) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%15s";
    char *val = "69 IS MY FAVORITE NUMBER";
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_string_flags) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%-15.9s";
    char *val = "69 IS MY FAVORITE NUMBER";
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_string_long) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%s";
    char *val =
        "69 IS MY FAVORITE NUMBER THIS IS SUPPOSED TO BE A VERY LONG STRING";
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_string_many) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%s%s%s%s";
    char *val =
        "69 IS MY FAVORITE NUMBER THIS IS SUPPOSED TO BE A VERY LONG STRING";
    char *s1 = "";
    char *s2 = "87418347813748913749871389480913";
    char *s3 = "HAHAABOBASUCKER";
    ck_assert_int_eq(s21_sprintf(str1, format, val, s1, s2, s3), sprintf(str2, format, val, s1, s2, s3));

    ck_assert_str_eq(str1, str2);
} END_TEST

// START_TEST(sprintf_ptr) {
//     char str1[BUFF_SIZE];
//     char str2[BUFF_SIZE];

//     char *format = "%p";
//     ck_assert_int_eq(s21_sprintf(str1, format, format), sprintf(str2, format, format));

//     ck_assert_str_eq(str1, str2);
// } END_TEST

// START_TEST(sprintf_ptr_width) {
//     char str1[BUFF_SIZE];
//     char str2[BUFF_SIZE];

//     char *format = "%15p";
//     ck_assert_int_eq(s21_sprintf(str1, format, format), sprintf(str2, format, format));

//     ck_assert_str_eq(str1, str2);
// } END_TEST

// START_TEST(sprintf_ptr_precision) {
//     char str1[BUFF_SIZE];
//     char str2[BUFF_SIZE];

//     char *format = "%.5p";
//     ck_assert_int_eq(s21_sprintf(str1, format, format), sprintf(str2, format, format));

//     ck_assert_str_eq(str1, str2);
// } END_TEST

// START_TEST(sprintf_null_ptr) {
//     char str1[BUFF_SIZE];
//     char str2[BUFF_SIZE];

//     char *format = "%p";
//     char *ptr = S21_NULL;
//     ck_assert_int_eq(s21_sprintf(str1, format, ptr), sprintf(str2, format, ptr));

//     ck_assert_str_eq(str1, str2);
// } END_TEST

START_TEST(sprintf_string_width_huge) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char *val = "kjafdiuhfjahfjdahf";
    char *format = "%120s";
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

// START_TEST(sprintf_n_specifier) {
//     char str1[BUFF_SIZE];
//     char str2[BUFF_SIZE];
//     int ret = 0;
//     char *format = "Hello, my sexy little aboba abobushka abobina %n";
//     ck_assert_int_eq(s21_sprintf(str1, format, &ret), sprintf(str2, format, &ret));

//     ck_assert_str_eq(str1, str2);
// } END_TEST

// START_TEST(sprintf_float_precision) {
//     char str1[BUFF_SIZE];
//     char str2[BUFF_SIZE];
//     char *format = "%Lf";
//     long double val = 513515.131513515151351;
//     ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

//     ck_assert_str_eq(str1, str2);
// } END_TEST

// START_TEST(sprintf_float_width) {
//     char str1[BUFF_SIZE];
//     char str2[BUFF_SIZE];
//     char *format = "%10Lf";
//     long double val = 15.35;
//     ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

//     ck_assert_str_eq(str1, str2);
// } END_TEST

// START_TEST(sprintf_float_precision_zero) {
//     char str1[BUFF_SIZE];
//     char str2[BUFF_SIZE];
//     char *format = "%.0Lf";
//     long double val = 15.35;
//     ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

//     ck_assert_str_eq(str1, str2);
// } END_TEST

// START_TEST(sprintf_float_precision_empty) {
//     char str1[BUFF_SIZE];
//     char str2[BUFF_SIZE];
//     char *format = "%.Lf";
//     long double val = 15.35;
//     ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

//     ck_assert_str_eq(str1, str2);
// } END_TEST

// START_TEST(sprintf_float_precision_huge) {
//     char str1[BUFF_SIZE];
//     char str2[BUFF_SIZE];
//     char *format = "%.15Lf";
//     long double val = 15.35;
//     ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

//     ck_assert_str_eq(str1, str2);
// } END_TEST

// START_TEST(sprintf_float_precision_huge_negative) {
//     char str1[BUFF_SIZE];
//     char str2[BUFF_SIZE];
//     char *format = "%.15Lf";
//     long double val = -15.35581134;
//     ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

//     ck_assert_str_eq(str1, str2);
// } END_TEST

// START_TEST(sprintf_float_huge) {
//     char str1[BUFF_SIZE];
//     char str2[BUFF_SIZE];
//     char *format = "%Lf";
//     long double val = 72537572375.1431341;
//     ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

//     ck_assert_str_eq(str1, str2);
// } END_TEST

START_TEST(sprintf_float_flags) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char *format = "% f";
    float val = 0;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_all_empty) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    ck_assert_int_eq(s21_sprintf(str1, "abc"), sprintf(str2, "abc"));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_empty_format_and_parameters) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    ck_assert_int_eq(s21_sprintf(str1, "abc"), sprintf(str2, "abc"));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_one_char) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    ck_assert_int_eq(s21_sprintf(str1, "%c", '\t'), sprintf(str2, "%c", '\t'));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_many_char) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    ck_assert_int_eq(s21_sprintf(str1, "%c%c%c%c%c", '\t', '\n', '0', 'S', 's'), sprintf(str2, "%c%c%c%c%c", '\t', '\n', '0', 'S', 's'));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_one_string) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    ck_assert_int_eq(s21_sprintf(str1, "%s", "Drop Sega PLS"), sprintf(str2, "%s", "Drop Sega PLS"));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_many_string) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    ck_assert_int_eq(
        s21_sprintf(str1, "%s%s%s%s%s", "Drop", " ", "Sega", " ", "PLS"),
        sprintf(str2, "%s%s%s%s%s", "Drop", " ", "Sega", " ", "PLS"));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_one_dec) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    ck_assert_int_eq(s21_sprintf(str1, "%d", 666), sprintf(str2, "%d", 666));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_many_dec) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    ck_assert_int_eq(s21_sprintf(str1, "%d%d%d%d", -999, 0, 666, -100), sprintf(str2, "%d%d%d%d", -999, 0, 666, -100));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_one_int) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    ck_assert_int_eq(s21_sprintf(str1, "%i", -0), sprintf(str2, "%i", -0));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_many_int) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    ck_assert_int_eq(s21_sprintf(str1, "%i%i%i%i", -999, 0, 666, -100), sprintf(str2, "%i%i%i%i", -999, 0, 666, -100));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_one_float) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    ck_assert_int_eq(s21_sprintf(str1, "%f", 0.0001), sprintf(str2, "%f", 0.0001));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_many_float) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    ck_assert_int_eq(
        s21_sprintf(str1, "%f%f%f%f", -999.666, 0.0001, 666.999, -100.001),
        sprintf(str2, "%f%f%f%f", -999.666, 0.0001, 666.999, -100.001));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_one_unsigned_dec) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    ck_assert_int_eq(s21_sprintf(str1, "%u", 100), sprintf(str2, "%u", (unsigned)100));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_many_unsigned_dec) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    ck_assert_int_eq(s21_sprintf(str1, "%u%u%u%u", 999, 0, 666, 100), sprintf(str2, "%u%u%u%u", (unsigned)999, (unsigned)0,
                             (unsigned)666, (unsigned)100));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_one_char_with_alignment_left) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    ck_assert_int_eq(s21_sprintf(str1, "%8c", '\t'), sprintf(str2, "%8c", '\t'));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_one_char_with_alignment_right) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    ck_assert_int_eq(s21_sprintf(str1, "%-8c", '\t'), sprintf(str2, "%-8c", '\t'));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_many_char_with_alignment) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    ck_assert_int_eq(
        s21_sprintf(str1, "%3c%-11c%10c%-2c%c", '\t', '\n', '0', 'S', 's'),
        sprintf(str2, "%3c%-11c%10c%-2c%c", '\t', '\n', '0', 'S', 's'));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_sprintf1) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char format[] = "%10ld";

    ck_assert_int_eq(s21_sprintf(str1, format, 1), sprintf(str2, format, 1));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_sprintf2) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char format[] = "%1.1f";

    ck_assert_int_eq(s21_sprintf(str1, format, 1.1), sprintf(str2, format, 1.1));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_sprintf3) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char format[] = "%8.3c";

    ck_assert_int_eq(s21_sprintf(str1, format, 'a'), sprintf(str2, format, 'a'));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_sprintf4) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char format[] = "%+5.5d aboba";

    int val = 10000;
    int a = s21_sprintf(str1, format, val);
    int b = sprintf(str2, format, val);
    ck_assert_int_eq(a, b);

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_sprintf6) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char format[] = "%7.7f";

    ck_assert_int_eq(s21_sprintf(str1, format, 11.123456), sprintf(str2, format, 11.123456));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_sprintf7) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char format[] = "%7.4s";

    ck_assert_int_eq(s21_sprintf(str1, format, "aboba floppa"), sprintf(str2, format, "aboba floppa"));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_sprintf8) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char format[] = "%6.6u";

    ck_assert_int_eq(s21_sprintf(str1, format, 12341151), sprintf(str2, format, 12341151));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_sprintf9) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char format[] = "%li%ld%lu";

    ck_assert_int_eq(s21_sprintf(str1, format, 666666666666, 777, 111), sprintf(str2, format, 666666666666, 777, 111));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_sprintf10) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char format[] = "%hi%hd%hu";

    ck_assert_int_eq(s21_sprintf(str1, format, 666, -777, 111), sprintf(str2, format, 666, -777, 111));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_sprintf11) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char format[] = "%+li%+lu%+d%+lf";

    ck_assert_int_eq(s21_sprintf(str1, format, -123, 321, -5555, -1213.123), sprintf(str2, format, -123, 321, -5555, -1213.123));

    ck_assert_str_eq(str1, str2);
} END_TEST

// START_TEST(sprintf_test_sprintf12) {
//     char str1[BUFF_SIZE];
//     char str2[BUFF_SIZE];
//     char format[] = "%-11.11li%-35.5lu%-3.5ld%33.19Lf";
//     long double k = 333.33213;

//     ck_assert_int_eq(
//         s21_sprintf(str1, format, 66666666666, 5555555555, 44444444444, k),
//         sprintf(str2, format, 66666666666, 5555555555, 44444444444, k));

//     ck_assert_str_eq(str1, str2);
// } END_TEST

START_TEST(sprintf_test_sprintf14) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char format[] = "% 0.0li% 0.0lu% 0.0ld % 0.0lf";

    ck_assert_int_eq(
        s21_sprintf(str1, format, 1, 222, 33333333333, -166513.1232),
        sprintf(str2, format, 1, 222, 33333333333, -166513.1232));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_sprintf15) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char format[] = "% 0.0hi% 0.0hu% 0.0hd % 0.0hf";

    ck_assert_int_eq(
        s21_sprintf(str1, format, 1, 222, 33333333333, -166513.1232),
        sprintf(str2, format, 1, 222, 33333333333, -166513.1232));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_sprintf16) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char format[] = "% c";

    ck_assert_int_eq(s21_sprintf(str1, format, 'a'), sprintf(str2, format, 'a'));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_sprintf17) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char format[] = "% s";

    ck_assert_int_eq(s21_sprintf(str1, format, "aboba likes floppa"), sprintf(str2, format, "aboba likes floppa"));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_sprintf18) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char format[] = "% s% c";

    ck_assert_int_eq(s21_sprintf(str1, format, "", 'f'), sprintf(str2, format, "", 'f'));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_sprintf19) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char format[] = "%210s";

    ck_assert_int_eq(s21_sprintf(str1, format, "AHHAHAHA\0AHHAHAHAH"), sprintf(str2, format, "AHHAHAHA\0AHHAHAHAH"));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_sprintf20) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char format[] = "%-115s";

    ck_assert_int_eq(s21_sprintf(str1, format, "Nick her"), sprintf(str2, format, "Nick her"));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_sprintf24) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char format[] = "%+2.1c%+4.2d%+5.4i%+10.2f%+55.55s%+1.1u";

    ck_assert_int_eq(
        s21_sprintf(str1, format, 'f', 21, 42, 666.666,
                    "Lorem ipsum dolor sit amet. Aut quam ducimus.", 11),
        sprintf(str2, format, 'f', 21, 42, 666.666,
                "Lorem ipsum dolor sit amet. Aut quam ducimus.", 11));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_sprintf25) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char format[] = "%.f";

    ck_assert_int_eq(s21_sprintf(str1, format, 121.123), sprintf(str2, format, 121.123));

    ck_assert_str_eq(str1, str2);
} END_TEST

// START_TEST(sprintf_test_sprintf26) {
//     char str1[BUFF_SIZE];
//     char str2[BUFF_SIZE];
//     char format[] = "%%";

//     ck_assert_int_eq(s21_sprintf(str1, format), sprintf(str2, format));

//     ck_assert_str_eq(str1, str2);
// } END_TEST

// START_TEST(sprintf_test_sprintf27) {
//     char str1[BUFF_SIZE];
//     char str2[BUFF_SIZE];
//     char format[] = "%%%%%%%%";

//     ck_assert_int_eq(s21_sprintf(str1, format), sprintf(str2, format));

//     ck_assert_str_eq(str1, str2);
// } END_TEST

// START_TEST(sprintf_test_sprintf28) {
//     char str1[BUFF_SIZE];
//     char str2[BUFF_SIZE];
//     int n1;
//     int n2;
//     int a = s21_sprintf(str1, "%d%n", 123, &n1);
//     int b = sprintf(str2, "%d%n", 123, &n2);

//     ck_assert_int_eq(a, b);
//     ck_assert_int_eq(n1, n2);
//     ck_assert_str_eq(str1, str2);
// } END_TEST

START_TEST(sprintf_test_sprintf29) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char format[] = "%-.f";

    ck_assert_int_eq(s21_sprintf(str1, format, 111.111), sprintf(str2, format, 111.111));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_sprintf30) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char format[] = "%-.1d";

    ck_assert_int_eq(s21_sprintf(str1, format, 111), sprintf(str2, format, 111));

    ck_assert_str_eq(str1, str2);
} END_TEST


START_TEST(sprintf_wide_char) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "This is a simple wide char %lc";
    unsigned long w = L'汉';
    int a = s21_sprintf(str1, format, w);
    int b = sprintf(str2, format, w);
    ck_assert_str_eq(str1, str2);
    ck_assert_int_eq(a, b);
}

START_TEST(sprintf_width_char) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "This is a simple wide char %5c";
    char w = 'c';
    int a = s21_sprintf(str1, format, w);
    int b = sprintf(str2, format, w);
    ck_assert_str_eq(str1, str2);
    ck_assert_int_eq(a, b);
}

START_TEST(sprintf_minus_wide_char) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "This is a simple wide char %-5lc";
    unsigned long w = L'森';
    int a = s21_sprintf(str1, format, w);
    int b = sprintf(str2, format, w);
    ck_assert_str_eq(str1, str2);
    ck_assert_int_eq(a, b);
} END_TEST

START_TEST(sprintf_wide_string) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "This is a simple wide char %ls";
    wchar_t w[] = L"森我爱菠萝";
    int a = s21_sprintf(str1, format, w);
    int b = sprintf(str2, format, w);
    ck_assert_str_eq(str1, str2);
    ck_assert_int_eq(a, b);
} END_TEST

START_TEST(sprintf_wide_string1) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "This is a simple wide char %5.12ls";
    wchar_t w[] = L"森我爱菠萝";
    int a = s21_sprintf(str1, format, w);
    int b = sprintf(str2, format, w);
    ck_assert_str_eq(str1, str2);
    ck_assert_int_eq(a, b);
} END_TEST

START_TEST(sprintf_wide_string2) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "This is a simple wide char %120ls ABOBA";
    wchar_t w[] = L"森我爱菠萝";
    int a = s21_sprintf(str1, format, w);
    int b = sprintf(str2, format, w);
    ck_assert_str_eq(str1, str2);
    ck_assert_int_eq(a, b);
} END_TEST

START_TEST(sprintf_wide_string3) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "This is a simple wide char %-43ls";
    wchar_t w[] = L"森我爱菠萝";
    int a = s21_sprintf(str1, format, w);
    int b = sprintf(str2, format, w);
    ck_assert_str_eq(str1, str2);
    ck_assert_int_eq(a, b);
} END_TEST

START_TEST(sprintf_wide_string4) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "This is a simple wide char %43ls";
    wchar_t w[] = L"森我爱菠萝";
    int a = s21_sprintf(str1, format, w);
    int b = sprintf(str2, format, w);
    ck_assert_str_eq(str1, str2);
    ck_assert_int_eq(a, b);
} END_TEST

START_TEST(sprintf_wide_char2) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "This is a simple wide char %43lc";
    unsigned long w = L'森';
    int a = s21_sprintf(str1, format, w);
    int b = sprintf(str2, format, w);
    ck_assert_int_eq(a, b);
    ck_assert_str_eq(str1, str2);
} END_TEST
// sprintf <-

START_TEST(sprintf_pr_1)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "Hello %%");
s21_sprintf(test_your, "Hello %%");
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_pr_2)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "Hello 2022 World");
s21_sprintf(test_your, "Hello 2022 World");
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_c_1)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "Hello %c", 'W');
s21_sprintf(test_your, "Hello %c", 'W');
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_c_2)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "Hello %-5c", 'W');
s21_sprintf(test_your, "Hello %-5c", 'W');
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_c_3)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "Hello %5c", 'W');
s21_sprintf(test_your, "Hello %5c", 'W');
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_c_4)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "Hello %-c", 'W');
s21_sprintf(test_your, "Hello %-c", 'W');
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_c_5)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "Hello %c", 'W');
s21_sprintf(test_your, "Hello %c", 'W');
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_c_6)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "%cHello %c", 's', 'W');
s21_sprintf(test_your, "%cHello %c", 's', 'W');
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_c_7)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "He%cllo %-5c", 's', 'W');
s21_sprintf(test_your, "He%cllo %-5c", 's', 'W');
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_c_8)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "%5cHello %5c", 's', 'W');
s21_sprintf(test_your, "%5cHello %5c", 's', 'W');
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_c_9)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "%-10cHello %-c", 's', 'W');
s21_sprintf(test_your, "%-10cHello %-c", 's', 'W');
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_c_10)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "He%%llo %c", 'W');
s21_sprintf(test_your, "He%%llo %c", 'W');
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_d_1)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "Hello %d", 23);
s21_sprintf(test_your, "Hello %d", 23);
ck_assert_str_eq(test_original, test_your);

}
END_TEST


START_TEST(sprintf_d_3)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "Hello %-6d", 23);
s21_sprintf(test_your, "Hello %-6d", 23);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_d_4)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "Hello %+d", 23);
s21_sprintf(test_your, "Hello %+d", 23);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_d_5)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "Hello % d", 23);
s21_sprintf(test_your, "Hello % d", 23);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_d_6)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "Hello %hd", 23);
s21_sprintf(test_your, "Hello %hd", 23);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_d_7)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "Hello %ld", 238230000006325000);
s21_sprintf(test_your, "Hello %ld", 238230000006325000);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_d_8)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "Hello % 10d", 23);
s21_sprintf(test_your, "Hello % 10d", 23);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_d_9)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "Hello %+10d", 23);
s21_sprintf(test_your, "Hello %+10d", 23);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_d_10)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "Hello %+10d", -23);
s21_sprintf(test_your, "Hello %+10d", -23);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_d_11)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "Hello % 10d", -23);
s21_sprintf(test_your, "Hello % 10d", -23);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_1)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "Hello %d %f", 5, -23.0);
s21_sprintf(test_your, "Hello %d %f", 5, -23.0);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_2)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "Hello %s %f", "abc", -23.0);
s21_sprintf(test_your, "Hello %s %f", "abc", -23.0);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_3)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "Hel%ulo %s %f", 100, "abc", -23.0);
s21_sprintf(test_your, "Hel%ulo %s %f", 100, "abc", -23.0);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_4)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "Hello %s %.3f", "abc", -23.0000001);
s21_sprintf(test_your, "Hello %s %.3f", "abc", -23.0000001);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_5)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "Hello %s %.7f", "abc", -23.999999);
s21_sprintf(test_your, "Hello %s %.7f", "abc", -23.999999);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_6)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "Hello %s %.3f", "abc", -23.999999);
s21_sprintf(test_your, "Hello %s %.3f", "abc", -23.999999);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_7)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "H%ldello %s", 1234567890123456789, "abcdefghtabcdefghtabcdefghtabcdefghtabcdefghtabcdefght");
s21_sprintf(test_your, "H%ldello %s", 1234567890123456789, "abcdefghtabcdefghtabcdefghtabcdefghtabcdefghtabcdefght");
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_8)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "H%uello %s", 123456789, "abcdefghtabcdefghtabcdefghtabcdefghtabcdefghtabcdefght");
s21_sprintf(test_your, "H%uello %s", 123456789, "abcdefghtabcdefghtabcdefghtabcdefghtabcdefghtabcdefght");
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_9)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "saeflkahj%lfdslkj", 1234.0);
s21_sprintf(test_your, "saeflkahj%lfdslkj", 1234.0);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_12)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "saeflkahj% 10.12f dslkj", 0.235300);
s21_sprintf(test_your, "saeflkahj% 10.12f dslkj", 0.235300);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_13)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "saeflkahj% 10.12f dslkj", -4353.235300);
s21_sprintf(test_your, "saeflkahj% 10.12f dslkj", -4353.235300);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_14)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "saeflkahj%-.12f dslkj", 4353.235300);
s21_sprintf(test_your, "saeflkahj%-.12f dslkj", 4353.235300);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_15)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "saeflkahj%-.12f dslkj", -4353.235300);
s21_sprintf(test_your, "saeflkahj%-.12f dslkj", -4353.235300);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_16)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "saeflkahj%-f dslkj", -4353.235300);
s21_sprintf(test_your, "saeflkahj%-f dslkj", -4353.235300);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_17)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "saeflkahj%-.12f dslkj", -4353.235300);
s21_sprintf(test_your, "saeflkahj%-.12f dslkj", -4353.235300);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_18)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "saeflkahj%-f dslkj", 0.235300);
s21_sprintf(test_your, "saeflkahj%-f dslkj", 0.235300);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_19)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "saeflkahj%+f dslkj", 0.235300);
s21_sprintf(test_your, "saeflkahj%+f dslkj", 0.235300);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_20)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "saeflkahj% f dslkj", -4353.235300);
s21_sprintf(test_your, "saeflkahj% f dslkj", -4353.235300);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_21)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "saeflkahj% 8f dslkj", -4353.235300);
s21_sprintf(test_your, "saeflkahj% 8f dslkj", -4353.235300);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_22)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "saeflkahj% -f dslkj", 4353.235300);
s21_sprintf(test_your, "saeflkahj% -f dslkj", 4353.235300);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_23)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "saeflkahj% -10f dslkj", -0.235300);
s21_sprintf(test_your, "saeflkahj% -10f dslkj", -0.235300);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_24)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "saeflkahj% .10f dslkj", -4353.235300);
s21_sprintf(test_your, "saeflkahj%.10f dslkj", -4353.235300);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_25)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "saeflkahj%.10f dslkj", 13.235300);
s21_sprintf(test_your, "saeflkahj%.10f dslkj", 13.235300);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_26)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "saeflkahj%.f dslkj", 12.235300);
s21_sprintf(test_your, "saeflkahj%.f dslkj", 12.235300);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_27)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "saeflkahj% .f dslkj", 345.235300);
s21_sprintf(test_your, "saeflkahj% .f dslkj", 345.235300);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_28)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "saeflkahj%10.f dslkj", 0.235300);
s21_sprintf(test_your, "saeflkahj%10.f dslkj", 0.235300);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_29)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "saeflkahj%+.f dslkj", -0.235300);
s21_sprintf(test_your, "saeflkahj%+.f dslkj", -0.235300);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_30)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "saeflkahj%-.f dslkj", 20.235300);
s21_sprintf(test_your, "saeflkahj%-.f dslkj", 20.235300);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_31)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "saeflkahj%f dslkj", 0.000000006);
s21_sprintf(test_your, "saeflkahj%f dslkj", 0.000000006);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_32)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "saeflkahj%.f dslkj", 0.000000006);
s21_sprintf(test_your, "saeflkahj%.f dslkj", 0.000000006);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_33)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "saeflkahj%12f dslkj", 0.000000006);
s21_sprintf(test_your, "saeflkahj%12f dslkj", 0.000000006);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_34)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "saeflkahj%.12f dslkj", 0.000000006);
s21_sprintf(test_your, "saeflkahj%.12f dslkj", 0.000000006);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_35)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "saeflkahj%-.12f dslkj", 0.000000006);
s21_sprintf(test_your, "saeflkahj%-.12f dslkj", 0.000000006);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_36)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "saeflkahj%%%%%%%%%% dslkj");
s21_sprintf(test_your, "saeflkahj%%%%%%%%%% dslkj");
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_37)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "saeflkahj%%%%%%%%%%%-.12f dslkj", 0.000000006);
s21_sprintf(test_your, "saeflkahj%%%%%%%%%%%-.12f dslkj", 0.000000006);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_38)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "saeflkahj%s dslkj", "0.000000006");
s21_sprintf(test_your, "saeflkahj%s dslkj", "0.000000006");
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_39)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "saeflkahjdslkj%s", "^&*(=...%");
s21_sprintf(test_your, "saeflkahjdslkj%s", "^&*(=...%");
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_40)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "%ssaeflkahj dslkj", "^&*(=...%");
s21_sprintf(test_your, "%ssaeflkahj dslkj", "^&*(=...%");
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_41)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "%ssaeflkahj%sdslkj%s", "^&*(=...%", "jk", "");
s21_sprintf(test_your, "%ssaeflkahj%sdslkj%s", "^&*(=...%", "jk", "");
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_42)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "%ssaeflkahj%sdslkj%s", "", "", " ");
s21_sprintf(test_your, "%ssaeflkahj%sdslkj%s", "", "", " ");
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_43)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "%-ssaeflkahj%1sdslkj%s", "^&*(=...%", "jk", "");
s21_sprintf(test_your, "%-ssaeflkahj%1sdslkj%s", "^&*(=...%", "jk", "");
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_44)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "%3ssaeflkahj%1sdslkj%10s", "^&*(=...%", " ", "");
s21_sprintf(test_your, "%3ssaeflkahj%1sdslkj%10s", "^&*(=...%", " ", "");
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(int_sprintf_pr_1)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "Hello %%"), s21_sprintf(test_your, "Hello %%"));

}
END_TEST

START_TEST(int_sprintf_pr_2)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "Hello 2022 World"),s21_sprintf(test_your, "Hello 2022 World"));

}
END_TEST

START_TEST(int_sprintf_c_1)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "Hello %c", 'W'), s21_sprintf(test_your, "Hello %c", 'W'));

}
END_TEST

START_TEST(int_sprintf_c_2)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "Hello %-5c", 'W'), s21_sprintf(test_your, "Hello %-5c", 'W'));

}
END_TEST

START_TEST(int_sprintf_c_3)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "Hello %5c", 'W'), s21_sprintf(test_your, "Hello %5c", 'W'));

}
END_TEST

START_TEST(int_sprintf_c_4)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "Hello %-c", 'W'), s21_sprintf(test_your, "Hello %-c", 'W'));

}
END_TEST

START_TEST(int_sprintf_c_5)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "Hello %c", 'W'), s21_sprintf(test_your, "Hello %c", 'W'));

}
END_TEST

START_TEST(int_sprintf_c_6)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "%cHello %c", 's', 'W'), s21_sprintf(test_your, "%cHello %c", 's', 'W'));

}
END_TEST

START_TEST(int_sprintf_c_7)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "He%cllo %-5c", 's', 'W'), s21_sprintf(test_your, "He%cllo %-5c", 's', 'W'));

}
END_TEST

START_TEST(int_sprintf_c_8)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "%5cHello %5c", 's', 'W'), s21_sprintf(test_your, "%5cHello %5c", 's', 'W'));

}
END_TEST

START_TEST(int_sprintf_c_9)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "%-10cHello %-c", 's', 'W'), s21_sprintf(test_your, "%-10cHello %-c", 's', 'W'));

}
END_TEST

START_TEST(int_sprintf_c_10)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "He%%llo %c", 'W'), s21_sprintf(test_your, "He%%llo %c", 'W'));

}
END_TEST

START_TEST(int_sprintf_d_1)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "Hello %d", 23), s21_sprintf(test_your, "Hello %d", 23));

}
END_TEST

START_TEST(int_sprintf_d_3)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "Hello %-6d", 23), s21_sprintf(test_your, "Hello %-6d", 23));

}
END_TEST

START_TEST(int_sprintf_d_4)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "Hello %+d", 23), s21_sprintf(test_your, "Hello %+d", 23));

}
END_TEST

START_TEST(int_sprintf_d_5)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "Hello % d", 23), s21_sprintf(test_your, "Hello % d", 23));

}
END_TEST

START_TEST(int_sprintf_d_6)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "Hello %hd", 23), s21_sprintf(test_your, "Hello %hd", 23));

}
END_TEST

START_TEST(int_sprintf_d_7)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "Hello %ld", 238230000006325000), s21_sprintf(test_your, "Hello %ld", 238230000006325000));

}
END_TEST

START_TEST(int_sprintf_d_8)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "Hello % 10d", 23), s21_sprintf(test_your, "Hello % 10d", 23));

}
END_TEST

START_TEST(int_sprintf_d_9)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "Hello %+10d", 23), s21_sprintf(test_your, "Hello %+10d", 23));

}
END_TEST

START_TEST(int_sprintf_d_10)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "Hello %+10d", -23), s21_sprintf(test_your, "Hello %+10d", -23));

}
END_TEST

START_TEST(int_sprintf_d_11)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "Hello % 10d", -23), s21_sprintf(test_your, "Hello % 10d", -23));

}
END_TEST


START_TEST(int_sprintf_1)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "Hello %d %f", 5, -23.0), s21_sprintf(test_your, "Hello %d %f", 5, -23.0));

}
END_TEST

START_TEST(int_sprintf_2)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "Hello %s %f", "abc", -23.0), s21_sprintf(test_your, "Hello %s %f", "abc", -23.0));

}
END_TEST

START_TEST(int_sprintf_3)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "Hel%ulo %s %f", 100, "abc", -23.0), s21_sprintf(test_your, "Hel%ulo %s %f", 100, "abc", -23.0));

}
END_TEST

START_TEST(int_sprintf_4)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "Hello %s %.3f", "abc", -23.0000001), s21_sprintf(test_your, "Hello %s %.3f", "abc", -23.0000001));

}
END_TEST

START_TEST(int_sprintf_5)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "Hello %s %.7f", "abc", -23.999999), s21_sprintf(test_your, "Hello %s %.7f", "abc", -23.999999));

}
END_TEST

START_TEST(int_sprintf_6)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "Hello %s %.3f", "abc", -23.999999), s21_sprintf(test_your, "Hello %s %.3f", "abc", -23.999999));

}
END_TEST

START_TEST(int_sprintf_7)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "H%ldello %s", 1234567890123456789, "abcdefghtabcdefghtabcdefghtabcdefghtabcdefghtabcdefght"), s21_sprintf(test_your, "H%ldello %s", 1234567890123456789, "abcdefghtabcdefghtabcdefghtabcdefghtabcdefghtabcdefght"));

}
END_TEST

START_TEST(int_sprintf_8)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "H%uello %s", 123456789, "abcdefghtabcdefghtabcdefghtabcdefghtabcdefghtabcdefght"), s21_sprintf(test_your, "H%uello %s", 123456789, "abcdefghtabcdefghtabcdefghtabcdefghtabcdefghtabcdefght"));

}
END_TEST

START_TEST(int_sprintf_9)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "saeflkahj%lfdslkj", 1234.0), s21_sprintf(test_your, "saeflkahj%lfdslkj", 1234.0));

}
END_TEST


START_TEST(int_sprintf_12)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "saeflkahj% 10.12f dslkj", 0.235300), s21_sprintf(test_your, "saeflkahj% 10.12f dslkj", 0.235300));

}
END_TEST

START_TEST(int_sprintf_13)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "saeflkahj% 10.12f dslkj", -4353.235300), s21_sprintf(test_your, "saeflkahj% 10.12f dslkj", -4353.235300));

}
END_TEST

START_TEST(int_sprintf_14)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "saeflkahj%-.12f dslkj", 4353.235300), s21_sprintf(test_your, "saeflkahj%-.12f dslkj", 4353.235300));

}
END_TEST

START_TEST(int_sprintf_15)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "saeflkahj%-.12f dslkj", -4353.235300), s21_sprintf(test_your, "saeflkahj%-.12f dslkj", -4353.235300));

}
END_TEST

START_TEST(int_sprintf_16)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "saeflkahj%-f dslkj", -4353.235300), s21_sprintf(test_your, "saeflkahj%-f dslkj", -4353.235300));

}
END_TEST

START_TEST(int_sprintf_17)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "saeflkahj%-.12f dslkj", -4353.235300), s21_sprintf(test_your, "saeflkahj%-.12f dslkj", -4353.235300));

}
END_TEST

START_TEST(int_sprintf_18)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "saeflkahj%-f dslkj", 0.235300), s21_sprintf(test_your, "saeflkahj%-f dslkj", 0.235300));

}
END_TEST

START_TEST(int_sprintf_19)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "saeflkahj%+f dslkj", 0.235300), s21_sprintf(test_your, "saeflkahj%+f dslkj", 0.235300));

}
END_TEST

START_TEST(int_sprintf_20)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "saeflkahj% f dslkj", -4353.235300), s21_sprintf(test_your, "saeflkahj% f dslkj", -4353.235300));

}
END_TEST

START_TEST(int_sprintf_21)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "saeflkahj% 8f dslkj", -4353.235300), s21_sprintf(test_your, "saeflkahj% 8f dslkj", -4353.235300));

}
END_TEST

START_TEST(int_sprintf_22)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "%s%s%s%s%s%ssaeflkahj% 8f dslkj", "ds", " ", " ", "0", "+", "9999999", -4353.235300), s21_sprintf(test_your, "%s%s%s%s%s%ssaeflkahj% 8f dslkj", "ds", " ", " ", "0", "+", "9999999", -4353.235300));

}
END_TEST


START_TEST(ssprintf_222)
{
char str1[1024] = "";
s21_sprintf(str1, "Hola %8d", 34);
char str2[1024] = "";
sprintf(str2, "Hola %8d", 34);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(ssprintf_223)
{
char str1[1024] = "";
s21_sprintf(str1, "Hola %-8d", 34);
char str2[1024] = "";
sprintf(str2, "Hola %-8d", 34);
ck_assert_str_eq(str1, str2);

}
END_TEST


START_TEST(ssprintf_225)
{
char str1[1024] = "";
s21_sprintf(str1, "Hola %18d", 34);
char str2[1024] = "";
sprintf(str2, "Hola %18d", 34);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(ssprintf_226)
{
char str1[1024] = "";
s21_sprintf(str1, "Hola %-18d", 34);
char str2[1024] = "";
sprintf(str2, "Hola %-18d", 34);
ck_assert_str_eq(str1, str2);

}
END_TEST


START_TEST(ssprintf_228)
{
char str1[1024] = "";
s21_sprintf(str1, "Hola %-2d", 34423342);
char str2[1024] = "";
sprintf(str2, "Hola %-2d", 34423342);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(ssprintf_229)
{
char str1[1024] = "";
s21_sprintf(str1, "Hola %9s", "Mundo");
char str2[1024] = "";
sprintf(str2, "Hola %9s", "Mundo");
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(ssprintf_2210)
{
char str1[1024] = "";
s21_sprintf(str1, "Hola %-9s", "Mundo");
char str2[1024] = "";
sprintf(str2, "Hola %-9s", "Mundo");
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(ssprintf_2211)
{
char str1[1024] = "";
s21_sprintf(str1, "Hola %2s", "Mundo");
char str2[1024] = "";
sprintf(str2, "Hola %2s", "Mundo");
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(ssprintf_2212)
{
char str1[1024] = "";
s21_sprintf(str1, "Hola %-2s", "Mundo");
char str2[1024] = "";
sprintf(str2, "Hola %-2s", "Mundo");
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(ssprintf_2213)
{
char str1[1024] = "";
s21_sprintf(str1, "Hola %12s", "Mundo");
char str2[1024] = "";
sprintf(str2, "Hola %12s", "Mundo");
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(ssprintf_2214)
{
char str1[1024] = "";
s21_sprintf(str1, "Hola %-12s", "Mundo");
char str2[1024] = "";
sprintf(str2, "Hola %-12s", "Mundo");
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(ssprintf_231)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "Hola %d", 7);
sprintf(str1, "Hola %d", 7);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(ssprintf_232)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "%d:%d:%d", 7, 4, 0);
sprintf(str1, "%d:%d:%d", 7, 4, 0);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(ssprintf_233)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "MAX %d", INT_MAX);
sprintf(str1, "MAX %d", INT_MAX);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(ssprintf_234)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "MIN %d", INT_MIN);
sprintf(str1, "MIN %d", INT_MIN);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(ssprintf_235)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "Hola %i", 3534555);
sprintf(str1, "Hola %i", 3534555);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(ssprintf_236)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "Hola %+d", 3534555);
sprintf(str1, "Hola %+d", 3534555);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(ssprintf_237)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "padding '%5d'", 7);
sprintf(str1, "padding '%5d'", 7);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(ssprintf_238)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "padding '%5d'", INT_MAX);
sprintf(str1, "padding '%5d'", INT_MAX);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(ssprintf_239)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "padding '%5d'", INT_MIN);
sprintf(str1, "padding '%5d'", INT_MIN);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(ssprintf_2313)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "padding '%-5d'", 7);
sprintf(str1, "padding '%-5d'", 7);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(ssprintf_2314)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "padding '%-5d'", INT_MAX);
sprintf(str1, "padding '%-5d'", INT_MAX);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(ssprintf_2315)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "padding '%-5d'", INT_MIN);
sprintf(str1, "padding '%-5d'", INT_MIN);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(ssprintf_2316)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%.5d'", 7);
sprintf(str1, "precision '%.5d'", 7);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(ssprintf_2317)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%.5d'", INT_MAX);
sprintf(str1, "precision '%.5d'", INT_MAX);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(ssprintf_2318)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%.5d'", INT_MIN);
sprintf(str1, "precision '%.5d'", INT_MIN);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(ssprintf_2319)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%3.5d'", 7);
sprintf(str1, "precision '%3.5d'", 7);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(ssprintf_2320)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%3.5d'", INT_MAX);
sprintf(str1, "precision '%3.5d'", INT_MAX);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(ssprintf_2321)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%3.5d'", INT_MIN);
sprintf(str1, "precision '%3.5d'", INT_MIN);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(ssprintf_2322)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%-3.5d'", 7);
sprintf(str1, "precision '%-3.5d'", 7);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2323)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%-3.5d'", INT_MAX);
sprintf(str1, "precision '%-3.5d'", INT_MAX);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2324)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%-3.5d'", INT_MIN);
sprintf(str1, "precision '%-3.5d'", INT_MIN);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2325)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "Hola %u", 7);
sprintf(str1, "Hola %u", 7);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2326)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "%u:%u:%u", 7, 4, 0);
sprintf(str1, "%u:%u:%u", 7, 4, 0);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2327)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "MAX %u", UINT_MAX);
sprintf(str1, "MAX %u", UINT_MAX);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2328)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "MIN %u", 0);
sprintf(str1, "MIN %u", 0);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2329)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "padding '%5u'", 7);
sprintf(str1, "padding '%5u'", 7);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2330)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "padding '%5u'", UINT_MAX);
sprintf(str1, "padding '%5u'", UINT_MAX);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2331)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "padding '%5u'", 0);
sprintf(str1, "padding '%5u'", 0);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2332)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "padding '%-5u'", 7);
sprintf(str1, "padding '%-5u'", 7);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2333)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "padding '%-5u'", UINT_MAX);
sprintf(str1, "padding '%-5u'", UINT_MAX);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2334)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "padding '%-5u'", 0);
sprintf(str1, "padding '%-5u'", 0);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2335)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%.5u'", 7);
sprintf(str1, "precision '%.5u'", 7);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2336)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%.5u'", UINT_MAX);
sprintf(str1, "precision '%.5u'", UINT_MAX);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2337)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%.5u'", 0);
sprintf(str1, "precision '%.5u'", 0);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2338)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%3.5u'", 7);
sprintf(str1, "precision '%3.5u'", 7);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2339)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%3.5u'", UINT_MAX);
sprintf(str1, "precision '%3.5u'", UINT_MAX);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2340)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%3.5u'", 0);
sprintf(str1, "precision '%3.5u'", 0);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2341)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%-3.5u'", 7);
sprintf(str1, "precision '%-3.5u'", 7);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2342)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%-3.5u'", UINT_MAX);
sprintf(str1, "precision '%-3.5u'", UINT_MAX);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2343)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%-3.5u'", 0);
sprintf(str1, "precision '%-3.5u'", 0);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2344)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "Hola %ld", 3534535547l);
sprintf(str1, "Hola %ld", 3534535547l);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2345)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "%ld:%ld:%ld", 7l, 34543245324l, 0l);
sprintf(str1, "%ld:%ld:%ld", 7l, 34543245324l, 0l);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2346)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "%ld", -5435432542l);
sprintf(str1, "%ld", -5435432542l);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2347)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "MAX %ld", LONG_MAX);
sprintf(str1, "MAX %ld", LONG_MAX);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2348)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "MIN %ld", LONG_MIN);
sprintf(str1, "MIN %ld", LONG_MIN);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2349)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "Hola %li", 3534535547l);
sprintf(str1, "Hola %li", 3534535547l);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2350)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "padding '%5ld'", 72342l);
sprintf(str1, "padding '%5ld'", 72342l);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2351)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "padding '%5ld'", LONG_MAX);
sprintf(str1, "padding '%5ld'", LONG_MAX);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2352)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "padding '%5ld'", LONG_MIN);
sprintf(str1, "padding '%5ld'", LONG_MIN);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2356)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "padding '%-5ld'", 742343l);
sprintf(str1, "padding '%-5ld'", 742343l);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2357)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "padding '%-5ld'", LONG_MAX);
sprintf(str1, "padding '%-5ld'", LONG_MAX);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2358)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "padding '%-5ld'", LONG_MIN);
sprintf(str1, "padding '%-5ld'", LONG_MIN);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2359)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%.5ld'", 754354l);
sprintf(str1, "precision '%.5ld'", 754354l);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2360)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%.5ld'", LONG_MAX);
sprintf(str1, "precision '%.5ld'", LONG_MAX);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2361)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%.5ld'", LONG_MIN);
sprintf(str1, "precision '%.5ld'", LONG_MIN);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2362)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%3.5ld'", 7343l);
sprintf(str1, "precision '%3.5ld'", 7343l);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2363)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%3.5ld'", LONG_MAX);
sprintf(str1, "precision '%3.5ld'", LONG_MAX);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2364)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%3.5ld'", LONG_MIN);
sprintf(str1, "precision '%3.5ld'", LONG_MIN);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2365)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%-3.5ld'", 754354l);
sprintf(str1, "precision '%-3.5ld'", 754354l);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2366)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%-3.5ld'", LONG_MAX);
sprintf(str1, "precision '%-3.5ld'", LONG_MAX);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2367)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%-3.5ld'", LONG_MIN);
sprintf(str1, "precision '%-3.5ld'", LONG_MIN);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2368)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "Hola %lu", 7l);
sprintf(str1, "Hola %lu", 7l);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2369)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "%lu:%lu:%lu", 7l, 4l, 0l);
sprintf(str1, "%lu:%lu:%lu", 7l, 4l, 0l);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2370)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "MAX %lu", ULONG_MAX);
sprintf(str1, "MAX %lu", ULONG_MAX);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2371)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "MIN %lu", 0l);
sprintf(str1, "MIN %lu", 0l);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2372)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "padding '%5lu'", 7l);
sprintf(str1, "padding '%5lu'", 7l);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2373)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "padding '%5lu'", ULONG_MAX);
sprintf(str1, "padding '%5lu'", ULONG_MAX);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2374)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "padding '%5lu'", 0l);
sprintf(str1, "padding '%5lu'", 0l);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2375)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "padding '%-5lu'", 7l);
sprintf(str1, "padding '%-5lu'", 7l);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2376)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "padding '%-5lu'", ULONG_MAX);
sprintf(str1, "padding '%-5lu'", ULONG_MAX);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2377)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "padding '%-5lu'", 0l);
sprintf(str1, "padding '%-5lu'", 0l);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2378)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%.5lu'", 7l);
sprintf(str1, "precision '%.5lu'", 7l);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2379)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%.5lu'", ULONG_MAX);
sprintf(str1, "precision '%.5lu'", ULONG_MAX);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2380)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%.5lu'", 0l);
sprintf(str1, "precision '%.5lu'", 0l);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2381)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%3.5lu'", 7l);
sprintf(str1, "precision '%3.5lu'", 7l);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2382)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%3.5lu'", ULONG_MAX);
sprintf(str1, "precision '%3.5lu'", ULONG_MAX);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2383)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%3.5lu'", 0l);
sprintf(str1, "precision '%3.5lu'", 0l);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2384)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%-3.5lu'", 7l);
sprintf(str1, "precision '%-3.5lu'", 7l);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2385)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%-3.5lu'", ULONG_MAX);
sprintf(str1, "precision '%-3.5lu'", ULONG_MAX);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2386)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%-3.5lu'", 0l);
sprintf(str1, "precision '%-3.5lu'", 0l);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2387)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "%.5f", 3.5);
sprintf(str1, "%.5f", 3.5);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2388)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "%.5f", -3.5);
sprintf(str1, "%.5f", -3.5);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2391)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "%.5f", 0.0);
sprintf(str1, "%.5f", 0.0);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2392)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "%.5f", 3.5458730589043);
sprintf(str1, "%.5f", 3.5458730589043);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2393)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "%.5f", -3.5458730589043);
sprintf(str1, "%.5f", -3.5458730589043);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2394)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "%10.4f", 3.5458730589043);
sprintf(str1, "%10.4f", 3.5458730589043);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2395)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "%10.4f", -3.5458730589043);
sprintf(str1, "%10.4f", -3.5458730589043);
ck_assert_str_eq(str1, str2);

}
END_TEST


START_TEST(sprintf_2401)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "%10.5d", INT_MIN);
sprintf(str1, "%10.5d", INT_MIN);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2402)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "%10.5d", INT_MAX);
sprintf(str1, "%10.5d", INT_MAX);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2403)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "%10.5ld", LONG_MIN);
sprintf(str1, "%10.5ld", LONG_MIN);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2404)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "%10.5ld", LONG_MAX);
sprintf(str1, "%10.5ld", LONG_MAX);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2405)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "%10.5lu", ULONG_MAX);
sprintf(str1, "%10.5lu", ULONG_MAX);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_070501)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "%f", 6.1);
sprintf(str1, "%f", 6.1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_070502)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "%f", 06.1);
sprintf(str1, "%f", 06.1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_070503)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "%f", 6.01);
sprintf(str1, "%f", 6.01);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_070504)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "%.f", 6.01);
sprintf(str1, "%.f", 6.01);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_070505)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "%.0f", 6.01);
sprintf(str1, "%.0f", 6.01);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_070506)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "%.1f", 6.01);
sprintf(str1, "%.1f", 6.01);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_070507)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "%f", 1.23e+07);
sprintf(str1, "%f", 1.23e+07);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_070508)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "%f", 1234561e+00);
sprintf(str1, "%f", 1234561e+00);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_070509)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "%f", 1234561e+07);
sprintf(str1, "%f", 1234561e+07);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_070510)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "%.9f", 1000000000.00);
sprintf(str1, "%.9f", 1000000000.00);
ck_assert_str_eq(str1, str2);

}
END_TEST




START_TEST(sprintf_070513)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "%3.f", 0.0);
sprintf(str1, "%3.f", 0.0);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2405x)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, " - %d - [%%h%%] - l.%d\n" - 2, __LINE__);
sprintf(str1, " - %d - [%%h%%] - l.%d\n" - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2406x)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, " - %d - [%%3.15h%%] - l.%d\n" - 2, __LINE__);
sprintf(str1, " - %d - [%%3.15h%%] - l.%d\n" - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2408)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, " - %d - [%%03.15h%%] - l.%d\n" - 2, __LINE__);
sprintf(str1, " - %d - [%%03.15h%%] - l.%d\n" - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2409)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, " - %d - [%%#0%%] - l.%d\n" - 2, __LINE__);
sprintf(str1, " - %d - [%%#0%%] - l.%d\n" - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2410)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, " - %d - [%%#015.20%%] - l.%d\n" - 2, __LINE__);
sprintf(str1, " - %d - [%%#015.20%%] - l.%d\n" - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2411)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, " - %d - [%%#0- 15.5%%] - l.%d\n" - 2, __LINE__);
sprintf(str1, " - %d - [%%#0- 15.5%%] - l.%d\n" - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2412)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, " - %d - [%%#0-+ 3.2%%] - l.%d\n" - 2, __LINE__);
sprintf(str1, " - %d - [%%#0-+ 3.2%%] - l.%d\n" - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2413)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, " - %d - [%%#0+ 3.2%%] - l.%d\n" - 2, __LINE__);
sprintf(str1, " - %d - [%%#0+ 3.2%%] - l.%d\n" - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2414)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, " - %d - [%%#0 15.5%%] - l.%d\n" - 2, __LINE__);
sprintf(str1, " - %d - [%%#0 15.5%%] - l.%d\n" - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2415)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, " - %d - [%%#-3%%] - l.%d\n" - 2, __LINE__);
sprintf(str1, " - %d - [%%#-3%%] - l.%d\n" - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2416)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, " - %d - [%%#-15.0%%] - l.%d\n" - 2, __LINE__);
sprintf(str1, " - %d - [%%#-15.0%%] - l.%d\n" - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2417)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, " - %d - [%%#-+15.0%%] - l.%d\n" - 2, __LINE__);
sprintf(str1, " - %d - [%%#-+15.0%%] - l.%d\n" - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2418)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, " - %d - [%%#- 15.0%%] - l.%d\n" - 2, __LINE__);
sprintf(str1, " - %d - [%%#- 15.0%%] - l.%d\n" - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2419)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, " - %d - [%%#-+ 15.0%%] - l.%d\n" - 2, __LINE__);
sprintf(str1, " - %d - [%%#-+ 15.0%%] - l.%d\n" - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2420)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, " - %d - [%%#-+ 15.20%%] - l.%d\n" - 2, __LINE__);
sprintf(str1, " - %d - [%%#-+ 15.20%%] - l.%d\n" - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2421)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, " - %d - [%%#+%%] - l.%d\n" - 2, __LINE__);
sprintf(str1, " - %d - [%%#+%%] - l.%d\n" - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2423)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, " - %d - [%%#+15%%] - l.%d\n" - 2, __LINE__);
sprintf(str1, " - %d - [%%#+15%%] - l.%d\n" - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2427)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, " - %d - [%%d] - l.%d\n" - 2, __LINE__);
sprintf(str1, " - %d - [%%d] - l.%d\n" - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2428)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "[%d]", 0);
sprintf(str1, "[%d]", 0);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2429)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, " - %d - [%%15.20d] - l.%d\n" - 2, __LINE__);
sprintf(str1, " - %d - [%%15.20d] - l.%d\n" - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2430)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "[%15.20d]", 0);
sprintf(str1, "[%15.20d]", 0);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2431)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, " - %d - [%%015.20d] - l.%d\n" - 2, __LINE__);
sprintf(str1, " - %d - [%%015.20d] - l.%d\n" - 2, __LINE__);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2433)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%f'", 6.1);
sprintf(str1, "precision '%f'", 6.1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2434)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, " - %d - [%%f] - l.%d\n" - 2, __LINE__);
sprintf(str1, " - %d - [%%f] - l.%d\n" - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2436)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, " - %d - [%%3.15f] - l.%d\n" - 2, __LINE__);
sprintf(str1, " - %d - [%%3.15f] - l.%d\n" - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2708)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%d] - l.%d\n, [%d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%d] - l.%d\n, [%d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2709)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%d] - l.%d\n, [%d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%d] - l.%d\n, [%d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2710)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%d] - l.%d\n, [%d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%d] - l.%d\n, [%d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2711)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3d] - l.%d\n, [%3d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%3d] - l.%d\n, [%3d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2712)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3d] - l.%d\n, [%3d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%3d] - l.%d\n, [%3d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2713)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3d] - l.%d\n, [%3d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%3d] - l.%d\n, [%3d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2714)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.0d] - l.%d\n, [%3.0d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.0d] - l.%d\n, [%3.0d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2715)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.0d] - l.%d\n, [%3.0d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.0d] - l.%d\n, [%3.0d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2716)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.0d] - l.%d\n, [%3.0d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.0d] - l.%d\n, [%3.0d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2717)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.2d] - l.%d\n, [%3.2d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.2d] - l.%d\n, [%3.2d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2718)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.2d] - l.%d\n, [%3.2d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.2d] - l.%d\n, [%3.2d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2719)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.2d] - l.%d\n, [%3.2d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.2d] - l.%d\n, [%3.2d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2720)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.5d] - l.%d\n, [%3.5d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.5d] - l.%d\n, [%3.5d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2721)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.5d] - l.%d\n, [%3.5d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.5d] - l.%d\n, [%3.5d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2722)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.5d] - l.%d\n, [%3.5d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.5d] - l.%d\n, [%3.5d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2723)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.15d] - l.%d\n, [%3.15d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.15d] - l.%d\n, [%3.15d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2724)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.15d] - l.%d\n, [%3.15d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.15d] - l.%d\n, [%3.15d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2725)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.15d] - l.%d\n, [%3.15d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.15d] - l.%d\n, [%3.15d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2726)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15d] - l.%d\n, [%15d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%15d] - l.%d\n, [%15d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2727)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15d] - l.%d\n, [%15d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%15d] - l.%d\n, [%15d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2728)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15d] - l.%d\n, [%15d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%15d] - l.%d\n, [%15d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2729)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.0d] - l.%d\n, [%15.0d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.0d] - l.%d\n, [%15.0d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2730)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.0d] - l.%d\n, [%15.0d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.0d] - l.%d\n, [%15.0d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2731)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.0d] - l.%d\n, [%15.0d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.0d] - l.%d\n, [%15.0d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2732)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.5d] - l.%d\n, [%15.5d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.5d] - l.%d\n, [%15.5d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2733)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.5d] - l.%d\n, [%15.5d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.5d] - l.%d\n, [%15.5d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2734)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.5d] - l.%d\n, [%15.5d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.5d] - l.%d\n, [%15.5d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2735)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.20d] - l.%d\n, [%15.20d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.20d] - l.%d\n, [%15.20d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2736)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.20d] - l.%d\n, [%15.20d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.20d] - l.%d\n, [%15.20d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2737)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.20d] - l.%d\n, [%15.20d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.20d] - l.%d\n, [%15.20d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2738)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-d] - l.%d\n, [%-d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-d] - l.%d\n, [%-d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2739)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3d] - l.%d\n, [%-3d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3d] - l.%d\n, [%-3d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2740)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.0d] - l.%d\n, [%-3.0d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.0d] - l.%d\n, [%-3.0d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2741)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.2d] - l.%d\n, [%-3.2d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.2d] - l.%d\n, [%-3.2d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2742)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.5d] - l.%d\n, [%-3.5d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.5d] - l.%d\n, [%-3.5d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2743)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.5d] - l.%d\n, [%-3.5d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.5d] - l.%d\n, [%-3.5d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2744)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.15d] - l.%d\n, [%-3.15d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.15d] - l.%d\n, [%-3.15d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2745)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.15d] - l.%d\n, [%-3.15d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.15d] - l.%d\n, [%-3.15d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2746)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.15d] - l.%d\n, [%-3.15d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.15d] - l.%d\n, [%-3.15d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2747)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+d] - l.%d\n, [%+d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%+d] - l.%d\n, [%+d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2748)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+d] - l.%d\n, [%+d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%+d] - l.%d\n, [%+d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2749)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+d] - l.%d\n, [%+d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%+d] - l.%d\n, [%+d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2750)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+3d] - l.%d\n, [%+3d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%+3d] - l.%d\n, [%+3d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2751)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+3d] - l.%d\n, [%+3d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%+3d] - l.%d\n, [%+3d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2752)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+3d] - l.%d\n, [%+3d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%+3d] - l.%d\n, [%+3d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2753)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+3d] - l.%d\n, [%+3d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%+3d] - l.%d\n, [%+3d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2754)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+3d] - l.%d\n, [%+3d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%+3d] - l.%d\n, [%+3d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2755)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+3d] - l.%d\n, [%+3d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%+3d] - l.%d\n, [%+3d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2756)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+3.5d] - l.%d\n, [%+3.5d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%+3.5d] - l.%d\n, [%+3.5d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2757)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+3.5d] - l.%d\n, [%+3.5d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%+3.5d] - l.%d\n, [%+3.5d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2758)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+3.5d] - l.%d\n, [%+3.5d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%+3.5d] - l.%d\n, [%+3.5d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2759)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+3.15d] - l.%d\n, [%+3.15d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%+3.15d] - l.%d\n, [%+3.15d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2760)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+3.15d] - l.%d\n, [%+3.15d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%+3.15d] - l.%d\n, [%+3.15d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2761)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+3.15d] - l.%d\n, [%+3.15d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%+3.15d] - l.%d\n, [%+3.15d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2762)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+15d] - l.%d\n, [%+15d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%+15d] - l.%d\n, [%+15d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2763)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+15d] - l.%d\n, [%+15d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%+15d] - l.%d\n, [%+15d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2764)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+15d] - l.%d\n, [%+15d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%+15d] - l.%d\n, [%+15d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2765)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+15.0d] - l.%d\n, [%+15.0d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%+15.0d] - l.%d\n, [%+15.0d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2766)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+15.0d] - l.%d\n, [%+15.0d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%+15.0d] - l.%d\n, [%+15.0d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2767)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+15.0d] - l.%d\n, [%+15.0d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%+15.0d] - l.%d\n, [%+15.0d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2768)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+15.5d] - l.%d\n, [%+15.5d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%+15.5d] - l.%d\n, [%+15.5d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2769)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+15.5d] - l.%d\n, [%+15.5d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%+15.5d] - l.%d\n, [%+15.5d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2770)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+15.5d] - l.%d\n, [%+15.5d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%+15.5d] - l.%d\n, [%+15.5d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2771)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+15.20d] - l.%d\n, [%+15.20d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%+15.20d] - l.%d\n, [%+15.20d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2772)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+15.20d] - l.%d\n, [%+15.20d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%+15.20d] - l.%d\n, [%+15.20d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2773)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+15.20d] - l.%d\n, [%+15.20d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%+15.20d] - l.%d\n, [%+15.20d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2774)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% d] - l.%d\n, [% d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%% d] - l.%d\n, [% d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2775)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% d] - l.%d\n, [% d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%% d] - l.%d\n, [% d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2776)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% d] - l.%d\n, [% d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%% d] - l.%d\n, [% d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2777)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 3d] - l.%d\n, [% 3d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%% 3d] - l.%d\n, [% 3d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2778)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 3d] - l.%d\n, [% 3d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%% 3d] - l.%d\n, [% 3d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2779)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 3d] - l.%d\n, [% 3d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%% 3d] - l.%d\n, [% 3d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2780)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, " - %d - [%% 3.0d] - l.%d\n, [% 3.0d]", 0, - 2, __LINE__);
sprintf(str1, " - %d - [%% 3.0d] - l.%d\n, [% 3.0d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2781)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, " - %d - [%% 3.0d] - l.%d\n, [% 3.0d]", INT_MIN, - 2, __LINE__);
sprintf(str1, " - %d - [%% 3.0d] - l.%d\n, [% 3.0d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2782)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, " - %d - [%% 3.0d] - l.%d\n, [% 3.0d]", INT_MAX, - 2, __LINE__);
sprintf(str1, " - %d - [%% 3.0d] - l.%d\n, [% 3.0d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2783)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 3.2d] - l.%d\n, [% 3.2d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%% 3.2d] - l.%d\n, [% 3.2d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2784)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 3.2d] - l.%d\n, [% 3.2d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%% 3.2d] - l.%d\n, [% 3.2d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2785)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 3.2d] - l.%d\n, [% 3.2d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%% 3.2d] - l.%d\n, [% 3.2d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2786)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 3.5d] - l.%d\n, [% 3.5d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%% 3.5d] - l.%d\n, [% 3.5d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2786_2)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 3.5d] - l.%d\n, [% 3.5d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%% 3.5d] - l.%d\n, [% 3.5d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2787)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 3.5d] - l.%d\n, [% 3.5d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%% 3.5d] - l.%d\n, [% 3.5d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2788)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 3.15d] - l.%d\n, [% 3.15d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%% 3.15d] - l.%d\n, [% 3.15d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2789)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 3.15d] - l.%d\n, [% 3.15d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%% 3.15d] - l.%d\n, [% 3.15d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2790)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 3.15d] - l.%d\n, [% 3.15d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%% 3.15d] - l.%d\n, [% 3.15d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2791)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 15d] - l.%d\n, [% 15d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%% 15d] - l.%d\n, [% 15d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2792)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 15d] - l.%d\n, [% 15d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%% 15d] - l.%d\n, [% 15d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2793)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 15d] - l.%d\n, [% 15d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%% 15d] - l.%d\n, [% 15d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2794)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 15.0d] - l.%d\n, [% 15.0d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%% 15.0d] - l.%d\n, [% 15.0d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2795)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 15.0d] - l.%d\n, [% 15.0d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%% 15.0d] - l.%d\n, [% 15.0d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2796)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 15.0d] - l.%d\n, [% 15.0d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%% 15.0d] - l.%d\n, [% 15.0d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2797)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 15.5d] - l.%d\n, [% 15.5d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%% 15.5d] - l.%d\n, [% 15.5d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2798)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 15.5d] - l.%d\n, [% 15.5d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%% 15.5d] - l.%d\n, [% 15.5d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2799)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 15.5d] - l.%d\n, [% 15.5d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%% 15.5d] - l.%d\n, [% 15.5d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2800)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 15.20d] - l.%d\n, [% 15.20d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%% 15.20d] - l.%d\n, [% 15.20d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2801)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 15.20d] - l.%d\n, [% 15.20d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%% 15.20d] - l.%d\n, [% 15.20d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2802)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 15.20d] - l.%d\n, [% 15.20d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%% 15.20d] - l.%d\n, [% 15.20d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2803)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%hd] - l.%d\n, [%hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%hd] - l.%d\n, [%hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2804)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%hd] - l.%d\n, [%hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%hd] - l.%d\n, [%hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2805)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%hd] - l.%d\n, [%hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%hd] - l.%d\n, [%hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2806)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3hd] - l.%d\n, [%3hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%3hd] - l.%d\n, [%3hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2807)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3hd] - l.%d\n, [%3hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%3hd] - l.%d\n, [%3hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2807_2)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3hd] - l.%d\n, [%3hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%3hd] - l.%d\n, [%3hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2808)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.0hd] - l.%d\n, [%3.0hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.0hd] - l.%d\n, [%3.0hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2809)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.0hd] - l.%d\n, [%3.0hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.0hd] - l.%d\n, [%3.0hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2810)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.0hd] - l.%d\n, [%3.0hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.0hd] - l.%d\n, [%3.0hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2811)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.2hd] - l.%d\n, [%3.2hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.2hd] - l.%d\n, [%3.2hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2812)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.2hd] - l.%d\n, [%3.2hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.2hd] - l.%d\n, [%3.2hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2813)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.2hd] - l.%d\n, [%3.2hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.2hd] - l.%d\n, [%3.2hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2814)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.5hd] - l.%d\n, [%3.5hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.5hd] - l.%d\n, [%3.5hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2815)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.5hd] - l.%d\n, [%3.5hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.5hd] - l.%d\n, [%3.5hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2816)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.5hd] - l.%d\n, [%3.5hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.5hd] - l.%d\n, [%3.5hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2817)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.15hd] - l.%d\n, [%3.15hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.15hd] - l.%d\n, [%3.15hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2818)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.15hd] - l.%d\n, [%3.15hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.15hd] - l.%d\n, [%3.15hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2819)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.15hd] - l.%d\n, [%3.15hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.15hd] - l.%d\n, [%3.15hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2820)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15hd] - l.%d\n, [%15hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%15hd] - l.%d\n, [%15hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2821)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15hd] - l.%d\n, [%15hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%15hd] - l.%d\n, [%15hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2822)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15hd] - l.%d\n, [%15hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%15hd] - l.%d\n, [%15hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2823)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.0hd] - l.%d\n, [%15.0hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.0hd] - l.%d\n, [%15.0hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2824)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.0hd] - l.%d\n, [%15.0hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.0hd] - l.%d\n, [%15.0hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2825)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.0hd] - l.%d\n, [%15.0hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.0hd] - l.%d\n, [%15.0hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2826)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.5hd] - l.%d\n, [%15.5hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.5hd] - l.%d\n, [%15.5hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2827)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.5hd] - l.%d\n, [%15.5hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.5hd] - l.%d\n, [%15.5hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2828)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.5hd] - l.%d\n, [%15.5hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.5hd] - l.%d\n, [%15.5hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2829)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.20hd] - l.%d\n, [%15.20hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.20hd] - l.%d\n, [%15.20hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2830)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.20hd] - l.%d\n, [%15.20hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.20hd] - l.%d\n, [%15.20hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2831)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.20hd] - l.%d\n, [%15.20hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.20hd] - l.%d\n, [%15.20hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2832)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-hd] - l.%d\n, [%-hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-hd] - l.%d\n, [%-hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2833)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-hd] - l.%d\n, [%-hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-hd] - l.%d\n, [%-hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2834)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-hd] - l.%d\n, [%-hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-hd] - l.%d\n, [%-hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2835)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3hd] - l.%d\n, [%-3hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3hd] - l.%d\n, [%-3hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2836)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3hd] - l.%d\n, [%-3hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3hd] - l.%d\n, [%-3hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2837)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3hd] - l.%d\n, [%-3hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3hd] - l.%d\n, [%-3hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2838)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.0hd] - l.%d\n, [%-3.0hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.0hd] - l.%d\n, [%-3.0hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2839)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.0hd] - l.%d\n, [%-3.0hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.0hd] - l.%d\n, [%-3.0hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2840)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.0hd] - l.%d\n, [%-3.0hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.0hd] - l.%d\n, [%-3.0hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2841)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.2hd] - l.%d\n, [%-3.2hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.2hd] - l.%d\n, [%-3.2hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2842)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.2hd] - l.%d\n, [%-3.2hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.2hd] - l.%d\n, [%-3.2hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2843)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.2hd] - l.%d\n, [%-3.2hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.2hd] - l.%d\n, [%-3.2hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2844)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.5hd] - l.%d\n, [%-3.5hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.5hd] - l.%d\n, [%-3.5hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2845)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.5hd] - l.%d\n, [%-3.5hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.5hd] - l.%d\n, [%-3.5hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2846)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.5hd] - l.%d\n, [%-3.5hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.5hd] - l.%d\n, [%-3.5hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2847)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.15hd] - l.%d\n, [%-3.15hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.15hd] - l.%d\n, [%-3.15hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2848)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.15hd] - l.%d\n, [%-3.15hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.15hd] - l.%d\n, [%-3.15hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2849)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.15hd] - l.%d\n, [%-3.15hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.15hd] - l.%d\n, [%-3.15hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2850)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+hd] - l.%d\n, [%+hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%+hd] - l.%d\n, [%+hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2851)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+hd] - l.%d\n, [%+hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%+hd] - l.%d\n, [%+hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2852)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+hd] - l.%d\n, [%+hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%+hd] - l.%d\n, [%+hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2853)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+3hd] - l.%d\n, [%+3hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%+3hd] - l.%d\n, [%+3hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2854)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+3hd] - l.%d\n, [%+3hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%+3hd] - l.%d\n, [%+3hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2855)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+3hd] - l.%d\n, [%+3hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%+3hd] - l.%d\n, [%+3hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2856)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+3.0hd] - l.%d\n, [%+3.0hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%+3.0hd] - l.%d\n, [%+3.0hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2857)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+3.0hd] - l.%d\n, [%+3.0hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%+3.0hd] - l.%d\n, [%+3.0hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2858)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+3.0hd] - l.%d\n, [%+3.0hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%+3.0hd] - l.%d\n, [%+3.0hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2859)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+3.5hd] - l.%d\n, [%+3.5hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%+3.5hd] - l.%d\n, [%+3.5hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2860)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+3.5hd] - l.%d\n, [%+3.5hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%+3.5hd] - l.%d\n, [%+3.5hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2861)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+3.5hd] - l.%d\n, [%+3.5hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%+3.5hd] - l.%d\n, [%+3.5hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2862)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+3.15hd] - l.%d\n, [%+3.15hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%+3.15hd] - l.%d\n, [%+3.15hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2863)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+3.15hd] - l.%d\n, [%+3.15hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%+3.15hd] - l.%d\n, [%+3.15hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2864)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+3.15hd] - l.%d\n, [%+3.15hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%+3.15hd] - l.%d\n, [%+3.15hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2865)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+15hd] - l.%d\n, [%+15hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%+15hd] - l.%d\n, [%+15hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2866)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+15hd] - l.%d\n, [%+15hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%+15hd] - l.%d\n, [%+15hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2867)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+15hd] - l.%d\n, [%+15hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%+15hd] - l.%d\n, [%+15hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2868)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+15.0hd] - l.%d\n, [%+15.0hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%+15.0hd] - l.%d\n, [%+15.0hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2869)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+15.0hd] - l.%d\n, [%+15.0hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%+15.0hd] - l.%d\n, [%+15.0hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2870)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+15.0hd] - l.%d\n, [%+15.0hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%+15.0hd] - l.%d\n, [%+15.0hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2871)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+15.5hd] - l.%d\n, [%+15.5hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%+15.5hd] - l.%d\n, [%+15.5hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2872)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+15.5hd] - l.%d\n, [%+15.5hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%+15.5hd] - l.%d\n, [%+15.5hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2873)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+15.5hd] - l.%d\n, [%+15.5hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%+15.5hd] - l.%d\n, [%+15.5hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2874)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+15.20hd] - l.%d\n, [%+15.20hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%+15.20hd] - l.%d\n, [%+15.20hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2875)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+15.20hd] - l.%d\n, [%+15.20hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%+15.20hd] - l.%d\n, [%+15.20hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2876)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+15.20hd] - l.%d\n, [%+15.20hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%+15.20hd] - l.%d\n, [%+15.20hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2877)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% hd] - l.%d\n, [% hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%% hd] - l.%d\n, [% hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2878)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% hd] - l.%d\n, [% hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%% hd] - l.%d\n, [% hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2879)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% hd] - l.%d\n, [% hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%% hd] - l.%d\n, [% hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2880)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 3hd] - l.%d\n, [% 3hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%% 3hd] - l.%d\n, [% 3hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2881)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 3hd] - l.%d\n, [% 3hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%% 3hd] - l.%d\n, [% 3hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2882)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 3hd] - l.%d\n, [% 3hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%% 3hd] - l.%d\n, [% 3hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2883)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 3.0hd] - l.%d\n, [% 3.0hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%% 3.0hd] - l.%d\n, [% 3.0hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2884)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 3.0hd] - l.%d\n, [% 3.0hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%% 3.0hd] - l.%d\n, [% 3.0hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2885)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 3.0hd] - l.%d\n, [% 3.0hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%% 3.0hd] - l.%d\n, [% 3.0hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2886)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 3.2hd] - l.%d\n, [% 3.2hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%% 3.2hd] - l.%d\n, [% 3.2hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2887)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 3.2hd] - l.%d\n, [% 3.2hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%% 3.2hd] - l.%d\n, [% 3.2hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2888)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 3.2hd] - l.%d\n, [% 3.2hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%% 3.2hd] - l.%d\n, [% 3.2hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2889)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 3.5hd] - l.%d\n, [% 3.5hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%% 3.5hd] - l.%d\n, [% 3.5hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2890)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 3.5hd] - l.%d\n, [% 3.5hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%% 3.5hd] - l.%d\n, [% 3.5hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2891)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 3.5hd] - l.%d\n, [% 3.5hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%% 3.5hd] - l.%d\n, [% 3.5hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2892)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 3.15hd] - l.%d\n, [% 3.15hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%% 3.15hd] - l.%d\n, [% 3.15hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2893)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 3.15hd] - l.%d\n, [% 3.15hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%% 3.15hd] - l.%d\n, [% 3.15hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2894)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 3.15hd] - l.%d\n, [% 3.15hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%% 3.15hd] - l.%d\n, [% 3.15hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2895)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 15hd] - l.%d\n, [% 15hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%% 15hd] - l.%d\n, [% 15hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2896)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 15hd] - l.%d\n, [% 15hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%% 15hd] - l.%d\n, [% 15hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2897)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 15hd] - l.%d\n, [% 15hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%% 15hd] - l.%d\n, [% 15hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2898)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 15.0hd] - l.%d\n, [% 15.0hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%% 15.0hd] - l.%d\n, [% 15.0hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2899)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 15.0hd] - l.%d\n, [% 15.0hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%% 15.0hd] - l.%d\n, [% 15.0hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2900)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 15.0hd] - l.%d\n, [% 15.0hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%% 15.0hd] - l.%d\n, [% 15.0hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2901)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 15.5hd] - l.%d\n, [% 15.5hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%% 15.5hd] - l.%d\n, [% 15.5hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2902)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 15.5hd] - l.%d\n, [% 15.5hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%% 15.5hd] - l.%d\n, [% 15.5hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2903)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 15.5hd] - l.%d\n, [% 15.5hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%% 15.5hd] - l.%d\n, [% 15.5hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2904)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 15.20hd] - l.%d\n, [% 15.20hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%% 15.20hd] - l.%d\n, [% 15.20hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2905)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 15.20hd] - l.%d\n, [% 15.20hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%% 15.20hd] - l.%d\n, [% 15.20hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2906)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 15.20hd] - l.%d\n, [% 15.20hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%% 15.20hd] - l.%d\n, [% 15.20hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3013)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+d] - l.%d\n, [%-+d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+d] - l.%d\n, [%-+d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3014)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+d] - l.%d\n, [%-+d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+d] - l.%d\n, [%-+d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3015)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+d] - l.%d\n, [%-+d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+d] - l.%d\n, [%-+d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3016)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+3d] - l.%d\n, [%-+3d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+3d] - l.%d\n, [%-+3d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3017)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+3d] - l.%d\n, [%-+3d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+3d] - l.%d\n, [%-+3d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3018)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+3d] - l.%d\n, [%-+3d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+3d] - l.%d\n, [%-+3d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3019)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+3.0d] - l.%d\n, [%-+3.0d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+3.0d] - l.%d\n, [%-+3.0d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3020)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+3.0d] - l.%d\n, [%-+3.0d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+3.0d] - l.%d\n, [%-+3.0d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3021)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+3.0d] - l.%d\n, [%-+3.0d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+3.0d] - l.%d\n, [%-+3.0d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_3021_2)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+3.2d] - l.%d\n, [%-+3.2d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+3.2d] - l.%d\n, [%-+3.2d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3022)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+3.2d] - l.%d\n, [%-+3.2d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+3.2d] - l.%d\n, [%-+3.2d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3023)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+3.2d] - l.%d\n, [%-+3.2d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+3.2d] - l.%d\n, [%-+3.2d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3024)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+3.5d] - l.%d\n, [%-+3.5d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+3.5d] - l.%d\n, [%-+3.5d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3025)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+3.5d] - l.%d\n, [%-+3.5d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+3.5d] - l.%d\n, [%-+3.5d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3026)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+3.5d] - l.%d\n, [%-+3.5d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+3.5d] - l.%d\n, [%-+3.5d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3027)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+3.15d] - l.%d\n, [%-+3.15d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+3.15d] - l.%d\n, [%-+3.15d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3028)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+3.15d] - l.%d\n, [%-+3.15d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+3.15d] - l.%d\n, [%-+3.15d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3029)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+3.15d] - l.%d\n, [%-+3.15d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+3.15d] - l.%d\n, [%-+3.15d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3030)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+15d] - l.%d\n, [%-+15d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+15d] - l.%d\n, [%-+15d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3031)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+15d] - l.%d\n, [%-+15d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+15d] - l.%d\n, [%-+15d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3032)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+15d] - l.%d\n, [%-+15d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+15d] - l.%d\n, [%-+15d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3033)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+15.0d] - l.%d\n, [%-+15.0d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+15.0d] - l.%d\n, [%-+15.0d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3034)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+15.0d] - l.%d\n, [%-+15.0d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+15.0d] - l.%d\n, [%-+15.0d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3035)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+15.0d] - l.%d\n, [%-+15.0d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+15.0d] - l.%d\n, [%-+15.0d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3036)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+15.5d] - l.%d\n, [%-+15.5d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+15.5d] - l.%d\n, [%-+15.5d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3037)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+15.5d] - l.%d\n, [%-+15.5d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+15.5d] - l.%d\n, [%-+15.5d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3038)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+15.5d] - l.%d\n, [%-+15.5d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+15.5d] - l.%d\n, [%-+15.5d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3039)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+15.20d] - l.%d\n, [%-+15.20d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+15.20d] - l.%d\n, [%-+15.20d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3040)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+15.20d] - l.%d\n, [%-+15.20d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+15.20d] - l.%d\n, [%-+15.20d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3041)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+15.20d] - l.%d\n, [%-+15.20d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+15.20d] - l.%d\n, [%-+15.20d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3072)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- d] - l.%d\n, [%- d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%- d] - l.%d\n, [%- d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3073)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- d] - l.%d\n, [%- d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%- d] - l.%d\n, [%- d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3074)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- d] - l.%d\n, [%- d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%- d] - l.%d\n, [%- d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3075)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 3d] - l.%d\n, [%- 3d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 3d] - l.%d\n, [%- 3d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3076)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 3d] - l.%d\n, [%- 3d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 3d] - l.%d\n, [%- 3d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3077)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 3d] - l.%d\n, [%- 3d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 3d] - l.%d\n, [%- 3d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3078)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 3.0d] - l.%d\n, [%- 3.0d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 3.0d] - l.%d\n, [%- 3.0d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3079)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 3.0d] - l.%d\n, [%- 3.0d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 3.0d] - l.%d\n, [%- 3.0d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3080)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 3.0d] - l.%d\n, [%- 3.0d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 3.0d] - l.%d\n, [%- 3.0d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3081)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 3.2d] - l.%d\n, [%- 3.2d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 3.2d] - l.%d\n, [%- 3.2d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3082)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 3.2d] - l.%d\n, [%- 3.2d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 3.2d] - l.%d\n, [%- 3.2d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3083)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 3.2d] - l.%d\n, [%- 3.2d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 3.2d] - l.%d\n, [%- 3.2d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3084)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 3.5d] - l.%d\n, [%- 3.5d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 3.5d] - l.%d\n, [%- 3.5d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3085)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 3.5d] - l.%d\n, [%- 3.5d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 3.5d] - l.%d\n, [%- 3.5d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3086)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 3.5d] - l.%d\n, [%- 3.5d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 3.5d] - l.%d\n, [%- 3.5d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3087)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 3.15d] - l.%d\n, [%- 3.15d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 3.15d] - l.%d\n, [%- 3.15d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3088)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 3.15d] - l.%d\n, [%- 3.15d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 3.15d] - l.%d\n, [%- 3.15d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3089)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 3.15d] - l.%d\n, [%- 3.15d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 3.15d] - l.%d\n, [%- 3.15d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3090)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 15d] - l.%d\n, [%- 15d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 15d] - l.%d\n, [%- 15d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3091)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 15d] - l.%d\n, [%- 15d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 15d] - l.%d\n, [%- 15d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3092)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 15d] - l.%d\n, [%- 15d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 15d] - l.%d\n, [%- 15d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3093)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 15.0d] - l.%d\n, [%- 15.0d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 15.0d] - l.%d\n, [%- 15.0d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3094)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 15.0d] - l.%d\n, [%- 15.0d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 15.0d] - l.%d\n, [%- 15.0d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3095)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 15.0d] - l.%d\n, [%- 15.0d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 15.0d] - l.%d\n, [%- 15.0d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3096)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 15.5d] - l.%d\n, [%- 15.5d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 15.5d] - l.%d\n, [%- 15.5d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3097)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 15.5d] - l.%d\n, [%- 15.5d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 15.5d] - l.%d\n, [%- 15.5d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3098)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 15.5d] - l.%d\n, [%- 15.5d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 15.5d] - l.%d\n, [%- 15.5d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3099)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 15.20d] - l.%d\n, [%- 15.20d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 15.20d] - l.%d\n, [%- 15.20d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3100)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 15.20d] - l.%d\n, [%- 15.20d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 15.20d] - l.%d\n, [%- 15.20d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3101)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 15.20d] - l.%d\n, [%- 15.20d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 15.20d] - l.%d\n, [%- 15.20d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3132)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+hd] - l.%d\n, [%-+hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+hd] - l.%d\n, [%-+hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3133)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+hd] - l.%d\n, [%-+hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+hd] - l.%d\n, [%-+hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3134)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+hd] - l.%d\n, [%-+hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+hd] - l.%d\n, [%-+hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3135)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+3hd] - l.%d\n, [%-+3hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+3hd] - l.%d\n, [%-+3hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3136)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+3hd] - l.%d\n, [%-+3hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+3hd] - l.%d\n, [%-+3hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3137)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+3hd] - l.%d\n, [%-+3hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+3hd] - l.%d\n, [%-+3hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3138)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+3.0hd] - l.%d\n, [%-+3.0hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+3.0hd] - l.%d\n, [%-+3.0hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3139)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+3.0hd] - l.%d\n, [%-+3.0hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+3.0hd] - l.%d\n, [%-+3.0hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3140)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+3.0hd] - l.%d\n, [%-+3.0hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+3.0hd] - l.%d\n, [%-+3.0hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3141)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+3.2hd] - l.%d\n, [%-+3.2hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+3.2hd] - l.%d\n, [%-+3.2hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3142)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+3.2hd] - l.%d\n, [%-+3.2hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+3.2hd] - l.%d\n, [%-+3.2hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3143)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+3.2hd] - l.%d\n, [%-+3.2hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+3.2hd] - l.%d\n, [%-+3.2hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3144)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+3.5hd] - l.%d\n, [%-+3.5hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+3.5hd] - l.%d\n, [%-+3.5hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3145)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+3.5hd] - l.%d\n, [%-+3.5hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+3.5hd] - l.%d\n, [%-+3.5hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3146)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+3.5hd] - l.%d\n, [%-+3.5hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+3.5hd] - l.%d\n, [%-+3.5hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3147)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+3.15hd] - l.%d\n, [%-+3.15hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+3.15hd] - l.%d\n, [%-+3.15hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3148)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+3.15hd] - l.%d\n, [%-+3.15hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+3.15hd] - l.%d\n, [%-+3.15hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3149)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+3.15hd] - l.%d\n, [%-+3.15hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+3.15hd] - l.%d\n, [%-+3.15hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3150)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+15hd] - l.%d\n, [%-+15hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+15hd] - l.%d\n, [%-+15hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3151)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+15hd] - l.%d\n, [%-+15hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+15hd] - l.%d\n, [%-+15hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3152)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+15hd] - l.%d\n, [%-+15hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+15hd] - l.%d\n, [%-+15hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3153)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+15.0hd] - l.%d\n, [%-+15.0hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+15.0hd] - l.%d\n, [%-+15.0hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3154)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+15.0hd] - l.%d\n, [%-+15.0hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+15.0hd] - l.%d\n, [%-+15.0hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3155)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+15.0hd] - l.%d\n, [%-+15.0hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+15.0hd] - l.%d\n, [%-+15.0hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3156)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+15.5hd] - l.%d\n, [%-+15.5hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+15.5hd] - l.%d\n, [%-+15.5hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3157)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+15.5hd] - l.%d\n, [%-+15.5hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+15.5hd] - l.%d\n, [%-+15.5hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3158)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+15.5hd] - l.%d\n, [%-+15.5hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+15.5hd] - l.%d\n, [%-+15.5hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3159)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+15.20hd] - l.%d\n, [%-+15.20hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+15.20hd] - l.%d\n, [%-+15.20hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3160)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+15.20hd] - l.%d\n, [%-+15.20hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+15.20hd] - l.%d\n, [%-+15.20hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3161)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+15.20hd] - l.%d\n, [%-+15.20hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+15.20hd] - l.%d\n, [%-+15.20hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3192)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- hd] - l.%d\n, [%- hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%- hd] - l.%d\n, [%- hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3193)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- hd] - l.%d\n, [%- hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%- hd] - l.%d\n, [%- hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3194)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- hd] - l.%d\n, [%- hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%- hd] - l.%d\n, [%- hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3195)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 3hd] - l.%d\n, [%- 3hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 3hd] - l.%d\n, [%- 3hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3196)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 3hd] - l.%d\n, [%- 3hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 3hd] - l.%d\n, [%- 3hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3197)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 3hd] - l.%d\n, [%- 3hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 3hd] - l.%d\n, [%- 3hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3198)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 3.0hd] - l.%d\n, [%- 3.0hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 3.0hd] - l.%d\n, [%- 3.0hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3199)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 3.0hd] - l.%d\n, [%- 3.0hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 3.0hd] - l.%d\n, [%- 3.0hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3200)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 3.0hd] - l.%d\n, [%- 3.0hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 3.0hd] - l.%d\n, [%- 3.0hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3201)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 3.2hd] - l.%d\n, [%- 3.2hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 3.2hd] - l.%d\n, [%- 3.2hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3202)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 3.2hd] - l.%d\n, [%- 3.2hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 3.2hd] - l.%d\n, [%- 3.2hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3203)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 3.2hd] - l.%d\n, [%- 3.2hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 3.2hd] - l.%d\n, [%- 3.2hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3204)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 3.5hd] - l.%d\n, [%- 3.5hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 3.5hd] - l.%d\n, [%- 3.5hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3205)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 3.5hd] - l.%d\n, [%- 3.5hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 3.5hd] - l.%d\n, [%- 3.5hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3206)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 3.5hd] - l.%d\n, [%- 3.5hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 3.5hd] - l.%d\n, [%- 3.5hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3207)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 3.15hd] - l.%d\n, [%- 3.15hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 3.15hd] - l.%d\n, [%- 3.15hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3208)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 3.15hd] - l.%d\n, [%- 3.15hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 3.15hd] - l.%d\n, [%- 3.15hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3209)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 3.15hd] - l.%d\n, [%- 3.15hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 3.15hd] - l.%d\n, [%- 3.15hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3210)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 15hd] - l.%d\n, [%- 15hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 15hd] - l.%d\n, [%- 15hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3211)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 15hd] - l.%d\n, [%- 15hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 15hd] - l.%d\n, [%- 15hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3212)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 15hd] - l.%d\n, [%- 15hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 15hd] - l.%d\n, [%- 15hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3213)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 15.0hd] - l.%d\n, [%- 15.0hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 15.0hd] - l.%d\n, [%- 15.0hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3214)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 15.0hd] - l.%d\n, [%- 15.0hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 15.0hd] - l.%d\n, [%- 15.0hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3215)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 15.0hd] - l.%d\n, [%- 15.0hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 15.0hd] - l.%d\n, [%- 15.0hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3216)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 15.5hd] - l.%d\n, [%- 15.5hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 15.5hd] - l.%d\n, [%- 15.5hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3217)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 15.5hd] - l.%d\n, [%- 15.5hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 15.5hd] - l.%d\n, [%- 15.5hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3218)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 15.5hd] - l.%d\n, [%- 15.5hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 15.5hd] - l.%d\n, [%- 15.5hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3219)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 15.20hd] - l.%d\n, [%- 15.20hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 15.20hd] - l.%d\n, [%- 15.20hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3220)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 15.20hd] - l.%d\n, [%- 15.20hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 15.20hd] - l.%d\n, [%- 15.20hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3221)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 15.20hd] - l.%d\n, [%- 15.20hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 15.20hd] - l.%d\n, [%- 15.20hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3373)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = "Hello World";
s21_sprintf(str2, "- %d - [%%s] - l.%d\n, [%s]", - 2, __LINE__, str);
sprintf(str1, "- %d - [%%s] - l.%d\n, [%s]", - 2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3374)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = NULL;
s21_sprintf(str2, "- %d - [%%s] - l.%d\n, [%s]", - 2, __LINE__, str);
sprintf(str1, "- %d - [%%s] - l.%d\n, [%s]", - 2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3375)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = "Hello World";
s21_sprintf(str2, "- %d - [%%3s] - l.%d\n, [%3s]", - 2, __LINE__, str);
sprintf(str1, "- %d - [%%3s] - l.%d\n, [%3s]", - 2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3376)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = NULL;
s21_sprintf(str2, "- %d - [%%3s] - l.%d\n, [%3s]", - 2, __LINE__, str);
sprintf(str1, "- %d - [%%3s] - l.%d\n, [%3s]", - 2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3377)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = "Hello World";
s21_sprintf(str2, "- %d - [%%3.0s] - l.%d\n, [%3.0s]", - 2, __LINE__, str);
sprintf(str1, "- %d - [%%3.0s] - l.%d\n, [%3.0s]", - 2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3378)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = NULL;
s21_sprintf(str2, "- %d - [%%3.0s] - l.%d\n, [%3.0s]", - 2, __LINE__, str);
sprintf(str1, "- %d - [%%3.0s] - l.%d\n, [%3.0s]", - 2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3379)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = "Hello World";
s21_sprintf(str2, "- %d - [%%3.2s] - l.%d\n, [%3.2s]", - 2, __LINE__, str);
sprintf(str1, "- %d - [%%3.2s] - l.%d\n, [%3.2s]", - 2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3380)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = NULL;
s21_sprintf(str2, "- %d - [%%3.6s] - l.%d\n, [%3.6s]", - 2, __LINE__, str);
sprintf(str1, "- %d - [%%3.6s] - l.%d\n, [%3.6s]", - 2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3381)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = "Hello World";
s21_sprintf(str2, "- %d - [%%3.5s] - l.%d\n, [%3.5s]", - 2, __LINE__, str);
sprintf(str1, "- %d - [%%3.5s] - l.%d\n, [%3.5s]", - 2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3382)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = NULL;
s21_sprintf(str2, "- %d - [%%3.8s] - l.%d\n, [%3.8s]", - 2, __LINE__, str);
sprintf(str1, "- %d - [%%3.8s] - l.%d\n, [%3.8s]", - 2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3383)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = "Hello World";
s21_sprintf(str2, "- %d - [%%3.25s] - l.%d\n, [%3.25s]", - 2, __LINE__, str);
sprintf(str1, "- %d - [%%3.25s] - l.%d\n, [%3.25s]", - 2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3384)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = NULL;
s21_sprintf(str2, "- %d - [%%3.25s] - l.%d\n, [%3.25s]", - 2, __LINE__, str);
sprintf(str1, "- %d - [%%3.25s] - l.%d\n, [%3.25s]", - 2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3385)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = "Hello World";
s21_sprintf(str2, "- %d - [%%25s] - l.%d\n, [%25s]", - 2, __LINE__, str);
sprintf(str1, "- %d - [%%25s] - l.%d\n, [%25s]", - 2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3386)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = NULL;
s21_sprintf(str2, "- %d - [%%25s] - l.%d\n, [%25s]", - 2, __LINE__, str);
sprintf(str1, "- %d - [%%25s] - l.%d\n, [%25s]", - 2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3387)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = "Hello World";
s21_sprintf(str2, "- %d - [%%25.0s] - l.%d\n, [%25.0s]", - 2, __LINE__, str);
sprintf(str1, "- %d - [%%25.0s] - l.%d\n, [%25.0s]", - 2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3388)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = NULL;
s21_sprintf(str2, "- %d - [%%25.0s] - l.%d\n, [%25.0s]", - 2, __LINE__, str);
sprintf(str1, "- %d - [%%25.0s] - l.%d\n, [%25.0s]", - 2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3389)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = "Hello World";
s21_sprintf(str2, "- %d - [%%25.5s] - l.%d\n, [%25.5s]", - 2, __LINE__, str);
sprintf(str1, "- %d - [%%25.5s] - l.%d\n, [%25.5s]", - 2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3390)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = NULL;
s21_sprintf(str2, "- %d - [%%25.6s] - l.%d\n, [%25.6s]", - 2, __LINE__, str);
sprintf(str1, "- %d - [%%25.6s] - l.%d\n, [%25.6s]", - 2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3391)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = "Hello World";
s21_sprintf(str2, "- %d - [%%-s] - l.%d\n, [%-s]", - 2, __LINE__, str);
sprintf(str1, "- %d - [%%-s] - l.%d\n, [%-s]", - 2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3392)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = NULL;
s21_sprintf(str2, "- %d - [%%-s] - l.%d\n, [%-s]", - 2, __LINE__, str);
sprintf(str1, "- %d - [%%-s] - l.%d\n, [%-s]", - 2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3393)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = "Hello World";
s21_sprintf(str2, "- %d - [%%-3s] - l.%d\n, [%-3s]", - 2, __LINE__, str);
sprintf(str1, "- %d - [%%-3s] - l.%d\n, [%-3s]", - 2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3394)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = NULL;
s21_sprintf(str2, "- %d - [%%-3s] - l.%d\n, [%-3s]", - 2, __LINE__, str);
sprintf(str1, "- %d - [%%-3s] - l.%d\n, [%-3s]", - 2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3395)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = "Hello World";
s21_sprintf(str2, "- %d - [%%-3.0s] - l.%d\n, [%-3.0s]", - 2, __LINE__, str);
sprintf(str1, "- %d - [%%-3.0s] - l.%d\n, [%-3.0s]", - 2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3396)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = NULL;
s21_sprintf(str2, "- %d - [%%-3.0s] - l.%d\n, [%-3.0s]", - 2, __LINE__, str);
sprintf(str1, "- %d - [%%-3.0s] - l.%d\n, [%-3.0s]", - 2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3397)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = "Hello World";
s21_sprintf(str2, "- %d - [%%-3.2s] - l.%d\n, [%-3.2s]", - 2, __LINE__, str);
sprintf(str1, "- %d - [%%-3.2s] - l.%d\n, [%-3.2s]", - 2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3398)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = NULL;
s21_sprintf(str2, "- %d - [%%-3.8s] - l.%d\n, [%-3.8s]", - 2, __LINE__, str);
sprintf(str1, "- %d - [%%-3.8s] - l.%d\n, [%-3.8s]", - 2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3399)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = "Hello World";
s21_sprintf(str2, "- %d - [%%-3.5s] - l.%d\n, [%-3.5s]", - 2, __LINE__, str);
sprintf(str1, "- %d - [%%-3.5s] - l.%d\n, [%-3.5s]", - 2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3400)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = NULL;
s21_sprintf(str2, "- %d - [%%-3.7s] - l.%d\n, [%-3.7s]", - 2, __LINE__, str);
sprintf(str1, "- %d - [%%-3.7s] - l.%d\n, [%-3.7s]", - 2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3401)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = "Hello World";
s21_sprintf(str2, "- %d - [%%-3.25s] - l.%d\n, [%-3.25s]", - 2, __LINE__, str);
sprintf(str1, "- %d - [%%-3.25s] - l.%d\n, [%-3.25s]", - 2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3402)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = NULL;
s21_sprintf(str2, "- %d - [%%-3.25s] - l.%d\n, [%-3.25s]", - 2, __LINE__, str);
sprintf(str1, "- %d - [%%-3.25s] - l.%d\n, [%-3.25s]", - 2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3523)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = "Hello World";
s21_sprintf(str2, "- %d - [%%c] - l.%d\n, [%c]", - 2, __LINE__, *str);
sprintf(str1, "- %d - [%%c] - l.%d\n, [%c]", - 2, __LINE__ - 1, *str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3525)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = "Hello World";
s21_sprintf(str2, "- %d - [%%3c] - l.%d\n, [%3c]", - 2, __LINE__, *str);
sprintf(str1, "- %d - [%%3c] - l.%d\n, [%3c]", - 2, __LINE__ - 1, *str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3535)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = "Hello World";
s21_sprintf(str2, "- %d - [%%25c] - l.%d\n, [%25c]", - 2, __LINE__, *str);
sprintf(str1, "- %d - [%%25c] - l.%d\n, [%25c]", - 2, __LINE__ - 1, *str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3554)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = "Hello World";
s21_sprintf(str2, "- %d - [%%-c] - l.%d\n, [%-c]", - 2, __LINE__, *str);
sprintf(str1, "- %d - [%%-c] - l.%d\n, [%-c]", - 2, __LINE__ - 1, *str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3555)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = "Hello World";
s21_sprintf(str2, "- %d - [%%-3c] - l.%d\n, [%-3c]", - 2, __LINE__, *str);
sprintf(str1, "- %d - [%%-3c] - l.%d\n, [%-3c]", - 2, __LINE__ - 1, *str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2708_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%i] - l.%d\n, [%i]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%i] - l.%d\n, [%i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2709_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%i] - l.%d\n, [%i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%i] - l.%d\n, [%i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2710_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%i] - l.%d\n, [%i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%i] - l.%d\n, [%i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2711i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3d] - l.%d\n, [%3d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%3d] - l.%d\n, [%3d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2712i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3i] - l.%d\n, [%3i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%3i] - l.%d\n, [%3i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2713i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3i] - l.%d\n, [%3i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%3i] - l.%d\n, [%3i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2714i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.0i] - l.%d\n, [%3.0i]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.0i] - l.%d\n, [%3.0i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2715i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.0i] - l.%d\n, [%3.0i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.0i] - l.%d\n, [%3.0i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2716i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.0d] - l.%d\n, [%3.0d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.0d] - l.%d\n, [%3.0d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2717i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.2i] - l.%d\n, [%3.2i]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.2i] - l.%d\n, [%3.2i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2718i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.2i] - l.%d\n, [%3.2i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.2i] - l.%d\n, [%3.2i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2719i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.2i] - l.%d\n, [%3.2i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.2i] - l.%d\n, [%3.2i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2720i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.5i] - l.%d\n, [%3.5i]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.5i] - l.%d\n, [%3.5i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2721i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.5i] - l.%d\n, [%3.5i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.5i] - l.%d\n, [%3.5i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2722i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.5i] - l.%d\n, [%3.5i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.5i] - l.%d\n, [%3.5i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2723i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.15i] - l.%d\n, [%3.15i]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.15i] - l.%d\n, [%3.15i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2724i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.15i] - l.%d\n, [%3.15i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.15i] - l.%d\n, [%3.15i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2725i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.15i] - l.%d\n, [%3.15i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.15i] - l.%d\n, [%3.15i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2726i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15i] - l.%d\n, [%15i]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%15i] - l.%d\n, [%15i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2727i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15i] - l.%d\n, [%15i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%15i] - l.%d\n, [%15i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2728i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15i] - l.%d\n, [%15i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%15i] - l.%d\n, [%15i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2729i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.0i] - l.%d\n, [%15.0i]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.0i] - l.%d\n, [%15.0i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2730i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.0i] - l.%d\n, [%15.0i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.0i] - l.%d\n, [%15.0i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2731i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.0i] - l.%d\n, [%15.0i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.0i] - l.%d\n, [%15.0i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2732i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.5i] - l.%d\n, [%15.5i]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.5i] - l.%d\n, [%15.5i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2733i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.5i] - l.%d\n, [%15.5i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.5i] - l.%d\n, [%15.5i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2734i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.5i] - l.%d\n, [%15.5i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.5i] - l.%d\n, [%15.5i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2735i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.20i] - l.%d\n, [%15.20i]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.20i] - l.%d\n, [%15.20i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2736i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.20i] - l.%d\n, [%15.20i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.20i] - l.%d\n, [%15.20i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2737i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.20i] - l.%d\n, [%15.20i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.20i] - l.%d\n, [%15.20i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2738i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-i] - l.%d\n, [%-i]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-i] - l.%d\n, [%-i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2739i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3i] - l.%d\n, [%-3i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3i] - l.%d\n, [%-3i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2740i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.0i] - l.%d\n, [%-3.0i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.0i] - l.%d\n, [%-3.0i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2741i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.2i] - l.%d\n, [%-3.2i]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.2i] - l.%d\n, [%-3.2i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2742i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.5i] - l.%d\n, [%-3.5i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.5i] - l.%d\n, [%-3.5i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2743i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.5i] - l.%d\n, [%-3.5i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.5i] - l.%d\n, [%-3.5i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2744i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.15i] - l.%d\n, [%-3.15i]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.15i] - l.%d\n, [%-3.15i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2745i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.15i] - l.%d\n, [%-3.15i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.15i] - l.%d\n, [%-3.15i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2746i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.15i] - l.%d\n, [%-3.15i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.15i] - l.%d\n, [%-3.15i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2747i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+i] - l.%d\n, [%+i]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%+i] - l.%d\n, [%+i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2748i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+i] - l.%d\n, [%+i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%+i] - l.%d\n, [%+i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2749i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+i] - l.%d\n, [%+i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%+i] - l.%d\n, [%+i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2750_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+3i] - l.%i\n, [%+3i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%+3i] - l.%i\n, [%+3i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2751_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+3i] - l.%i\n, [%+3i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%+3i] - l.%i\n, [%+3i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2752_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+3i] - l.%i\n, [%+3i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%+3i] - l.%i\n, [%+3i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2753_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+3i] - l.%i\n, [%+3i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%+3i] - l.%i\n, [%+3i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2754_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+3i] - l.%i\n, [%+3i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%+3i] - l.%i\n, [%+3i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2755_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+3i] - l.%i\n, [%+3i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%+3i] - l.%i\n, [%+3i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2756_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+3.5i] - l.%i\n, [%+3.5i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%+3.5i] - l.%i\n, [%+3.5i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2757_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+3.5i] - l.%i\n, [%+3.5i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%+3.5i] - l.%i\n, [%+3.5i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2758_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+3.5i] - l.%i\n, [%+3.5i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%+3.5i] - l.%i\n, [%+3.5i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2759_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+3.15i] - l.%i\n, [%+3.15i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%+3.15i] - l.%i\n, [%+3.15i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2760_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+3.15i] - l.%i\n, [%+3.15i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%+3.15i] - l.%i\n, [%+3.15i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2761_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+3.15i] - l.%i\n, [%+3.15i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%+3.15i] - l.%i\n, [%+3.15i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2762_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+15i] - l.%i\n, [%+15i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%+15i] - l.%i\n, [%+15i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2763_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+15i] - l.%i\n, [%+15i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%+15i] - l.%i\n, [%+15i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2764_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+15i] - l.%i\n, [%+15i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%+15i] - l.%i\n, [%+15i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2765_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+15.0i] - l.%i\n, [%+15.0i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%+15.0i] - l.%i\n, [%+15.0i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2766_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+15.0i] - l.%i\n, [%+15.0i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%+15.0i] - l.%i\n, [%+15.0i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2767_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+15.0i] - l.%i\n, [%+15.0i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%+15.0i] - l.%i\n, [%+15.0i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2768_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+15.5i] - l.%i\n, [%+15.5i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%+15.5i] - l.%i\n, [%+15.5i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2769_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+15.5i] - l.%i\n, [%+15.5i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%+15.5i] - l.%i\n, [%+15.5i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2770_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+15.5i] - l.%i\n, [%+15.5i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%+15.5i] - l.%i\n, [%+15.5i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2771_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+15.20i] - l.%i\n, [%+15.20i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%+15.20i] - l.%i\n, [%+15.20i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2772_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+15.20i] - l.%i\n, [%+15.20i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%+15.20i] - l.%i\n, [%+15.20i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2773_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+15.20i] - l.%i\n, [%+15.20i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%+15.20i] - l.%i\n, [%+15.20i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2774_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% i] - l.%i\n, [% i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%% i] - l.%i\n, [% i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2775_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% i] - l.%i\n, [% i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%% i] - l.%i\n, [% i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2776_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% i] - l.%i\n, [% i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%% i] - l.%i\n, [% i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2777_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 3i] - l.%i\n, [% 3i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%% 3i] - l.%i\n, [% 3i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2778_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 3i] - l.%i\n, [% 3i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%% 3i] - l.%i\n, [% 3i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2779_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 3i] - l.%i\n, [% 3i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%% 3i] - l.%i\n, [% 3i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2780_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, " - %i - [%% 3.0i] - l.%i\n, [% 3.0i]", 0, - 2, __LINE__);
sprintf(str1, " - %i - [%% 3.0i] - l.%i\n, [% 3.0i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2781_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, " - %i - [%% 3.0i] - l.%i\n, [% 3.0i]", INT_MIN, - 2, __LINE__);
sprintf(str1, " - %i - [%% 3.0i] - l.%i\n, [% 3.0i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2782_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, " - %i - [%% 3.0i] - l.%i\n, [% 3.0i]", INT_MAX, - 2, __LINE__);
sprintf(str1, " - %i - [%% 3.0i] - l.%i\n, [% 3.0i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2783_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 3.2i] - l.%i\n, [% 3.2i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%% 3.2i] - l.%i\n, [% 3.2i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2784_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 3.2i] - l.%i\n, [% 3.2i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%% 3.2i] - l.%i\n, [% 3.2i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2785_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 3.2i] - l.%i\n, [% 3.2i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%% 3.2i] - l.%i\n, [% 3.2i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2786_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 3.5i] - l.%i\n, [% 3.5i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%% 3.5i] - l.%i\n, [% 3.5i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2786_2_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 3.5i] - l.%i\n, [% 3.5i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%% 3.5i] - l.%i\n, [% 3.5i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2787_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 3.5i] - l.%i\n, [% 3.5i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%% 3.5i] - l.%i\n, [% 3.5i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2788_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 3.15i] - l.%i\n, [% 3.15i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%% 3.15i] - l.%i\n, [% 3.15i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2789_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 3.15i] - l.%i\n, [% 3.15i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%% 3.15i] - l.%i\n, [% 3.15i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2790_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 3.15i] - l.%i\n, [% 3.15i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%% 3.15i] - l.%i\n, [% 3.15i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2791_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 15i] - l.%i\n, [% 15i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%% 15i] - l.%i\n, [% 15i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2792_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 15i] - l.%i\n, [% 15i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%% 15i] - l.%i\n, [% 15i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2793_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 15i] - l.%i\n, [% 15i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%% 15i] - l.%i\n, [% 15i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2794_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 15.0i] - l.%i\n, [% 15.0i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%% 15.0i] - l.%i\n, [% 15.0i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2795_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 15.0i] - l.%i\n, [% 15.0i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%% 15.0i] - l.%i\n, [% 15.0i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2796_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 15.0i] - l.%i\n, [% 15.0i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%% 15.0i] - l.%i\n, [% 15.0i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2800_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 15.20i] - l.%i\n, [% 15.20i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%% 15.20i] - l.%i\n, [% 15.20i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2802_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 15.20i] - l.%i\n, [% 15.20i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%% 15.20i] - l.%i\n, [% 15.20i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2803_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%hi] - l.%i\n, [%hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%hi] - l.%i\n, [%hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2804_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%hi] - l.%i\n, [%hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%hi] - l.%i\n, [%hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2805_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%hi] - l.%i\n, [%hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%hi] - l.%i\n, [%hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2806_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%3hi] - l.%i\n, [%3hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%3hi] - l.%i\n, [%3hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2807_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%3hi] - l.%i\n, [%3hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%3hi] - l.%i\n, [%3hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2807_2_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%3hi] - l.%i\n, [%3hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%3hi] - l.%i\n, [%3hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2808_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%3.0hi] - l.%i\n, [%3.0hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%3.0hi] - l.%i\n, [%3.0hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2809_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%3.0hi] - l.%i\n, [%3.0hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%3.0hi] - l.%i\n, [%3.0hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2810_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%3.0hi] - l.%i\n, [%3.0hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%3.0hi] - l.%i\n, [%3.0hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2811_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%3.2hi] - l.%i\n, [%3.2hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%3.2hi] - l.%i\n, [%3.2hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2812_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%3.2hi] - l.%i\n, [%3.2hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%3.2hi] - l.%i\n, [%3.2hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2813_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%3.2hi] - l.%i\n, [%3.2hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%3.2hi] - l.%i\n, [%3.2hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2814_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%3.5hi] - l.%i\n, [%3.5hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%3.5hi] - l.%i\n, [%3.5hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2815_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%3.5hi] - l.%i\n, [%3.5hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%3.5hi] - l.%i\n, [%3.5hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2816_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%3.5hi] - l.%i\n, [%3.5hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%3.5hi] - l.%i\n, [%3.5hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2817_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%3.15hi] - l.%i\n, [%3.15hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%3.15hi] - l.%i\n, [%3.15hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2818_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%3.15hi] - l.%i\n, [%3.15hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%3.15hi] - l.%i\n, [%3.15hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2819_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%3.15hi] - l.%i\n, [%3.15hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%3.15hi] - l.%i\n, [%3.15hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2820_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%15hi] - l.%i\n, [%15hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%15hi] - l.%i\n, [%15hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2821_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%15hi] - l.%i\n, [%15hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%15hi] - l.%i\n, [%15hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2822_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%15hi] - l.%i\n, [%15hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%15hi] - l.%i\n, [%15hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2823_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%15.0hi] - l.%i\n, [%15.0hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%15.0hi] - l.%i\n, [%15.0hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2824_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%15.0hi] - l.%i\n, [%15.0hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%15.0hi] - l.%i\n, [%15.0hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2825_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%15.0hi] - l.%i\n, [%15.0hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%15.0hi] - l.%i\n, [%15.0hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2826_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%15.5hi] - l.%i\n, [%15.5hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%15.5hi] - l.%i\n, [%15.5hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2827_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%15.5hi] - l.%i\n, [%15.5hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%15.5hi] - l.%i\n, [%15.5hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2828_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%15.5hi] - l.%i\n, [%15.5hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%15.5hi] - l.%i\n, [%15.5hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2829_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%15.20hi] - l.%i\n, [%15.20hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%15.20hi] - l.%i\n, [%15.20hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2830_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%15.20hi] - l.%i\n, [%15.20hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%15.20hi] - l.%i\n, [%15.20hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2831_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%15.20hi] - l.%i\n, [%15.20hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%15.20hi] - l.%i\n, [%15.20hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2832_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-hi] - l.%i\n, [%-hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%-hi] - l.%i\n, [%-hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2833_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-hi] - l.%i\n, [%-hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%-hi] - l.%i\n, [%-hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2834_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-hi] - l.%i\n, [%-hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%-hi] - l.%i\n, [%-hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2835_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-3hi] - l.%i\n, [%-3hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%-3hi] - l.%i\n, [%-3hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2836_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-3hi] - l.%i\n, [%-3hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%-3hi] - l.%i\n, [%-3hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2837_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-3hi] - l.%i\n, [%-3hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%-3hi] - l.%i\n, [%-3hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2838_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-3.0hi] - l.%i\n, [%-3.0hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%-3.0hi] - l.%i\n, [%-3.0hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2839_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-3.0hi] - l.%i\n, [%-3.0hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%-3.0hi] - l.%i\n, [%-3.0hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2840_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-3.0hi] - l.%i\n, [%-3.0hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%-3.0hi] - l.%i\n, [%-3.0hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2841_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-3.2hi] - l.%i\n, [%-3.2hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%-3.2hi] - l.%i\n, [%-3.2hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2842_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-3.2hi] - l.%i\n, [%-3.2hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%-3.2hi] - l.%i\n, [%-3.2hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2843_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-3.2hi] - l.%i\n, [%-3.2hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%-3.2hi] - l.%i\n, [%-3.2hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2844_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-3.5hi] - l.%i\n, [%-3.5hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%-3.5hi] - l.%i\n, [%-3.5hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2845_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-3.5hi] - l.%i\n, [%-3.5hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%-3.5hi] - l.%i\n, [%-3.5hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2846_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-3.5hi] - l.%i\n, [%-3.5hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%-3.5hi] - l.%i\n, [%-3.5hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2847_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-3.15hi] - l.%i\n, [%-3.15hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%-3.15hi] - l.%i\n, [%-3.15hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2848_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-3.15hi] - l.%i\n, [%-3.15hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%-3.15hi] - l.%i\n, [%-3.15hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2849_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-3.15hi] - l.%i\n, [%-3.15hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%-3.15hi] - l.%i\n, [%-3.15hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2850_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+hi] - l.%i\n, [%+hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%+hi] - l.%i\n, [%+hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2851_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+hi] - l.%i\n, [%+hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%+hi] - l.%i\n, [%+hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2852_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+hi] - l.%i\n, [%+hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%+hi] - l.%i\n, [%+hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2853_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+3hi] - l.%i\n, [%+3hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%+3hi] - l.%i\n, [%+3hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2854_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+3hi] - l.%i\n, [%+3hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%+3hi] - l.%i\n, [%+3hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2855_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+3hi] - l.%i\n, [%+3hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%+3hi] - l.%i\n, [%+3hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2856_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+3.0hi] - l.%i\n, [%+3.0hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%+3.0hi] - l.%i\n, [%+3.0hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2857_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+3.0hi] - l.%i\n, [%+3.0hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%+3.0hi] - l.%i\n, [%+3.0hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2858_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+3.0hi] - l.%i\n, [%+3.0hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%+3.0hi] - l.%i\n, [%+3.0hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2859_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+3.5hi] - l.%i\n, [%+3.5hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%+3.5hi] - l.%i\n, [%+3.5hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2860_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+3.5hi] - l.%i\n, [%+3.5hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%+3.5hi] - l.%i\n, [%+3.5hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2861_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+3.5hi] - l.%i\n, [%+3.5hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%+3.5hi] - l.%i\n, [%+3.5hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2862_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+3.15hi] - l.%i\n, [%+3.15hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%+3.15hi] - l.%i\n, [%+3.15hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2863_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+3.15hi] - l.%i\n, [%+3.15hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%+3.15hi] - l.%i\n, [%+3.15hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2864_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+3.15hi] - l.%i\n, [%+3.15hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%+3.15hi] - l.%i\n, [%+3.15hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2865_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+15hi] - l.%i\n, [%+15hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%+15hi] - l.%i\n, [%+15hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2866_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+15hi] - l.%i\n, [%+15hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%+15hi] - l.%i\n, [%+15hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2867_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+15hi] - l.%i\n, [%+15hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%+15hi] - l.%i\n, [%+15hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2868_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+15.0hi] - l.%i\n, [%+15.0hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%+15.0hi] - l.%i\n, [%+15.0hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2869_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+15.0hi] - l.%i\n, [%+15.0hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%+15.0hi] - l.%i\n, [%+15.0hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2870_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+15.0hi] - l.%i\n, [%+15.0hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%+15.0hi] - l.%i\n, [%+15.0hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2871_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+15.5hi] - l.%i\n, [%+15.5hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%+15.5hi] - l.%i\n, [%+15.5hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2872_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+15.5hi] - l.%i\n, [%+15.5hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%+15.5hi] - l.%i\n, [%+15.5hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2873_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+15.5hi] - l.%i\n, [%+15.5hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%+15.5hi] - l.%i\n, [%+15.5hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2874_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+15.20hi] - l.%i\n, [%+15.20hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%+15.20hi] - l.%i\n, [%+15.20hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2875_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+15.20hi] - l.%i\n, [%+15.20hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%+15.20hi] - l.%i\n, [%+15.20hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2876_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+15.20hi] - l.%i\n, [%+15.20hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%+15.20hi] - l.%i\n, [%+15.20hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2877_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% hi] - l.%i\n, [% hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%% hi] - l.%i\n, [% hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2878_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% hi] - l.%i\n, [% hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%% hi] - l.%i\n, [% hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2879_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% hi] - l.%i\n, [% hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%% hi] - l.%i\n, [% hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2880_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 3hi] - l.%i\n, [% 3hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%% 3hi] - l.%i\n, [% 3hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2881_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 3hi] - l.%i\n, [% 3hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%% 3hi] - l.%i\n, [% 3hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2882_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 3hi] - l.%i\n, [% 3hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%% 3hi] - l.%i\n, [% 3hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2883_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 3.0hi] - l.%i\n, [% 3.0hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%% 3.0hi] - l.%i\n, [% 3.0hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2884_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 3.0hi] - l.%i\n, [% 3.0hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%% 3.0hi] - l.%i\n, [% 3.0hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2885_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 3.0hi] - l.%i\n, [% 3.0hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%% 3.0hi] - l.%i\n, [% 3.0hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2886_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 3.2hi] - l.%i\n, [% 3.2hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%% 3.2hi] - l.%i\n, [% 3.2hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2887_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 3.2hi] - l.%i\n, [% 3.2hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%% 3.2hi] - l.%i\n, [% 3.2hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2888_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 3.2hi] - l.%i\n, [% 3.2hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%% 3.2hi] - l.%i\n, [% 3.2hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2889_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 3.5hi] - l.%i\n, [% 3.5hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%% 3.5hi] - l.%i\n, [% 3.5hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2890_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 3.5hi] - l.%i\n, [% 3.5hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%% 3.5hi] - l.%i\n, [% 3.5hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2891_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 3.5hi] - l.%i\n, [% 3.5hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%% 3.5hi] - l.%i\n, [% 3.5hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2892_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 3.15hi] - l.%i\n, [% 3.15hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%% 3.15hi] - l.%i\n, [% 3.15hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2893_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 3.15hi] - l.%i\n, [% 3.15hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%% 3.15hi] - l.%i\n, [% 3.15hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2894_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 3.15hi] - l.%i\n, [% 3.15hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%% 3.15hi] - l.%i\n, [% 3.15hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2895_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 15hi] - l.%i\n, [% 15hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%% 15hi] - l.%i\n, [% 15hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2896_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 15hi] - l.%i\n, [% 15hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%% 15hi] - l.%i\n, [% 15hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2897_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 15hi] - l.%i\n, [% 15hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%% 15hi] - l.%i\n, [% 15hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2898_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 15.0hi] - l.%i\n, [% 15.0hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%% 15.0hi] - l.%i\n, [% 15.0hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2899_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 15.0hi] - l.%i\n, [% 15.0hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%% 15.0hi] - l.%i\n, [% 15.0hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2900_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 15.0hi] - l.%i\n, [% 15.0hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%% 15.0hi] - l.%i\n, [% 15.0hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2904_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 15.20hi] - l.%i\n, [% 15.20hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%% 15.20hi] - l.%i\n, [% 15.20hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2905_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 15.20hi] - l.%i\n, [% 15.20hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%% 15.20hi] - l.%i\n, [% 15.20hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2906_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 15.20hi] - l.%i\n, [% 15.20hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%% 15.20hi] - l.%i\n, [% 15.20hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3013)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+i] - l.%i\n, [%-+i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+i] - l.%i\n, [%-+i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3014)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+i] - l.%i\n, [%-+i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+i] - l.%i\n, [%-+i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3015)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+i] - l.%i\n, [%-+i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+i] - l.%i\n, [%-+i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3016)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+3i] - l.%i\n, [%-+3i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+3i] - l.%i\n, [%-+3i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3017)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+3i] - l.%i\n, [%-+3i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+3i] - l.%i\n, [%-+3i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3018)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+3i] - l.%i\n, [%-+3i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+3i] - l.%i\n, [%-+3i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3019)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+3.0i] - l.%i\n, [%-+3.0i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+3.0i] - l.%i\n, [%-+3.0i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3020)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+3.0i] - l.%i\n, [%-+3.0i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+3.0i] - l.%i\n, [%-+3.0i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3021)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+3.0i] - l.%i\n, [%-+3.0i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+3.0i] - l.%i\n, [%-+3.0i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3021_2)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+3.2i] - l.%i\n, [%-+3.2i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+3.2i] - l.%i\n, [%-+3.2i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3022)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+3.2i] - l.%i\n, [%-+3.2i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+3.2i] - l.%i\n, [%-+3.2i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3023)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+3.2i] - l.%i\n, [%-+3.2i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+3.2i] - l.%i\n, [%-+3.2i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3024)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+3.5i] - l.%i\n, [%-+3.5i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+3.5i] - l.%i\n, [%-+3.5i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3025)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+3.5i] - l.%i\n, [%-+3.5i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+3.5i] - l.%i\n, [%-+3.5i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3026)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+3.5i] - l.%i\n, [%-+3.5i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+3.5i] - l.%i\n, [%-+3.5i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3027)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+3.15i] - l.%i\n, [%-+3.15i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+3.15i] - l.%i\n, [%-+3.15i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3028)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+3.15i] - l.%i\n, [%-+3.15i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+3.15i] - l.%i\n, [%-+3.15i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3029)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+3.15i] - l.%i\n, [%-+3.15i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+3.15i] - l.%i\n, [%-+3.15i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3030)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+15i] - l.%i\n, [%-+15i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+15i] - l.%i\n, [%-+15i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3031)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+15i] - l.%i\n, [%-+15i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+15i] - l.%i\n, [%-+15i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3032)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+15i] - l.%i\n, [%-+15i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+15i] - l.%i\n, [%-+15i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3033)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+15.0i] - l.%i\n, [%-+15.0i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+15.0i] - l.%i\n, [%-+15.0i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3034)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+15.0i] - l.%i\n, [%-+15.0i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+15.0i] - l.%i\n, [%-+15.0i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3035)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+15.0i] - l.%i\n, [%-+15.0i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+15.0i] - l.%i\n, [%-+15.0i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3036)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+15.5i] - l.%i\n, [%-+15.5i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+15.5i] - l.%i\n, [%-+15.5i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3037)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+15.5i] - l.%i\n, [%-+15.5i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+15.5i] - l.%i\n, [%-+15.5i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3038)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+15.5i] - l.%i\n, [%-+15.5i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+15.5i] - l.%i\n, [%-+15.5i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3039)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+15.20i] - l.%i\n, [%-+15.20i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+15.20i] - l.%i\n, [%-+15.20i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3040)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+15.20i] - l.%i\n, [%-+15.20i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+15.20i] - l.%i\n, [%-+15.20i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3041)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+15.20i] - l.%i\n, [%-+15.20i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+15.20i] - l.%i\n, [%-+15.20i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3072)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- i] - l.%i\n, [%- i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%- i] - l.%i\n, [%- i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3073)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- i] - l.%i\n, [%- i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%- i] - l.%i\n, [%- i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3074)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- i] - l.%i\n, [%- i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%- i] - l.%i\n, [%- i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3075)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 3i] - l.%i\n, [%- 3i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 3i] - l.%i\n, [%- 3i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3076)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 3i] - l.%i\n, [%- 3i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 3i] - l.%i\n, [%- 3i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3077)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 3i] - l.%i\n, [%- 3i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 3i] - l.%i\n, [%- 3i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3078)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 3.0i] - l.%i\n, [%- 3.0i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 3.0i] - l.%i\n, [%- 3.0i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3079)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 3.0i] - l.%i\n, [%- 3.0i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 3.0i] - l.%i\n, [%- 3.0i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3080)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 3.0i] - l.%i\n, [%- 3.0i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 3.0i] - l.%i\n, [%- 3.0i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3081)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 3.2i] - l.%i\n, [%- 3.2i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 3.2i] - l.%i\n, [%- 3.2i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3082)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 3.2i] - l.%i\n, [%- 3.2i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 3.2i] - l.%i\n, [%- 3.2i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3083)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 3.2i] - l.%i\n, [%- 3.2i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 3.2i] - l.%i\n, [%- 3.2i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3084)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 3.5i] - l.%i\n, [%- 3.5i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 3.5i] - l.%i\n, [%- 3.5i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3085)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 3.5i] - l.%i\n, [%- 3.5i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 3.5i] - l.%i\n, [%- 3.5i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3086)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 3.5i] - l.%i\n, [%- 3.5i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 3.5i] - l.%i\n, [%- 3.5i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3087)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 3.15i] - l.%i\n, [%- 3.15i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 3.15i] - l.%i\n, [%- 3.15i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3088)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 3.15i] - l.%i\n, [%- 3.15i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 3.15i] - l.%i\n, [%- 3.15i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3089)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 3.15i] - l.%i\n, [%- 3.15i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 3.15i] - l.%i\n, [%- 3.15i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3090)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 15i] - l.%i\n, [%- 15i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 15i] - l.%i\n, [%- 15i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3091)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 15i] - l.%i\n, [%- 15i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 15i] - l.%i\n, [%- 15i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3092)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 15i] - l.%i\n, [%- 15i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 15i] - l.%i\n, [%- 15i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3093)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 15.0i] - l.%i\n, [%- 15.0i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 15.0i] - l.%i\n, [%- 15.0i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3094)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 15.0i] - l.%i\n, [%- 15.0i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 15.0i] - l.%i\n, [%- 15.0i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3095)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 15.0i] - l.%i\n, [%- 15.0i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 15.0i] - l.%i\n, [%- 15.0i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3096)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 15.5i] - l.%i\n, [%- 15.5i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 15.5i] - l.%i\n, [%- 15.5i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3097)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 15.5i] - l.%i\n, [%- 15.5i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 15.5i] - l.%i\n, [%- 15.5i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3098)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 15.5i] - l.%i\n, [%- 15.5i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 15.5i] - l.%i\n, [%- 15.5i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3099)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 15.20i] - l.%i\n, [%- 15.20i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 15.20i] - l.%i\n, [%- 15.20i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3100)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 15.20i] - l.%i\n, [%- 15.20i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 15.20i] - l.%i\n, [%- 15.20i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3101)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 15.20i] - l.%i\n, [%- 15.20i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 15.20i] - l.%i\n, [%- 15.20i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3132)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+hi] - l.%i\n, [%-+hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+hi] - l.%i\n, [%-+hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3133)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+hi] - l.%i\n, [%-+hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+hi] - l.%i\n, [%-+hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3134)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+hi] - l.%i\n, [%-+hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+hi] - l.%i\n, [%-+hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3135)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+3hi] - l.%i\n, [%-+3hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+3hi] - l.%i\n, [%-+3hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3136)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+3hi] - l.%i\n, [%-+3hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+3hi] - l.%i\n, [%-+3hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3137)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+3hi] - l.%i\n, [%-+3hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+3hi] - l.%i\n, [%-+3hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3138)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+3.0hi] - l.%i\n, [%-+3.0hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+3.0hi] - l.%i\n, [%-+3.0hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3139)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+3.0hi] - l.%i\n, [%-+3.0hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+3.0hi] - l.%i\n, [%-+3.0hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3140)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+3.0hi] - l.%i\n, [%-+3.0hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+3.0hi] - l.%i\n, [%-+3.0hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3141)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+3.2hi] - l.%i\n, [%-+3.2hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+3.2hi] - l.%i\n, [%-+3.2hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3142)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+3.2hi] - l.%i\n, [%-+3.2hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+3.2hi] - l.%i\n, [%-+3.2hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3143)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+3.2hi] - l.%i\n, [%-+3.2hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+3.2hi] - l.%i\n, [%-+3.2hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3144)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+3.5hi] - l.%i\n, [%-+3.5hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+3.5hi] - l.%i\n, [%-+3.5hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3145)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+3.5hi] - l.%i\n, [%-+3.5hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+3.5hi] - l.%i\n, [%-+3.5hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3146)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+3.5hi] - l.%i\n, [%-+3.5hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+3.5hi] - l.%i\n, [%-+3.5hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3147)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+3.15hi] - l.%i\n, [%-+3.15hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+3.15hi] - l.%i\n, [%-+3.15hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3148)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+3.15hi] - l.%i\n, [%-+3.15hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+3.15hi] - l.%i\n, [%-+3.15hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3149)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+3.15hi] - l.%i\n, [%-+3.15hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+3.15hi] - l.%i\n, [%-+3.15hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3150)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+15hi] - l.%i\n, [%-+15hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+15hi] - l.%i\n, [%-+15hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3151)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+15hi] - l.%i\n, [%-+15hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+15hi] - l.%i\n, [%-+15hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3152)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+15hi] - l.%i\n, [%-+15hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+15hi] - l.%i\n, [%-+15hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3153)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+15.0hi] - l.%i\n, [%-+15.0hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+15.0hi] - l.%i\n, [%-+15.0hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3154)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+15.0hi] - l.%i\n, [%-+15.0hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+15.0hi] - l.%i\n, [%-+15.0hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3155)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+15.0hi] - l.%i\n, [%-+15.0hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+15.0hi] - l.%i\n, [%-+15.0hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3156)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+15.5hi] - l.%i\n, [%-+15.5hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+15.5hi] - l.%i\n, [%-+15.5hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3157)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+15.5hi] - l.%i\n, [%-+15.5hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+15.5hi] - l.%i\n, [%-+15.5hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3158)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+15.5hi] - l.%i\n, [%-+15.5hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+15.5hi] - l.%i\n, [%-+15.5hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3159)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+15.20hi] - l.%i\n, [%-+15.20hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+15.20hi] - l.%i\n, [%-+15.20hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3160)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+15.20hi] - l.%i\n, [%-+15.20hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+15.20hi] - l.%i\n, [%-+15.20hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3161)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+15.20hi] - l.%i\n, [%-+15.20hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+15.20hi] - l.%i\n, [%-+15.20hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3192)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- hi] - l.%i\n, [%- hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%- hi] - l.%i\n, [%- hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3193)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- hi] - l.%i\n, [%- hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%- hi] - l.%i\n, [%- hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3194)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- hi] - l.%i\n, [%- hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%- hi] - l.%i\n, [%- hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3195)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 3hi] - l.%i\n, [%- 3hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 3hi] - l.%i\n, [%- 3hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3196)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 3hi] - l.%i\n, [%- 3hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 3hi] - l.%i\n, [%- 3hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3197)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 3hi] - l.%i\n, [%- 3hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 3hi] - l.%i\n, [%- 3hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3198)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 3.0hi] - l.%i\n, [%- 3.0hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 3.0hi] - l.%i\n, [%- 3.0hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3199)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 3.0hi] - l.%i\n, [%- 3.0hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 3.0hi] - l.%i\n, [%- 3.0hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3200)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 3.0hi] - l.%i\n, [%- 3.0hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 3.0hi] - l.%i\n, [%- 3.0hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3201)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 3.2hi] - l.%i\n, [%- 3.2hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 3.2hi] - l.%i\n, [%- 3.2hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3202)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 3.2hi] - l.%i\n, [%- 3.2hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 3.2hi] - l.%i\n, [%- 3.2hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3203)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 3.2hi] - l.%i\n, [%- 3.2hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 3.2hi] - l.%i\n, [%- 3.2hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3204)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 3.5hi] - l.%i\n, [%- 3.5hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 3.5hi] - l.%i\n, [%- 3.5hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3205)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 3.5hi] - l.%i\n, [%- 3.5hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 3.5hi] - l.%i\n, [%- 3.5hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3206)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 3.5hi] - l.%i\n, [%- 3.5hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 3.5hi] - l.%i\n, [%- 3.5hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3207)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 3.15hi] - l.%i\n, [%- 3.15hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 3.15hi] - l.%i\n, [%- 3.15hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3208)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 3.15hi] - l.%i\n, [%- 3.15hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 3.15hi] - l.%i\n, [%- 3.15hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3209)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 3.15hi] - l.%i\n, [%- 3.15hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 3.15hi] - l.%i\n, [%- 3.15hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3210)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 15hi] - l.%i\n, [%- 15hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 15hi] - l.%i\n, [%- 15hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3211)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 15hi] - l.%i\n, [%- 15hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 15hi] - l.%i\n, [%- 15hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3212)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 15hi] - l.%i\n, [%- 15hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 15hi] - l.%i\n, [%- 15hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3213)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 15.0hi] - l.%i\n, [%- 15.0hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 15.0hi] - l.%i\n, [%- 15.0hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3214)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 15.0hi] - l.%i\n, [%- 15.0hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 15.0hi] - l.%i\n, [%- 15.0hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3215)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 15.0hi] - l.%i\n, [%- 15.0hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 15.0hi] - l.%i\n, [%- 15.0hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3216)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 15.5hi] - l.%i\n, [%- 15.5hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 15.5hi] - l.%i\n, [%- 15.5hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3217)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 15.5hi] - l.%i\n, [%- 15.5hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 15.5hi] - l.%i\n, [%- 15.5hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3218)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 15.5hi] - l.%i\n, [%- 15.5hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 15.5hi] - l.%i\n, [%- 15.5hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3219)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 15.20hi] - l.%i\n, [%- 15.20hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 15.20hi] - l.%i\n, [%- 15.20hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3220)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 15.20hi] - l.%i\n, [%- 15.20hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 15.20hi] - l.%i\n, [%- 15.20hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3221)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 15.20hi] - l.%i\n, [%- 15.20hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 15.20hi] - l.%i\n, [%- 15.20hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4001)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%u] - l.%d\n, [%u]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%u] - l.%d\n, [%u]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4002)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%u] - l.%d\n, [%u]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%u] - l.%d\n, [%u]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4004)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3u] - l.%d\n, [%3u]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%3u] - l.%d\n, [%3u]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4005)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3u] - l.%d\n, [%3u]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%3u] - l.%d\n, [%3u]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4006)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3u] - l.%d\n, [%3u]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%3u] - l.%d\n, [%3u]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4007)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.0u] - l.%d\n, [%3.0u]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.0u] - l.%d\n, [%3.0u]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4008)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.0u] - l.%d\n, [%3.0u]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.0u] - l.%d\n, [%3.0u]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4009)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.0u] - l.%d\n, [%3.0u]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.0u] - l.%d\n, [%3.0u]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4010)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.2u] - l.%d\n, [%3.2u]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.2u] - l.%d\n, [%3.2u]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4011)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.2u] - l.%d\n, [%3.2u]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.2u] - l.%d\n, [%3.2u]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4012)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.2u] - l.%d\n, [%3.2u]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.2u] - l.%d\n, [%3.2u]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4013)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.5u] - l.%d\n, [%3.5u]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.5u] - l.%d\n, [%3.5u]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4014)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.5u] - l.%d\n, [%3.5u]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.5u] - l.%d\n, [%3.5u]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4015)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.5u] - l.%d\n, [%3.5u]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.5u] - l.%d\n, [%3.5u]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4016)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.15u] - l.%d\n, [%3.15u]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.15u] - l.%d\n, [%3.15u]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4017)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.15u] - l.%d\n, [%3.15u]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.15u] - l.%d\n, [%3.15u]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4018)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.15u] - l.%d\n, [%3.15u]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.15u] - l.%d\n, [%3.15u]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4019)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15u] - l.%d\n, [%15u]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%15u] - l.%d\n, [%15u]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4020)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15u] - l.%d\n, [%15u]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%15u] - l.%d\n, [%15u]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4021)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15u] - l.%d\n, [%15u]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%15u] - l.%d\n, [%15u]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4022)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.0u] - l.%d\n, [%15.0u]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.0u] - l.%d\n, [%15.0u]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4023)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.0u] - l.%d\n, [%15.0u]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.0u] - l.%d\n, [%15.0u]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4024)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.5u] - l.%d\n, [%15.5u]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.5u] - l.%d\n, [%15.5u]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4025)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.20u] - l.%d\n, [%15.20u]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.20u] - l.%d\n, [%15.20u]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4026)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.20u] - l.%d\n, [%15.20u]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.20u] - l.%d\n, [%15.20u]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4027)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.20u] - l.%d\n, [%15.20u]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.20u] - l.%d\n, [%15.20u]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4028)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-u] - l.%d\n, [%-u]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-u] - l.%d\n, [%-u]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4029)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-u] - l.%d\n, [%-u]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-u] - l.%d\n, [%-u]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4030)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-u] - l.%d\n, [%-u]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-u] - l.%d\n, [%-u]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4031)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3u] - l.%d\n, [%-3u]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3u] - l.%d\n, [%-3u]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4032)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3u] - l.%d\n, [%-3u]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3u] - l.%d\n, [%-3u]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4033)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3u] - l.%d\n, [%-3u]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3u] - l.%d\n, [%-3u]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4034)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.0u] - l.%d\n, [%-3.0u]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.0u] - l.%d\n, [%-3.0u]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4035)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.0u] - l.%d\n, [%-3.0u]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.0u] - l.%d\n, [%-3.0u]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4036)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.0u] - l.%d\n, [%-3.0u]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.0u] - l.%d\n, [%-3.0u]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4037)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.2u] - l.%d\n, [%-3.2u]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.2u] - l.%d\n, [%-3.2u]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4038)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.2u] - l.%d\n, [%-3.2u]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.2u] - l.%d\n, [%-3.2u]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4039)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.2u] - l.%d\n, [%-3.2u]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.2u] - l.%d\n, [%-3.2u]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4040)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.5u] - l.%d\n, [%-3.5u]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.5u] - l.%d\n, [%-3.5u]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4041)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.5u] - l.%d\n, [%-3.5u]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.5u] - l.%d\n, [%-3.5u]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4042)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.5u] - l.%d\n, [%-3.5u]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.5u] - l.%d\n, [%-3.5u]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4043)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.15u] - l.%d\n, [%-3.15u]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.15u] - l.%d\n, [%-3.15u]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4044)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.15u] - l.%d\n, [%-3.15u]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.15u] - l.%d\n, [%-3.15u]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4045)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.15u] - l.%d\n, [%-3.15u]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.15u] - l.%d\n, [%-3.15u]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST
// end s21_sprintf

// s21_strlen
START_TEST(test_s21_strlen) {
  ck_assert_int_eq(s21_strlen("hello"), strlen("hello"));
  ck_assert_int_eq(s21_strlen(""), strlen(""));
  ck_assert_int_eq(s21_strlen("123456789"), strlen("123456789"));
}
END_TEST

// s21_strncpy
START_TEST(test_s21_strncpy_normal) {
  char dest1[50], dest2[50];
  s21_strncpy(dest1, "Hello", 6);
  strncpy(dest2, "Hello", 6);
  ck_assert_msg(memcmp(dest1, dest2, 6) == 0,
                "First 5 characters should be the same");
}
END_TEST

START_TEST(test_s21_strncpy_empty) {
  char dest1[50], dest2[50];
  ck_assert_str_eq(s21_strncpy(dest1, "", 5), strncpy(dest2, "", 5));
}
END_TEST

START_TEST(test_s21_strncpy_null) {
  char dest1[50];
  ck_assert_msg(s21_strncpy(NULL, "Hello", 5) == NULL,
                "Should return NULL when dest is NULL");
  ck_assert_msg(s21_strncpy(dest1, NULL, 5) == NULL,
                "Should return NULL when src is NULL");
}
END_TEST

START_TEST(test_s21_strncpy_zero_n) {
  char dest1[50] = "init", dest2[50] = "init";
  s21_strncpy(dest1, "Hello", 0);
  strncpy(dest2, "Hello", 0);

  ck_assert_msg(strcmp(dest1, dest2) == 0, "Strings should be the same");
}
END_TEST

START_TEST(test_s21_strncpy_large_n) {
  char dest1[10], dest2[10];
  strncpy(dest2, "Hello", 9);
  s21_strncpy(dest1, "Hello", 9);
  ck_assert_str_eq(dest1, dest2);
}
END_TEST

// s21_strncat
START_TEST(test_s21_strncat_normal) {
  char dest1[20];
  char dest2[20];
  size_t count = 5;

  strcpy(dest1, "Hello");
  strcpy(dest2, "Hello");

  s21_strncat(dest1, "World", count);
  strncat(dest2, "World", count);

  ck_assert_msg(strcmp(dest1, dest2) == 0, "Strings should be the same");
}
END_TEST

START_TEST(test_s21_strncat_empty_dest) {
  char dest1[20];
  char dest2[20];
  size_t count = 5;

  strcpy(dest1, "");
  strcpy(dest2, "");

  s21_strncat(dest1, "World", count);
  strncat(dest2, "World", count);

  ck_assert_msg(strcmp(dest1, dest2) == 0, "Strings should be the same");
}
END_TEST

START_TEST(test_s21_strncat_empty_source) {
  char dest1[20];
  char dest2[20];
  size_t count = 5;

  strcpy(dest1, "Hello");
  strcpy(dest2, "Hello");

  s21_strncat(dest1, "", count);
  strncat(dest2, "", count);

  ck_assert_msg(strcmp(dest1, dest2) == 0, "Strings should be the same");
}
END_TEST

START_TEST(test_s21_strncat_dest_longer_than_count) {
  char dest1[20];
  char dest2[20];
  size_t count = 5;

  strcpy(dest1, "Hello");
  strcpy(dest2, "Hello");

  s21_strncat(dest1, "World", count);
  strncat(dest2, "World", count);

  // Attempting to concatenate more characters than 'count'
  s21_strncat(dest1, "ExtraCharacters", count);
  strncat(dest2, "ExtraCharacters", count);

  ck_assert_msg(strcmp(dest1, dest2) == 0, "Strings should be the same");
}
END_TEST

START_TEST(test_s21_strncat_count_greater_than_source_length) {
  char dest1[20];
  char dest2[20];
  s21_size_t s21_count = 20;
  size_t count = 20;

  strcpy(dest1, "Hello");
  strcpy(dest2, "Hello");

  s21_strncat(dest1, "World", s21_count);
  strncat(dest2, "World", count);

  ck_assert_msg(strcmp(dest1, dest2) == 0, "Strings should be the same");
}
END_TEST

// s21_strstr
START_TEST(test_strstr_null) {
  ck_assert_msg(s21_strstr(NULL, "Hello") == NULL,
                "Should return NULL when string is NULL");
  ck_assert_msg(s21_strstr("Hello", NULL) == NULL,
                "Should return NULL when substring is NULL");
}
END_TEST

START_TEST(test_strstr_empty) {
  ck_assert_msg(s21_strstr("", "Hello") == NULL,
                "Should return NULL when string is empty");
  ck_assert_msg(strcmp(s21_strstr("Hello", ""), "Hello") == 0,
                "Should return original string when substring is empty");
  ck_assert_msg(
      strcmp(s21_strstr("", ""), "") == 0,
      "Should return empty string when both string and substring are empty");
}
END_TEST

START_TEST(test_strstr_not_found) {
  ck_assert_msg(s21_strstr("Hello", "World") == NULL,
                "Should return NULL when substring is not found in string");
}
END_TEST

START_TEST(test_strstr_found) {
  ck_assert_msg(s21_strstr("Hello World", "World") != NULL,
                "Should not return NULL when substring is found in string");
  ck_assert_str_eq(s21_strstr("Hello World", "World"), "World");
}
END_TEST

START_TEST(test_strstr_case_sensitive) {
  ck_assert_msg(
      s21_strstr("Hello World", "world") == NULL,
      "Should be case sensitive and return NULL when cases do not match");
}
END_TEST

START_TEST(test_strstr_match_at_beginning) {
  char haystack[] = "Hello World";
  char needle[] = "Hello";
  ck_assert_str_eq(s21_strstr(haystack, needle), haystack);
}
END_TEST

START_TEST(test_strstr_match_at_end) {
  char haystack[] = "Hello World";
  char needle[] = "World";
  ck_assert_str_eq(s21_strstr(haystack, needle), haystack + 6);
}
END_TEST

START_TEST(test_strstr_match_in_middle) {
  char haystack[] = "Hello World";
  char needle[] = "lo Wo";
  ck_assert_str_eq(s21_strstr(haystack, needle), haystack + 3);
}
END_TEST

START_TEST(test_strstr_multiple_matches) {
  char haystack[] = "Hello Hello Hello";
  char needle[] = "Hello";
  ck_assert_str_eq(s21_strstr(haystack, needle), haystack);
}
END_TEST

// s21_strncmp

START_TEST(test_strncmp_empty) {
  char str_1[1] = "";
  char str_2[1] = "";
  ck_assert_int_eq(strncmp(str_1, str_2, 1), s21_strncmp(str_1, str_2, 1));
}
END_TEST

START_TEST(test_strncmp_0) {
  char str_1[13] = "Hello world\0";
  char str_2[12] = "Hello world ";
  ck_assert_int_eq(strncmp(str_1, str_2, 13), s21_strncmp(str_1, str_2, 13));
}
END_TEST

START_TEST(test_strncmp_first_long) {
  char str_1[21] = "Hello world123467890";
  char str_2[12] = "Hello world";
  ck_assert_int_eq(strncmp(str_1, str_2, 12), s21_strncmp(str_1, str_2, 12));
}
END_TEST
START_TEST(test_strncmp_second_long) {
  char str_1[12] = "Hello world";
  char str_2[21] = "Hello world123467890";
  ck_assert_int_eq(strncmp(str_1, str_2, 12), s21_strncmp(str_1, str_2, 12));
}
END_TEST

// s21_strpbrk

START_TEST(test_strpbrk_empty) {
  char str_1[1] = "";
  char str_2[1] = "";
  ck_assert_ptr_eq(s21_strpbrk(str_1, str_2), strpbrk(str_1, str_2));
}
END_TEST

START_TEST(test_strpbrk_first_match) {
  char str_1[13] = "Hello world";
  char str_2[2] = "H";
  ck_assert_ptr_eq(s21_strpbrk(str_1, str_2), strpbrk(str_1, str_2));
}
END_TEST

START_TEST(test_strpbrk_no_match) {
  char str_1[13] = "Hello world";
  char str_2[5] = "1234";
  ck_assert_ptr_eq(s21_strpbrk(str_1, str_2), strpbrk(str_1, str_2));
}
END_TEST

START_TEST(test_strpbrk_multiple_matches) {
  char str_1[13] = "Hello world";
  char str_2[5] = "o w";
  ck_assert_ptr_eq(s21_strpbrk(str_1, str_2), strpbrk(str_1, str_2));
}

// s21_strcspn

START_TEST(test_strcspn_no_match) {
  char str1[7] = "abcdef";
  char str2[2] = "x";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST
START_TEST(test_strcspn_match_end) {
  char str1[7] = "abcdef";
  char str2[2] = "f";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST
START_TEST(test_strcspn_match_start) {
  char str1[7] = "abcdef";
  char str2[2] = "a";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST
START_TEST(test_strcspn_empty_str1) {
  char str1[1] = "";
  char str2[2] = "x";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST
START_TEST(test_strcspn_empty_str2) {
  char str1[7] = "abcdef";
  char str2[1] = "";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}

// s21_strchr

START_TEST(test_s21_strchr_normal) {
  const char *str = "Hello, World!";
  char target = 'o';
  char *result_s21 = s21_strchr(str, target);
  char *result_orig = strchr(str, target);
  ck_assert_ptr_eq(result_s21, result_orig);
}
END_TEST
START_TEST(test_s21_strchr_char_not_present) {
  const char *str = "Hello, World!";
  char target = 'z';
  char *result_s21 = s21_strchr(str, target);
  char *result_orig = strchr(str, target);
  ck_assert_ptr_eq(result_s21, result_orig);
}
END_TEST
START_TEST(test_s21_strchr_char_null_terminator) {
  const char *str = "Hello, World!";
  char target = '\0';
  char *result_s21 = s21_strchr(str, target);
  char *result_orig = strchr(str, target);
  ck_assert_ptr_eq(result_s21, result_orig);
}
END_TEST

// s21_strrchr

START_TEST(test_s21_strrchr_normal) {
  const char *str = "Hello, World!";
  int target = 'o';
  char *result_s21 = s21_strrchr(str, target);
  char *result_orig = strrchr(str, target);
  ck_assert_ptr_eq(result_s21, result_orig);
}
END_TEST
START_TEST(test_s21_strrchr_char_not_present) {
  const char *str = "Hello, World!";
  int target = 'z';
  char *result_s21 = s21_strrchr(str, target);
  char *result_orig = strrchr(str, target);
  ck_assert_ptr_eq(result_s21, result_orig);
}
END_TEST
START_TEST(test_s21_strrchr_char_null_terminator) {
  const char *str = "Hello, World!";
  int target = '\0';
  char *result_s21 = s21_strrchr(str, target);
  char *result_orig = strrchr(str, target);
  ck_assert_ptr_eq(result_s21, result_orig);
}
END_TEST

// memchr

START_TEST(test_memchr_not_found) {
  char data[] = "Hello World";
  ck_assert_msg(s21_memchr(data, 'a', 11) == NULL,
                "Should return NULL when byte is not found in data");
}
END_TEST

START_TEST(test_memchr_found) {
  char data[] = "Hello World";
  ck_assert_msg(s21_memchr(data, 'W', 11) != NULL,
                "Should not return NULL when byte is found in data");
  ck_assert_ptr_eq(s21_memchr(data, 'W', 11), data + 6);
}
END_TEST

START_TEST(test_memchr_match_at_beginning) {
  char data[] = "Hello World";
  ck_assert_ptr_eq(s21_memchr(data, 'H', 11), data);
}
END_TEST

START_TEST(test_memchr_match_at_end) {
  char data[] = "Hello World";
  ck_assert_ptr_eq(s21_memchr(data, 'd', 11), data + 10);
}
END_TEST

START_TEST(test_memchr_match_in_middle) {
  char data[] = "Hello World";
  ck_assert_ptr_eq(s21_memchr(data, 'l', 11), data + 2);
}
END_TEST

START_TEST(test_memchr_match_with_length) {
  char data[] = "Hello World";
  ck_assert_ptr_eq(s21_memchr(data, 'l', 3), data + 2);
}
END_TEST

START_TEST(test_memchr_match_with_zero_length) {
  char data[] = "Hello World";
  ck_assert_msg(s21_memchr(data, 'l', 0) == NULL,
                "Should return NULL when length is 0");
}
END_TEST

// memcmp

START_TEST(test_memcmp_same_ptr) {
  char str[] = "Hello";
  int n = 5;
  int result = s21_memcmp(str, str, n);
  ck_assert_int_eq(result, 0);
}
END_TEST

START_TEST(test_memcmp_equal_strings) {
  char str1[] = "Hello";
  char str2[] = "Hello";
  int n = 5;
  ck_assert_int_eq(s21_memcmp(str1, str2, n), memcmp(str1, str2, n));
}
END_TEST

START_TEST(test_memcmp_different_strings) {
  char str1[] = "Hello";
  char str2[] = "World";
  int n = 5;
  ck_assert_int_eq(s21_memcmp(str1, str2, n), memcmp(str1, str2, n));
}
END_TEST

START_TEST(test_memcmp_partial_match) {
  char str1[] = "Hello World";
  char str2[] = "Hello There";
  int n = 5;
  ck_assert_int_eq(s21_memcmp(str1, str2, n), memcmp(str1, str2, n));
}
END_TEST

START_TEST(test_memcmp_first_string_long) {
  char str1[] = "Hello World";
  char str2[] = "Hello";
  int n = 7;
  ck_assert_int_eq(s21_memcmp(str1, str2, n), memcmp(str1, str2, n));
}
END_TEST

// memcpy

START_TEST(test_memcpy_empty) {
  char dest[10] = {0};
  char src[] = "";
  int n = 0;
  s21_memcpy(dest, src, n);
  char dest_expected[10] = {0};
  memcpy(dest_expected, src, n);
  ck_assert_mem_eq(dest, dest_expected, sizeof(dest));
}
END_TEST

START_TEST(test_memcpy_full_string) {
  char dest[10] = {0};
  char src[] = "Hello";
  int n = 5;
  s21_memcpy(dest, src, n);
  char dest_expected[10] = {0};
  memcpy(dest_expected, src, n);
  ck_assert_mem_eq(dest, dest_expected, sizeof(dest));
}
END_TEST

START_TEST(test_memcpy_partial_string) {
  char dest[10] = {0};
  char src[] = "Hello World";
  int n = 5;
  s21_memcpy(dest, src, n);
  char dest_expected[10] = {0};
  memcpy(dest_expected, src, n);
  ck_assert_mem_eq(dest, dest_expected, sizeof(dest));
}

START_TEST(test_memcpy_large_string) {
  char dest[100] = {0};
  char src[] =
      "This is a very long string that exceeds the size of the destination "
      "buffer..........................";
  int n = strlen(src);
  s21_memcpy(dest, src, n);
  char dest_expected[100] = {0};
  memcpy(dest_expected, src, n);
  ck_assert_mem_eq(dest, dest_expected, sizeof(dest));
}
END_TEST

// memset

START_TEST(test_memset_basic) {
  char str[] = "Hello World";
  s21_memset(str, '*', 5);
  ck_assert_str_eq(str, "***** World");
}
END_TEST

START_TEST(test_memset_zero_len) {
  char str[] = "Hello World";
  s21_memset(str, '*', 0);
  ck_assert_str_eq(str, "Hello World");
}
END_TEST

START_TEST(test_memset_full_len) {
  char str[] = "Hello World";
  s21_memset(str, '*', strlen(str));
  ck_assert_str_eq(str, "***********");
}
END_TEST

START_TEST(test_memset_partial_len) {
  char str[] = "Hello World";
  s21_memset(str + 3, '*', 5);
  ck_assert_str_eq(str, "Hel*****rld");
}
END_TEST

START_TEST(test_memset_zero_value) {
  char str[] = "Hello World";
  s21_memset(str, 0, strlen(str));
  ck_assert_str_eq(str, "");
}
END_TEST

// strtok

START_TEST(test_strtok_multiple_delimiters) {
  char str[] = "Hello;World,Test;test";
  const char delimiters[] = ";,";
  char *token_s21 = s21_strtok(strdup(str), delimiters);
  char *token_orig = strtok(strdup(str), delimiters);

  while (token_s21 != NULL && token_orig != NULL) {
    ck_assert_str_eq(token_s21, token_orig);
    token_s21 = s21_strtok(NULL, delimiters);
    token_orig = strtok(NULL, delimiters);
  }

  ck_assert_ptr_eq(token_s21, token_orig);
  free(token_s21);
  free(token_orig);
}
END_TEST
START_TEST(test_strtok_empty_tokens) {
  const char str[] = ",,,";
  const char delimiters[] = ",";
  char *token_s21 = s21_strtok(strdup(str), delimiters);
  char *token_orig = strtok(strdup(str), delimiters);

  ck_assert_ptr_eq(token_s21, token_orig);
}
END_TEST
START_TEST(test_strtok_no_delimiters) {
  const char str[] = "HelloWorldTest";
  const char delimiters[] = ",";
  char *token_s21 = s21_strtok(strdup(str), delimiters);
  char *token_orig = strtok(strdup(str), delimiters);

  ck_assert_str_eq(token_s21, token_orig);

  free(token_s21);
  free(token_orig);
}
END_TEST
START_TEST(test_strtok_null_string) {
  const char delimiters[] = ",";
  char *token_s21 = s21_strtok(NULL, delimiters);
  char *token_orig = strtok(NULL, delimiters);

  ck_assert_ptr_eq(token_s21, token_orig);
}
END_TEST
START_TEST(test_strtok_basic) {
  const char str[] = "Hello,World,Test";
  const char delimiters[] = ",";
  char *token_s21 = s21_strtok(strdup(str), delimiters);
  char *token_orig = strtok(strdup(str), delimiters);
  while (token_s21 != NULL && token_orig != NULL) {
    ck_assert_str_eq(token_s21, token_orig);
    token_s21 = s21_strtok(NULL, delimiters);
    token_orig = strtok(NULL, delimiters);
  }
}
END_TEST

Suite *str_suite(void) {
  Suite *s;
  TCase *tc_strlen, *tc_strncpy, *tc_strncat, *tc_strstr, *tc_strncmp,
      *tc_strcspn, *tc_strbrk, *tc_strchr, *tc_strrchr, *tc_memchr, *tc_memcpy,
      *tc_memcmp, *tc_memset, *tc_strtok, *tc_sprintf;

  s = suite_create("String");

  // sprintf
  tc_sprintf = tcase_create("s21_sprintf");
  tcase_add_test(tc_sprintf, sprintf_001);
  tcase_add_test(tc_sprintf, sprintf_002);
  tcase_add_test(tc_sprintf, sprintf_003);
  tcase_add_test(tc_sprintf, sprintf_004);
  tcase_add_test(tc_sprintf, sprintf_005);
  tcase_add_test(tc_sprintf, sprintf_006);
  tcase_add_test(tc_sprintf, sprintf_007);
  tcase_add_test(tc_sprintf, sprintf_008);
  tcase_add_test(tc_sprintf, sprintf_009);
  tcase_add_test(tc_sprintf, sprintf_010);
  tcase_add_test(tc_sprintf, sprintf_011);
  tcase_add_test(tc_sprintf, sprintf_012);
  // tcase_add_test(tc_sprintf, sprintf_013);
  // tcase_add_test(tc_sprintf, sprintf_014);
  // tcase_add_test(tc_sprintf, sprintf_015);
  tcase_add_test(tc_sprintf, sprintf_016);
  // tcase_add_test(tc_sprintf, sprintf_017);
  tcase_add_test(tc_sprintf, sprintf_018);
  tcase_add_test(tc_sprintf, sprintf_019);
  tcase_add_test(tc_sprintf, sprintf_020);
  tcase_add_test(tc_sprintf, sprintf_021);
  tcase_add_test(tc_sprintf, sprintf_022);
  tcase_add_test(tc_sprintf, sprintf_023);
  tcase_add_test(tc_sprintf, sprintf_024);
  tcase_add_test(tc_sprintf, sprintf_025);
  tcase_add_test(tc_sprintf, sprintf_026);
  tcase_add_test(tc_sprintf, sprintf_027);
  tcase_add_test(tc_sprintf, sprintf_028);
  tcase_add_test(tc_sprintf, sprintf_029);
  tcase_add_test(tc_sprintf, sprintf_030);
  tcase_add_test(tc_sprintf, sprintf_031);
  tcase_add_test(tc_sprintf, sprintf_032);
  tcase_add_test(tc_sprintf, sprintf_033);
  tcase_add_test(tc_sprintf, sprintf_034);
  tcase_add_test(tc_sprintf, sprintf_035);
  tcase_add_test(tc_sprintf, sprintf_036);
  tcase_add_test(tc_sprintf, sprintf_037);
  tcase_add_test(tc_sprintf, sprintf_038);
  tcase_add_test(tc_sprintf, sprintf_039);
  tcase_add_test(tc_sprintf, sprintf_040);
  tcase_add_test(tc_sprintf, sprintf_041);
  tcase_add_test(tc_sprintf, sprintf_042);
  tcase_add_test(tc_sprintf, sprintf_043);
  tcase_add_test(tc_sprintf, sprintf_044);
  tcase_add_test(tc_sprintf, sprintf_045);
  tcase_add_test(tc_sprintf, sprintf_046);
  tcase_add_test(tc_sprintf, sprintf_047);
  tcase_add_test(tc_sprintf, sprintf_048);
  tcase_add_test(tc_sprintf, sprintf_049);
  tcase_add_test(tc_sprintf, sprintf_050);
  tcase_add_test(tc_sprintf, sprintf_051);
  tcase_add_test(tc_sprintf, sprintf_052);
  tcase_add_test(tc_sprintf, sprintf_053);
  tcase_add_test(tc_sprintf, sprintf_054);
  tcase_add_test(tc_sprintf, sprintf_055);
  tcase_add_test(tc_sprintf, sprintf_056);
  tcase_add_test(tc_sprintf, sprintf_057);
  tcase_add_test(tc_sprintf, sprintf_058);
  tcase_add_test(tc_sprintf, sprintf_059);
  tcase_add_test(tc_sprintf, sprintf_060);
  tcase_add_test(tc_sprintf, sprintf_061);
  tcase_add_test(tc_sprintf, sprintf_062);
  tcase_add_test(tc_sprintf, sprintf_063);
  tcase_add_test(tc_sprintf, sprintf_064);
  tcase_add_test(tc_sprintf, sprintf_065);
  tcase_add_test(tc_sprintf, sprintf_066);
  tcase_add_test(tc_sprintf, sprintf_067);
  tcase_add_test(tc_sprintf, sprintf_068);
  tcase_add_test(tc_sprintf, sprintf_069);
  tcase_add_test(tc_sprintf, sprintf_070);
  tcase_add_test(tc_sprintf, sprintf_071);
  tcase_add_test(tc_sprintf, sprintf_072);
  tcase_add_test(tc_sprintf, sprintf_073);
  tcase_add_test(tc_sprintf, sprintf_074);
  tcase_add_test(tc_sprintf, sprintf_075);
  tcase_add_test(tc_sprintf, sprintf_076);
  tcase_add_test(tc_sprintf, sprintf_077);
  tcase_add_test(tc_sprintf, sprintf_078);
  tcase_add_test(tc_sprintf, sprintf_079);
  tcase_add_test(tc_sprintf, sprintf_080);
  tcase_add_test(tc_sprintf, sprintf_081);
  tcase_add_test(tc_sprintf, sprintf_082);
  tcase_add_test(tc_sprintf, sprintf_083);
  tcase_add_test(tc_sprintf, sprintf_084);
  tcase_add_test(tc_sprintf, sprintf_085);
  tcase_add_test(tc_sprintf, sprintf_086);
  tcase_add_test(tc_sprintf, sprintf_087);
  tcase_add_test(tc_sprintf, sprintf_088);
  tcase_add_test(tc_sprintf, sprintf_089);
  tcase_add_test(tc_sprintf, sprintf_090);
  tcase_add_test(tc_sprintf, sprintf_091);
  tcase_add_test(tc_sprintf, sprintf_092);
  tcase_add_test(tc_sprintf, sprintf_093);
  tcase_add_test(tc_sprintf, sprintf_094);
  tcase_add_test(tc_sprintf, sprintf_095);
  tcase_add_test(tc_sprintf, sprintf_096);
  tcase_add_test(tc_sprintf, sprintf_097);
  tcase_add_test(tc_sprintf, sprintf_098);
  tcase_add_test(tc_sprintf, sprintf_099);
  tcase_add_test(tc_sprintf, sprintf_100);
  tcase_add_test(tc_sprintf, sprintf_101);
  tcase_add_test(tc_sprintf, sprintf_102);
  tcase_add_test(tc_sprintf, sprintf_103);
  tcase_add_test(tc_sprintf, sprintf_104);
  tcase_add_test(tc_sprintf, sprintf_105);
  tcase_add_test(tc_sprintf, sprintf_106);
  tcase_add_test(tc_sprintf, sprintf_107);
  tcase_add_test(tc_sprintf, sprintf_108);
  tcase_add_test(tc_sprintf, sprintf_109);
  tcase_add_test(tc_sprintf, sprintf_110);
  tcase_add_test(tc_sprintf, sprintf_111);
  tcase_add_test(tc_sprintf, sprintf_112);
  tcase_add_test(tc_sprintf, sprintf_113);
  tcase_add_test(tc_sprintf, sprintf_114);
  tcase_add_test(tc_sprintf, sprintf_115);
  tcase_add_test(tc_sprintf, sprintf_116);
  tcase_add_test(tc_sprintf, sprintf_117);
  tcase_add_test(tc_sprintf, sprintf_118);
  tcase_add_test(tc_sprintf, sprintf_119);
  tcase_add_test(tc_sprintf, sprintf_120);
  tcase_add_test(tc_sprintf, sprintf_121);
  tcase_add_test(tc_sprintf, sprintf_122);
  tcase_add_test(tc_sprintf, sprintf_123);
  tcase_add_test(tc_sprintf, sprintf_124);
  tcase_add_test(tc_sprintf, sprintf_125);
  tcase_add_test(tc_sprintf, sprintf_126);
  tcase_add_test(tc_sprintf, sprintf_127);
  tcase_add_test(tc_sprintf, sprintf_128);
  tcase_add_test(tc_sprintf, sprintf_129);
  tcase_add_test(tc_sprintf, sprintf_130);
  tcase_add_test(tc_sprintf, sprintf_131);
  tcase_add_test(tc_sprintf, sprintf_132);
  tcase_add_test(tc_sprintf, sprintf_133);
  tcase_add_test(tc_sprintf, sprintf_134);
  tcase_add_test(tc_sprintf, sprintf_135);
  tcase_add_test(tc_sprintf, sprintf_136);
  tcase_add_test(tc_sprintf, sprintf_137);
  tcase_add_test(tc_sprintf, sprintf_138);
  tcase_add_test(tc_sprintf, sprintf_139);
  tcase_add_test(tc_sprintf, sprintf_140);
  tcase_add_test(tc_sprintf, sprintf_141);
  tcase_add_test(tc_sprintf, sprintf_142);
  tcase_add_test(tc_sprintf, sprintf_143);
  tcase_add_test(tc_sprintf, sprintf_144);
  tcase_add_test(tc_sprintf, sprintf_145);
  tcase_add_test(tc_sprintf, sprintf_146);
  tcase_add_test(tc_sprintf, sprintf_147);
  tcase_add_test(tc_sprintf, sprintf_148);
  tcase_add_test(tc_sprintf, sprintf_149);
  tcase_add_test(tc_sprintf, sprintf_150);
  tcase_add_test(tc_sprintf, sprintf_151);
  tcase_add_test(tc_sprintf, sprintf_152);
  tcase_add_test(tc_sprintf, sprintf_153);
  tcase_add_test(tc_sprintf, sprintf_154);
  tcase_add_test(tc_sprintf, sprintf_155);
  tcase_add_test(tc_sprintf, sprintf_156);
  tcase_add_test(tc_sprintf, sprintf_157);
  tcase_add_test(tc_sprintf, sprintf_158);
  tcase_add_test(tc_sprintf, sprintf_159);
  tcase_add_test(tc_sprintf, sprintf_160);
  tcase_add_test(tc_sprintf, sprintf_161);
  tcase_add_test(tc_sprintf, sprintf_162);
  tcase_add_test(tc_sprintf, sprintf_163);
  tcase_add_test(tc_sprintf, sprintf_166);
  tcase_add_test(tc_sprintf, sprintf_170);
  tcase_add_test(tc_sprintf, sprintf_171);
  tcase_add_test(tc_sprintf, sprintf_172);
  tcase_add_test(tc_sprintf, sprintf_173);
  tcase_add_test(tc_sprintf, sprintf_174);
  tcase_add_test(tc_sprintf, sprintf_175);
  tcase_add_test(tc_sprintf, sprintf_176);
  tcase_add_test(tc_sprintf, sprintf_177);
  tcase_add_test(tc_sprintf, sprintf_178);
  tcase_add_test(tc_sprintf, sprintf_179);
  tcase_add_test(tc_sprintf, sprintf_180);
  tcase_add_test(tc_sprintf, sprintf_181);
  tcase_add_test(tc_sprintf, sprintf_182);
  tcase_add_test(tc_sprintf, sprintf_183);
  tcase_add_test(tc_sprintf, sprintf_184);
  tcase_add_test(tc_sprintf, sprintf_185);
  tcase_add_test(tc_sprintf, sprintf_186);
  tcase_add_test(tc_sprintf, sprintf_187);
  tcase_add_test(tc_sprintf, sprintf_188);
  tcase_add_test(tc_sprintf, sprintf_189);
  tcase_add_test(tc_sprintf, sprintf_190);
  tcase_add_test(tc_sprintf, sprintf_191);
  tcase_add_test(tc_sprintf, sprintf_192);
  tcase_add_test(tc_sprintf, sprintf_193);
  tcase_add_test(tc_sprintf, sprintf_194);
  tcase_add_test(tc_sprintf, sprintf_195);
  tcase_add_test(tc_sprintf, sprintf_196);
  tcase_add_test(tc_sprintf, sprintf_197);
  tcase_add_test(tc_sprintf, sprintf_198);
  tcase_add_test(tc_sprintf, sprintf_199);
  tcase_add_test(tc_sprintf, sprintf_200);
  tcase_add_test(tc_sprintf, sprintf_201);
  tcase_add_test(tc_sprintf, sprintf_202);
  tcase_add_test(tc_sprintf, sprintf_203);
  tcase_add_test(tc_sprintf, sprintf_204);
  tcase_add_test(tc_sprintf, sprintf_205);
  tcase_add_test(tc_sprintf, sprintf_206);
  tcase_add_test(tc_sprintf, sprintf_207);
  tcase_add_test(tc_sprintf, sprintf_208);
  tcase_add_test(tc_sprintf, sprintf_209);
  tcase_add_test(tc_sprintf, sprintf_210);
  tcase_add_test(tc_sprintf, sprintf_211);
  tcase_add_test(tc_sprintf, sprintf_212);
  tcase_add_test(tc_sprintf, sprintf_213);
  tcase_add_test(tc_sprintf, sprintf_214);
  tcase_add_test(tc_sprintf, sprintf_215);
  tcase_add_test(tc_sprintf, sprintf_216);
  tcase_add_test(tc_sprintf, sprintf_217);
  tcase_add_test(tc_sprintf, sprintf_218);
  tcase_add_test(tc_sprintf, sprintf_219);
  tcase_add_test(tc_sprintf, sprintf_220);
  tcase_add_test(tc_sprintf, sprintf_221);
  tcase_add_test(tc_sprintf, sprintf_222);
  tcase_add_test(tc_sprintf, sprintf_223);
  tcase_add_test(tc_sprintf, sprintf_224);
  tcase_add_test(tc_sprintf, sprintf_225);
  tcase_add_test(tc_sprintf, sprintf_226);
  tcase_add_test(tc_sprintf, sprintf_227);
  tcase_add_test(tc_sprintf, sprintf_228);
  tcase_add_test(tc_sprintf, sprintf_229);
  tcase_add_test(tc_sprintf, sprintf_230);
  tcase_add_test(tc_sprintf, sprintf_231);
  tcase_add_test(tc_sprintf, sprintf_232);
  tcase_add_test(tc_sprintf, sprintf_233);
  tcase_add_test(tc_sprintf, sprintf_234);
  tcase_add_test(tc_sprintf, sprintf_235);
  tcase_add_test(tc_sprintf, sprintf_236);
  // tcase_add_test(tc_sprintf, sprintf_237);
  // tcase_add_test(tc_sprintf, sprintf_238);
  tcase_add_test(tc_sprintf, sprintf_239);
  tcase_add_test(tc_sprintf, sprintf_240);
  tcase_add_test(tc_sprintf, sprintf_242);
  tcase_add_test(tc_sprintf, sprintf_250);
  tcase_add_test(tc_sprintf, sprintf_252);
  tcase_add_test(tc_sprintf, sprintf_253);
  tcase_add_test(tc_sprintf, sprintf_254);
  tcase_add_test(tc_sprintf, sprintf_255);
  tcase_add_test(tc_sprintf, sprintf_256);
  tcase_add_test(tc_sprintf, sprintf_257);
  tcase_add_test(tc_sprintf, sprintf_258);
  tcase_add_test(tc_sprintf, sprintf_259);
  tcase_add_test(tc_sprintf, sprintf_260);
  tcase_add_test(tc_sprintf, sprintf_261);
  tcase_add_test(tc_sprintf, sprintf_262);
  tcase_add_test(tc_sprintf, sprintf_263);
  tcase_add_test(tc_sprintf, sprintf_264);
  tcase_add_test(tc_sprintf, sprintf_265);
  tcase_add_test(tc_sprintf, sprintf_266);
  tcase_add_test(tc_sprintf, sprintf_267);
  tcase_add_test(tc_sprintf, sprintf_268);
  tcase_add_test(tc_sprintf, sprintf_269);
  tcase_add_test(tc_sprintf, sprintf_270);
  tcase_add_test(tc_sprintf, sprintf_271);
  tcase_add_test(tc_sprintf, sprintf_272);
  tcase_add_test(tc_sprintf, sprintf_273);
  tcase_add_test(tc_sprintf, sprintf_274);
  tcase_add_test(tc_sprintf, sprintf_275);
  tcase_add_test(tc_sprintf, sprintf_276);
  tcase_add_test(tc_sprintf, sprintf_277);
  tcase_add_test(tc_sprintf, sprintf_278);
  tcase_add_test(tc_sprintf, sprintf_279);
  tcase_add_test(tc_sprintf, sprintf_280);
  tcase_add_test(tc_sprintf, sprintf_281);
  tcase_add_test(tc_sprintf, sprintf_282);
  tcase_add_test(tc_sprintf, sprintf_283);
  tcase_add_test(tc_sprintf, sprintf_284);
  tcase_add_test(tc_sprintf, sprintf_285);
  tcase_add_test(tc_sprintf, sprintf_286);
  tcase_add_test(tc_sprintf, sprintf_287);
  tcase_add_test(tc_sprintf, sprintf_288);
  tcase_add_test(tc_sprintf, sprintf_289);
  tcase_add_test(tc_sprintf, sprintf_290);
  tcase_add_test(tc_sprintf, sprintf_291);
  tcase_add_test(tc_sprintf, sprintf_292);
  tcase_add_test(tc_sprintf, sprintf_293);
  tcase_add_test(tc_sprintf, sprintf_294);
  tcase_add_test(tc_sprintf, sprintf_295);
  tcase_add_test(tc_sprintf, sprintf_296);
  tcase_add_test(tc_sprintf, sprintf_297);
  tcase_add_test(tc_sprintf, sprintf_298);
  tcase_add_test(tc_sprintf, sprintf_299);
  tcase_add_test(tc_sprintf, sprintf_300);
  tcase_add_test(tc_sprintf, sprintf_301);
  tcase_add_test(tc_sprintf, sprintf_302);
  tcase_add_test(tc_sprintf, sprintf_303);
  tcase_add_test(tc_sprintf, sprintf_304);
  tcase_add_test(tc_sprintf, sprintf_305);
  tcase_add_test(tc_sprintf, sprintf_306);
  tcase_add_test(tc_sprintf, sprintf_307);
  tcase_add_test(tc_sprintf, sprintf_308);
  tcase_add_test(tc_sprintf, sprintf_309);
  tcase_add_test(tc_sprintf, sprintf_310);
  tcase_add_test(tc_sprintf, sprintf_311);
  tcase_add_test(tc_sprintf, sprintf_312);
  tcase_add_test(tc_sprintf, sprintf_313);
  tcase_add_test(tc_sprintf, sprintf_314);
  tcase_add_test(tc_sprintf, sprintf_315);
  tcase_add_test(tc_sprintf, sprintf_316);
  tcase_add_test(tc_sprintf, sprintf_317);
  tcase_add_test(tc_sprintf, sprintf_318);
  tcase_add_test(tc_sprintf, sprintf_319);
  tcase_add_test(tc_sprintf, sprintf_320);
  tcase_add_test(tc_sprintf, sprintf_321);
  tcase_add_test(tc_sprintf, sprintf_322);
  tcase_add_test(tc_sprintf, sprintf_323);
  tcase_add_test(tc_sprintf, sprintf_324);
  tcase_add_test(tc_sprintf, sprintf_325);
  tcase_add_test(tc_sprintf, sprintf_326);
  tcase_add_test(tc_sprintf, sprintf_327);
  tcase_add_test(tc_sprintf, sprintf_328);
  tcase_add_test(tc_sprintf, sprintf_329);
  tcase_add_test(tc_sprintf, sprintf_330);
  tcase_add_test(tc_sprintf, sprintf_331);
  tcase_add_test(tc_sprintf, sprintf_332);
  tcase_add_test(tc_sprintf, sprintf_333);
  tcase_add_test(tc_sprintf, sprintf_334);
  tcase_add_test(tc_sprintf, sprintf_335);
  tcase_add_test(tc_sprintf, sprintf_336);
  tcase_add_test(tc_sprintf, sprintf_337);
  tcase_add_test(tc_sprintf, sprintf_339);
  tcase_add_test(tc_sprintf, sprintf_340);
  tcase_add_test(tc_sprintf, sprintf_341);
  tcase_add_test(tc_sprintf, sprintf_342);
  tcase_add_test(tc_sprintf, sprintf_343);
  tcase_add_test(tc_sprintf, sprintf_344);
  tcase_add_test(tc_sprintf, sprintf_345);
  tcase_add_test(tc_sprintf, sprintf_346);
  tcase_add_test(tc_sprintf, sprintf_347);
  tcase_add_test(tc_sprintf, sprintf_348);
  tcase_add_test(tc_sprintf, sprintf_350);
  tcase_add_test(tc_sprintf, sprintf_351);
  tcase_add_test(tc_sprintf, sprintf_352);
  tcase_add_test(tc_sprintf, sprintf_353);
  tcase_add_test(tc_sprintf, sprintf_355);
  tcase_add_test(tc_sprintf, sprintf_356);
  tcase_add_test(tc_sprintf, sprintf_357);
  // tcase_add_test(tc_sprintf, sprintf_358);
  // tcase_add_test(tc_sprintf, sprintf_359);
  // tcase_add_test(tc_sprintf, sprintf_360);
  tcase_add_test(tc_sprintf, sprintf_361);
  tcase_add_test(tc_sprintf, sprintf_simple_int);
  tcase_add_test(tc_sprintf, sprintf_precise_int);
  tcase_add_test(tc_sprintf, sprintf_width_int);
  tcase_add_test(tc_sprintf, sprintf_minus_width_int);
  tcase_add_test(tc_sprintf, sprintf_plus_width_int);
  tcase_add_test(tc_sprintf, sprintf_flags_long_int);
  tcase_add_test(tc_sprintf, sprintf_flags_short_int);
  tcase_add_test(tc_sprintf, sprintf_zero_precision_zero_int);
  tcase_add_test(tc_sprintf, sprintf_space_flag_int);
  tcase_add_test(tc_sprintf, sprintf_unsigned_val);
  tcase_add_test(tc_sprintf, sprintf_unsigned_val_width);
  tcase_add_test(tc_sprintf, sprintf_unsigned_val_flags);
  tcase_add_test(tc_sprintf, sprintf_unsigned_val_precision);
  tcase_add_test(tc_sprintf, sprintf_unsigned_val_many_flags);
  tcase_add_test(tc_sprintf, sprintf_unsigned_val_short);
  tcase_add_test(tc_sprintf, sprintf_unsigned_val_long);
  tcase_add_test(tc_sprintf, sprintf_unsigned_val_many);
  tcase_add_test(tc_sprintf, sprintf_unsigned_zero);
  tcase_add_test(tc_sprintf, sprintf_one_char);
  tcase_add_test(tc_sprintf, sprintf_one_precision);
  tcase_add_test(tc_sprintf, sprintf_one_flags);
  tcase_add_test(tc_sprintf, sprintf_one_width);
  tcase_add_test(tc_sprintf, sprintf_one_many);
  tcase_add_test(tc_sprintf, sprintf_one_many_flags);
  tcase_add_test(tc_sprintf, sprintf_string);
  tcase_add_test(tc_sprintf, sprintf_string_precision);
  tcase_add_test(tc_sprintf, sprintf_string_width);
  tcase_add_test(tc_sprintf, sprintf_string_flags);
  tcase_add_test(tc_sprintf, sprintf_string_long);
  tcase_add_test(tc_sprintf, sprintf_string_many);
  tcase_add_test(tc_sprintf, sprintf_string_width_huge);
  tcase_add_test(tc_sprintf, sprintf_float_flags);
  tcase_add_test(tc_sprintf, sprintf_all_empty);
  tcase_add_test(tc_sprintf, sprintf_empty_format_and_parameters);
  tcase_add_test(tc_sprintf, sprintf_test_one_char);
  tcase_add_test(tc_sprintf, sprintf_test_many_char);
  tcase_add_test(tc_sprintf, sprintf_test_one_string);
  tcase_add_test(tc_sprintf, sprintf_test_many_string);
  tcase_add_test(tc_sprintf, sprintf_test_one_dec);
  tcase_add_test(tc_sprintf, sprintf_test_many_dec);
  tcase_add_test(tc_sprintf, sprintf_test_one_int);
  tcase_add_test(tc_sprintf, sprintf_test_many_int);
  tcase_add_test(tc_sprintf, sprintf_test_one_float);
  tcase_add_test(tc_sprintf, sprintf_test_many_float);
  tcase_add_test(tc_sprintf, sprintf_test_one_unsigned_dec);
  tcase_add_test(tc_sprintf, sprintf_test_many_unsigned_dec);
  tcase_add_test(tc_sprintf, sprintf_test_one_char_with_alignment_left);
  tcase_add_test(tc_sprintf, sprintf_test_one_char_with_alignment_right);
  tcase_add_test(tc_sprintf, sprintf_test_many_char_with_alignment);
  tcase_add_test(tc_sprintf, sprintf_test_sprintf1);
  tcase_add_test(tc_sprintf, sprintf_test_sprintf2);
  tcase_add_test(tc_sprintf, sprintf_test_sprintf3);
  tcase_add_test(tc_sprintf, sprintf_test_sprintf4);
  tcase_add_test(tc_sprintf, sprintf_test_sprintf6);
  tcase_add_test(tc_sprintf, sprintf_test_sprintf7);
  tcase_add_test(tc_sprintf, sprintf_test_sprintf8);
  tcase_add_test(tc_sprintf, sprintf_test_sprintf9);
  tcase_add_test(tc_sprintf, sprintf_test_sprintf10);
  tcase_add_test(tc_sprintf, sprintf_test_sprintf11);
  tcase_add_test(tc_sprintf, sprintf_test_sprintf14);
  tcase_add_test(tc_sprintf, sprintf_test_sprintf15);
  tcase_add_test(tc_sprintf, sprintf_test_sprintf16);
  tcase_add_test(tc_sprintf, sprintf_test_sprintf17);
  tcase_add_test(tc_sprintf, sprintf_test_sprintf18);
  tcase_add_test(tc_sprintf, sprintf_test_sprintf19);
  tcase_add_test(tc_sprintf, sprintf_test_sprintf20);
  tcase_add_test(tc_sprintf, sprintf_test_sprintf24);
  tcase_add_test(tc_sprintf, sprintf_test_sprintf25);
  tcase_add_test(tc_sprintf, sprintf_test_sprintf29);
  tcase_add_test(tc_sprintf, sprintf_test_sprintf30);
  // tcase_add_test(tc_sprintf, sprintf_test_sprintf26);
  // tcase_add_test(tc_sprintf, sprintf_test_sprintf27);

  tcase_add_test(tc_sprintf, sprintf_pr_1);
  tcase_add_test(tc_sprintf, sprintf_pr_2);
  tcase_add_test(tc_sprintf, sprintf_c_1);
  tcase_add_test(tc_sprintf, sprintf_c_2);
  tcase_add_test(tc_sprintf, sprintf_c_3);
  tcase_add_test(tc_sprintf, sprintf_c_4);
  tcase_add_test(tc_sprintf, sprintf_c_5);
  tcase_add_test(tc_sprintf, sprintf_c_6);
  tcase_add_test(tc_sprintf, sprintf_c_7);
  tcase_add_test(tc_sprintf, sprintf_c_8);
  tcase_add_test(tc_sprintf, sprintf_c_9);
  tcase_add_test(tc_sprintf, sprintf_c_10);
  tcase_add_test(tc_sprintf, sprintf_d_1);

  tcase_add_test(tc_sprintf, sprintf_d_3);
  tcase_add_test(tc_sprintf, sprintf_d_4);
  tcase_add_test(tc_sprintf, sprintf_d_5);
  tcase_add_test(tc_sprintf, sprintf_d_6);
  tcase_add_test(tc_sprintf, sprintf_d_7);
  tcase_add_test(tc_sprintf, sprintf_d_8);
  tcase_add_test(tc_sprintf, sprintf_d_9);
  tcase_add_test(tc_sprintf, sprintf_d_10);
  tcase_add_test(tc_sprintf, sprintf_d_11);

  tcase_add_test(tc_sprintf, sprintf_1);
  tcase_add_test(tc_sprintf, sprintf_2);
  tcase_add_test(tc_sprintf, sprintf_3);
  tcase_add_test(tc_sprintf, sprintf_4);
  tcase_add_test(tc_sprintf, sprintf_5);
  tcase_add_test(tc_sprintf, sprintf_6);
  tcase_add_test(tc_sprintf, sprintf_7);
  tcase_add_test(tc_sprintf, sprintf_8);
  tcase_add_test(tc_sprintf, sprintf_9);

  tcase_add_test(tc_sprintf, sprintf_12);
  // tcase_add_test(tc_sprintf, sprintf_13);
  // tcase_add_test(tc_sprintf, sprintf_14);
  // tcase_add_test(tc_sprintf, sprintf_15);
  tcase_add_test(tc_sprintf, sprintf_16);
  // tcase_add_test(tc_sprintf, sprintf_17);
  tcase_add_test(tc_sprintf, sprintf_18);
  tcase_add_test(tc_sprintf, sprintf_19);
  tcase_add_test(tc_sprintf, sprintf_20);
  tcase_add_test(tc_sprintf, sprintf_21);
  tcase_add_test(tc_sprintf, sprintf_22);
  tcase_add_test(tc_sprintf, sprintf_23);
  tcase_add_test(tc_sprintf, sprintf_24);
  tcase_add_test(tc_sprintf, sprintf_25);
  tcase_add_test(tc_sprintf, sprintf_26);
  tcase_add_test(tc_sprintf, sprintf_27);
  tcase_add_test(tc_sprintf, sprintf_28);
  tcase_add_test(tc_sprintf, sprintf_29);
  tcase_add_test(tc_sprintf, sprintf_30);
  tcase_add_test(tc_sprintf, sprintf_31);
  tcase_add_test(tc_sprintf, sprintf_32);
  tcase_add_test(tc_sprintf, sprintf_33);
  tcase_add_test(tc_sprintf, sprintf_34);
  tcase_add_test(tc_sprintf, sprintf_35);
  tcase_add_test(tc_sprintf, sprintf_36);
  tcase_add_test(tc_sprintf, sprintf_37);
  tcase_add_test(tc_sprintf, sprintf_38);
  tcase_add_test(tc_sprintf, sprintf_39);
  tcase_add_test(tc_sprintf, sprintf_40);
  tcase_add_test(tc_sprintf, sprintf_41);
  tcase_add_test(tc_sprintf, sprintf_42);
  tcase_add_test(tc_sprintf, sprintf_43);
  tcase_add_test(tc_sprintf, sprintf_44);
  tcase_add_test(tc_sprintf, int_sprintf_pr_1);
  tcase_add_test(tc_sprintf, int_sprintf_pr_2);
  tcase_add_test(tc_sprintf, int_sprintf_c_1);
  tcase_add_test(tc_sprintf, int_sprintf_c_2);
  tcase_add_test(tc_sprintf, int_sprintf_c_3);
  tcase_add_test(tc_sprintf, int_sprintf_c_4);
  tcase_add_test(tc_sprintf, int_sprintf_c_5);
  tcase_add_test(tc_sprintf, int_sprintf_c_6);
  tcase_add_test(tc_sprintf, int_sprintf_c_7);
  tcase_add_test(tc_sprintf, int_sprintf_c_8);
  tcase_add_test(tc_sprintf, int_sprintf_c_9);
  tcase_add_test(tc_sprintf, int_sprintf_c_10);
  tcase_add_test(tc_sprintf, int_sprintf_d_1);

  tcase_add_test(tc_sprintf, int_sprintf_d_3);
  tcase_add_test(tc_sprintf, int_sprintf_d_4);
  tcase_add_test(tc_sprintf, int_sprintf_d_5);
  tcase_add_test(tc_sprintf, int_sprintf_d_6);
  tcase_add_test(tc_sprintf, int_sprintf_d_7);
  tcase_add_test(tc_sprintf, int_sprintf_d_8);
  tcase_add_test(tc_sprintf, int_sprintf_d_9);
  tcase_add_test(tc_sprintf, int_sprintf_d_10);
  tcase_add_test(tc_sprintf, int_sprintf_d_11);

  tcase_add_test(tc_sprintf, int_sprintf_1);
  tcase_add_test(tc_sprintf, int_sprintf_2);
  tcase_add_test(tc_sprintf, int_sprintf_3);
  tcase_add_test(tc_sprintf, int_sprintf_4);
  tcase_add_test(tc_sprintf, int_sprintf_5);
  tcase_add_test(tc_sprintf, int_sprintf_6);
  tcase_add_test(tc_sprintf, int_sprintf_7);
  tcase_add_test(tc_sprintf, int_sprintf_8);
  tcase_add_test(tc_sprintf, int_sprintf_9);

  tcase_add_test(tc_sprintf, int_sprintf_12);
  tcase_add_test(tc_sprintf, int_sprintf_13);
  tcase_add_test(tc_sprintf, int_sprintf_14);
  tcase_add_test(tc_sprintf, int_sprintf_15);
  tcase_add_test(tc_sprintf, int_sprintf_16);
  tcase_add_test(tc_sprintf, int_sprintf_17);
  tcase_add_test(tc_sprintf, int_sprintf_18);
  tcase_add_test(tc_sprintf, int_sprintf_19);
  tcase_add_test(tc_sprintf, int_sprintf_20);
  tcase_add_test(tc_sprintf, int_sprintf_21);
  tcase_add_test(tc_sprintf, int_sprintf_22);
  tcase_add_test(tc_sprintf, sprintf_221);
  tcase_add_test(tc_sprintf, ssprintf_222);
  tcase_add_test(tc_sprintf, ssprintf_223);
  tcase_add_test(tc_sprintf, sprintf_224);
  tcase_add_test(tc_sprintf, ssprintf_225);
  tcase_add_test(tc_sprintf, ssprintf_226);

  tcase_add_test(tc_sprintf, ssprintf_228);
  tcase_add_test(tc_sprintf, ssprintf_229);
  tcase_add_test(tc_sprintf, ssprintf_2210);
  tcase_add_test(tc_sprintf, ssprintf_2211);
  tcase_add_test(tc_sprintf, ssprintf_2212);
  tcase_add_test(tc_sprintf, ssprintf_2213);
  tcase_add_test(tc_sprintf, ssprintf_2214);
  tcase_add_test(tc_sprintf, ssprintf_231);
  tcase_add_test(tc_sprintf, ssprintf_232);
  tcase_add_test(tc_sprintf, ssprintf_233);
  tcase_add_test(tc_sprintf, ssprintf_234);
  tcase_add_test(tc_sprintf, ssprintf_235);
  tcase_add_test(tc_sprintf, ssprintf_236);
  tcase_add_test(tc_sprintf, ssprintf_237);
  tcase_add_test(tc_sprintf, ssprintf_238);
  tcase_add_test(tc_sprintf, ssprintf_239);

  tcase_add_test(tc_sprintf, ssprintf_2313);
  tcase_add_test(tc_sprintf, ssprintf_2314);
  tcase_add_test(tc_sprintf, ssprintf_2315);
  tcase_add_test(tc_sprintf, ssprintf_2316);
  tcase_add_test(tc_sprintf, ssprintf_2317);
  tcase_add_test(tc_sprintf, ssprintf_2318);
  tcase_add_test(tc_sprintf, ssprintf_2319);
  tcase_add_test(tc_sprintf, ssprintf_2320);
  tcase_add_test(tc_sprintf, ssprintf_2321);
  tcase_add_test(tc_sprintf, ssprintf_2322);
  tcase_add_test(tc_sprintf, sprintf_2323);
  tcase_add_test(tc_sprintf, sprintf_2324);
  tcase_add_test(tc_sprintf, sprintf_2325);
  tcase_add_test(tc_sprintf, sprintf_2326);
  tcase_add_test(tc_sprintf, sprintf_2327);
  tcase_add_test(tc_sprintf, sprintf_2328);
  tcase_add_test(tc_sprintf, sprintf_2329);
  tcase_add_test(tc_sprintf, sprintf_2330);
  tcase_add_test(tc_sprintf, sprintf_2331);
  tcase_add_test(tc_sprintf, sprintf_2332);
  tcase_add_test(tc_sprintf, sprintf_2333);
  tcase_add_test(tc_sprintf, sprintf_2334);
  tcase_add_test(tc_sprintf, sprintf_2335);
  tcase_add_test(tc_sprintf, sprintf_2336);
  tcase_add_test(tc_sprintf, sprintf_2337);
  tcase_add_test(tc_sprintf, sprintf_2338);
  tcase_add_test(tc_sprintf, sprintf_2339);
  tcase_add_test(tc_sprintf, sprintf_2340);
  tcase_add_test(tc_sprintf, sprintf_2341);
  tcase_add_test(tc_sprintf, sprintf_2342);
  tcase_add_test(tc_sprintf, sprintf_2343);
  tcase_add_test(tc_sprintf, sprintf_2344);
  tcase_add_test(tc_sprintf, sprintf_2345);
  tcase_add_test(tc_sprintf, sprintf_2346);
  tcase_add_test(tc_sprintf, sprintf_2347);
  tcase_add_test(tc_sprintf, sprintf_2348);
  tcase_add_test(tc_sprintf, sprintf_2349);
  tcase_add_test(tc_sprintf, sprintf_2350);
  tcase_add_test(tc_sprintf, sprintf_2351);
  tcase_add_test(tc_sprintf, sprintf_2352);

  tcase_add_test(tc_sprintf, sprintf_2356);
  tcase_add_test(tc_sprintf, sprintf_2357);
  tcase_add_test(tc_sprintf, sprintf_2358);
  tcase_add_test(tc_sprintf, sprintf_2359);
  tcase_add_test(tc_sprintf, sprintf_2360);
  tcase_add_test(tc_sprintf, sprintf_2361);
  tcase_add_test(tc_sprintf, sprintf_2362);
  tcase_add_test(tc_sprintf, sprintf_2363);
  tcase_add_test(tc_sprintf, sprintf_2364);
  tcase_add_test(tc_sprintf, sprintf_2365);
  tcase_add_test(tc_sprintf, sprintf_2366);
  tcase_add_test(tc_sprintf, sprintf_2367);
  tcase_add_test(tc_sprintf, sprintf_2368);
  tcase_add_test(tc_sprintf, sprintf_2369);
  tcase_add_test(tc_sprintf, sprintf_2370);
  tcase_add_test(tc_sprintf, sprintf_2371);
  tcase_add_test(tc_sprintf, sprintf_2372);
  tcase_add_test(tc_sprintf, sprintf_2373);
  tcase_add_test(tc_sprintf, sprintf_2374);
  tcase_add_test(tc_sprintf, sprintf_2375);
  tcase_add_test(tc_sprintf, sprintf_2376);
  tcase_add_test(tc_sprintf, sprintf_2377);
  tcase_add_test(tc_sprintf, sprintf_2378);
  tcase_add_test(tc_sprintf, sprintf_2379);
  tcase_add_test(tc_sprintf, sprintf_2380);
  tcase_add_test(tc_sprintf, sprintf_2381);
  tcase_add_test(tc_sprintf, sprintf_2382);
  tcase_add_test(tc_sprintf, sprintf_2383);
  tcase_add_test(tc_sprintf, sprintf_2384);
  tcase_add_test(tc_sprintf, sprintf_2385);
  tcase_add_test(tc_sprintf, sprintf_2386);
  tcase_add_test(tc_sprintf, sprintf_2387);
  tcase_add_test(tc_sprintf, sprintf_2388);
  tcase_add_test(tc_sprintf, sprintf_2391);
  tcase_add_test(tc_sprintf, sprintf_2392);
  tcase_add_test(tc_sprintf, sprintf_2393);
  tcase_add_test(tc_sprintf, sprintf_2394);
  tcase_add_test(tc_sprintf, sprintf_2395);

  tcase_add_test(tc_sprintf, sprintf_2401);
  tcase_add_test(tc_sprintf, sprintf_2402);
  tcase_add_test(tc_sprintf, sprintf_2403);
  tcase_add_test(tc_sprintf, sprintf_2404);
  tcase_add_test(tc_sprintf, sprintf_2405);
  tcase_add_test(tc_sprintf, sprintf_070501);
  tcase_add_test(tc_sprintf, sprintf_070502);
  tcase_add_test(tc_sprintf, sprintf_070503);
  tcase_add_test(tc_sprintf, sprintf_070504);
  tcase_add_test(tc_sprintf, sprintf_070505);
  tcase_add_test(tc_sprintf, sprintf_070506);
  tcase_add_test(tc_sprintf, sprintf_070507);
  tcase_add_test(tc_sprintf, sprintf_070508);
  tcase_add_test(tc_sprintf, sprintf_070509);
  tcase_add_test(tc_sprintf, sprintf_070510);
  tcase_add_test(tc_sprintf, sprintf_070513);
  tcase_add_test(tc_sprintf, sprintf_2405x);
  tcase_add_test(tc_sprintf, sprintf_2406x);
  tcase_add_test(tc_sprintf, sprintf_2408);
  tcase_add_test(tc_sprintf, sprintf_2409);
  tcase_add_test(tc_sprintf, sprintf_2410);
  tcase_add_test(tc_sprintf, sprintf_2411);
  tcase_add_test(tc_sprintf, sprintf_2412);
  tcase_add_test(tc_sprintf, sprintf_2413);
  tcase_add_test(tc_sprintf, sprintf_2414);
  tcase_add_test(tc_sprintf, sprintf_2415);
  tcase_add_test(tc_sprintf, sprintf_2416);
  tcase_add_test(tc_sprintf, sprintf_2417);
  tcase_add_test(tc_sprintf, sprintf_2418);
  tcase_add_test(tc_sprintf, sprintf_2419);
  tcase_add_test(tc_sprintf, sprintf_2420);
  tcase_add_test(tc_sprintf, sprintf_2421);
  tcase_add_test(tc_sprintf, sprintf_2423);
  tcase_add_test(tc_sprintf, sprintf_2427);
  tcase_add_test(tc_sprintf, sprintf_2428);
  tcase_add_test(tc_sprintf, sprintf_2429);
  tcase_add_test(tc_sprintf, sprintf_2430);
  tcase_add_test(tc_sprintf, sprintf_2431);
  tcase_add_test(tc_sprintf, sprintf_2433);
  tcase_add_test(tc_sprintf, sprintf_2434);
  tcase_add_test(tc_sprintf, sprintf_2436);
  tcase_add_test(tc_sprintf, sprintf_2708);
  tcase_add_test(tc_sprintf, sprintf_2709);
  tcase_add_test(tc_sprintf, sprintf_2710);
  tcase_add_test(tc_sprintf, sprintf_2711);
  tcase_add_test(tc_sprintf, sprintf_2712);
  tcase_add_test(tc_sprintf, sprintf_2713);
  tcase_add_test(tc_sprintf, sprintf_2714);
  tcase_add_test(tc_sprintf, sprintf_2715);
  tcase_add_test(tc_sprintf, sprintf_2716);
  tcase_add_test(tc_sprintf, sprintf_2717);
  tcase_add_test(tc_sprintf, sprintf_2718);
  tcase_add_test(tc_sprintf, sprintf_2719);
  tcase_add_test(tc_sprintf, sprintf_2720);
  tcase_add_test(tc_sprintf, sprintf_2721);
  tcase_add_test(tc_sprintf, sprintf_2722);
  tcase_add_test(tc_sprintf, sprintf_2723);
  tcase_add_test(tc_sprintf, sprintf_2724);
  tcase_add_test(tc_sprintf, sprintf_2725);
  tcase_add_test(tc_sprintf, sprintf_2726);
  tcase_add_test(tc_sprintf, sprintf_2727);
  tcase_add_test(tc_sprintf, sprintf_2728);
  tcase_add_test(tc_sprintf, sprintf_2729);
  tcase_add_test(tc_sprintf, sprintf_2730);
  tcase_add_test(tc_sprintf, sprintf_2731);
  tcase_add_test(tc_sprintf, sprintf_2732);
  tcase_add_test(tc_sprintf, sprintf_2733);
  tcase_add_test(tc_sprintf, sprintf_2734);
  tcase_add_test(tc_sprintf, sprintf_2735);
  tcase_add_test(tc_sprintf, sprintf_2736);
  tcase_add_test(tc_sprintf, sprintf_2737);
  tcase_add_test(tc_sprintf, sprintf_2738);
  tcase_add_test(tc_sprintf, sprintf_2739);
  tcase_add_test(tc_sprintf, sprintf_2740);
  tcase_add_test(tc_sprintf, sprintf_2741);
  tcase_add_test(tc_sprintf, sprintf_2742);
  tcase_add_test(tc_sprintf, sprintf_2743);
  tcase_add_test(tc_sprintf, sprintf_2744);
  tcase_add_test(tc_sprintf, sprintf_2745);
  tcase_add_test(tc_sprintf, sprintf_2746);
  tcase_add_test(tc_sprintf, sprintf_2747);
  tcase_add_test(tc_sprintf, sprintf_2748);
  tcase_add_test(tc_sprintf, sprintf_2749);
  tcase_add_test(tc_sprintf, sprintf_2750);
  tcase_add_test(tc_sprintf, sprintf_2751);
  tcase_add_test(tc_sprintf, sprintf_2752);
  tcase_add_test(tc_sprintf, sprintf_2753);
  tcase_add_test(tc_sprintf, sprintf_2754);
  tcase_add_test(tc_sprintf, sprintf_2755);
  tcase_add_test(tc_sprintf, sprintf_2756);
  tcase_add_test(tc_sprintf, sprintf_2757);
  tcase_add_test(tc_sprintf, sprintf_2758);
  tcase_add_test(tc_sprintf, sprintf_2759);
  tcase_add_test(tc_sprintf, sprintf_2760);
  tcase_add_test(tc_sprintf, sprintf_2761);
  tcase_add_test(tc_sprintf, sprintf_2762);
  tcase_add_test(tc_sprintf, sprintf_2763);
  tcase_add_test(tc_sprintf, sprintf_2764);
  tcase_add_test(tc_sprintf, sprintf_2765);
  tcase_add_test(tc_sprintf, sprintf_2766);
  tcase_add_test(tc_sprintf, sprintf_2767);
  tcase_add_test(tc_sprintf, sprintf_2768);
  tcase_add_test(tc_sprintf, sprintf_2769);
  tcase_add_test(tc_sprintf, sprintf_2770);
  tcase_add_test(tc_sprintf, sprintf_2771);
  tcase_add_test(tc_sprintf, sprintf_2772);
  tcase_add_test(tc_sprintf, sprintf_2773);
  tcase_add_test(tc_sprintf, sprintf_2774);
  tcase_add_test(tc_sprintf, sprintf_2775);
  tcase_add_test(tc_sprintf, sprintf_2776);
  tcase_add_test(tc_sprintf, sprintf_2777);
  tcase_add_test(tc_sprintf, sprintf_2778);
  tcase_add_test(tc_sprintf, sprintf_2779);
  tcase_add_test(tc_sprintf, sprintf_2780);
  tcase_add_test(tc_sprintf, sprintf_2781);
  tcase_add_test(tc_sprintf, sprintf_2782);
  tcase_add_test(tc_sprintf, sprintf_2783);
  tcase_add_test(tc_sprintf, sprintf_2784);
  tcase_add_test(tc_sprintf, sprintf_2785);
  tcase_add_test(tc_sprintf, sprintf_2786);
  tcase_add_test(tc_sprintf, sprintf_2786_2);
  tcase_add_test(tc_sprintf, sprintf_2787);
  tcase_add_test(tc_sprintf, sprintf_2788);
  tcase_add_test(tc_sprintf, sprintf_2789);
  tcase_add_test(tc_sprintf, sprintf_2790);
  tcase_add_test(tc_sprintf, sprintf_2791);
  tcase_add_test(tc_sprintf, sprintf_2792);
  tcase_add_test(tc_sprintf, sprintf_2793);
  tcase_add_test(tc_sprintf, sprintf_2794);
  tcase_add_test(tc_sprintf, sprintf_2795);
  tcase_add_test(tc_sprintf, sprintf_2796);
  tcase_add_test(tc_sprintf, sprintf_2797);
  tcase_add_test(tc_sprintf, sprintf_2798);
  tcase_add_test(tc_sprintf, sprintf_2799);
  tcase_add_test(tc_sprintf, sprintf_2800);
  tcase_add_test(tc_sprintf, sprintf_2801);
  tcase_add_test(tc_sprintf, sprintf_2802);
  tcase_add_test(tc_sprintf, sprintf_2803);
  tcase_add_test(tc_sprintf, sprintf_2804);
  tcase_add_test(tc_sprintf, sprintf_2805);
  tcase_add_test(tc_sprintf, sprintf_2806);
  tcase_add_test(tc_sprintf, sprintf_2807);
  tcase_add_test(tc_sprintf, sprintf_2807_2);
  tcase_add_test(tc_sprintf, sprintf_2808);
  tcase_add_test(tc_sprintf, sprintf_2809);
  tcase_add_test(tc_sprintf, sprintf_2810);
  tcase_add_test(tc_sprintf, sprintf_2811);
  tcase_add_test(tc_sprintf, sprintf_2812);
  tcase_add_test(tc_sprintf, sprintf_2813);
  tcase_add_test(tc_sprintf, sprintf_2814);
  tcase_add_test(tc_sprintf, sprintf_2815);
  tcase_add_test(tc_sprintf, sprintf_2816);
  tcase_add_test(tc_sprintf, sprintf_2817);
  tcase_add_test(tc_sprintf, sprintf_2818);
  tcase_add_test(tc_sprintf, sprintf_2819);
  tcase_add_test(tc_sprintf, sprintf_2820);
  tcase_add_test(tc_sprintf, sprintf_2821);
  tcase_add_test(tc_sprintf, sprintf_2822);
  tcase_add_test(tc_sprintf, sprintf_2823);
  tcase_add_test(tc_sprintf, sprintf_2824);
  tcase_add_test(tc_sprintf, sprintf_2825);
  tcase_add_test(tc_sprintf, sprintf_2826);
  tcase_add_test(tc_sprintf, sprintf_2827);
  tcase_add_test(tc_sprintf, sprintf_2828);
  tcase_add_test(tc_sprintf, sprintf_2829);
  tcase_add_test(tc_sprintf, sprintf_2830);
  tcase_add_test(tc_sprintf, sprintf_2831);
  tcase_add_test(tc_sprintf, sprintf_2832);
  tcase_add_test(tc_sprintf, sprintf_2833);
  tcase_add_test(tc_sprintf, sprintf_2834);
  tcase_add_test(tc_sprintf, sprintf_2835);
  tcase_add_test(tc_sprintf, sprintf_2836);
  tcase_add_test(tc_sprintf, sprintf_2837);
  tcase_add_test(tc_sprintf, sprintf_2838);
  tcase_add_test(tc_sprintf, sprintf_2839);
  tcase_add_test(tc_sprintf, sprintf_2840);
  tcase_add_test(tc_sprintf, sprintf_2841);
  tcase_add_test(tc_sprintf, sprintf_2842);
  tcase_add_test(tc_sprintf, sprintf_2843);
  tcase_add_test(tc_sprintf, sprintf_2844);
  tcase_add_test(tc_sprintf, sprintf_2845);
  tcase_add_test(tc_sprintf, sprintf_2846);
  tcase_add_test(tc_sprintf, sprintf_2847);
  tcase_add_test(tc_sprintf, sprintf_2848);
  tcase_add_test(tc_sprintf, sprintf_2849);
  tcase_add_test(tc_sprintf, sprintf_2850);
  tcase_add_test(tc_sprintf, sprintf_2851);
  tcase_add_test(tc_sprintf, sprintf_2852);
  tcase_add_test(tc_sprintf, sprintf_2853);
  tcase_add_test(tc_sprintf, sprintf_2854);
  tcase_add_test(tc_sprintf, sprintf_2855);
  tcase_add_test(tc_sprintf, sprintf_2856);
  tcase_add_test(tc_sprintf, sprintf_2857);
  tcase_add_test(tc_sprintf, sprintf_2858);
  tcase_add_test(tc_sprintf, sprintf_2859);
  tcase_add_test(tc_sprintf, sprintf_2860);
  tcase_add_test(tc_sprintf, sprintf_2861);
  tcase_add_test(tc_sprintf, sprintf_2862);
  tcase_add_test(tc_sprintf, sprintf_2863);
  tcase_add_test(tc_sprintf, sprintf_2864);
  tcase_add_test(tc_sprintf, sprintf_2865);
  tcase_add_test(tc_sprintf, sprintf_2866);
  tcase_add_test(tc_sprintf, sprintf_2867);
  tcase_add_test(tc_sprintf, sprintf_2868);
  tcase_add_test(tc_sprintf, sprintf_2869);
  tcase_add_test(tc_sprintf, sprintf_2870);
  tcase_add_test(tc_sprintf, sprintf_2871);
  tcase_add_test(tc_sprintf, sprintf_2872);
  tcase_add_test(tc_sprintf, sprintf_2873);
  tcase_add_test(tc_sprintf, sprintf_2874);
  tcase_add_test(tc_sprintf, sprintf_2875);
  tcase_add_test(tc_sprintf, sprintf_2876);
  tcase_add_test(tc_sprintf, sprintf_2877);
  tcase_add_test(tc_sprintf, sprintf_2878);
  tcase_add_test(tc_sprintf, sprintf_2879);
  tcase_add_test(tc_sprintf, sprintf_2880);
  tcase_add_test(tc_sprintf, sprintf_2881);
  tcase_add_test(tc_sprintf, sprintf_2882);
  tcase_add_test(tc_sprintf, sprintf_2883);
  tcase_add_test(tc_sprintf, sprintf_2884);
  tcase_add_test(tc_sprintf, sprintf_2885);
  tcase_add_test(tc_sprintf, sprintf_2886);
  tcase_add_test(tc_sprintf, sprintf_2887);
  tcase_add_test(tc_sprintf, sprintf_2888);
  tcase_add_test(tc_sprintf, sprintf_2889);
  tcase_add_test(tc_sprintf, sprintf_2890);
  tcase_add_test(tc_sprintf, sprintf_2891);
  tcase_add_test(tc_sprintf, sprintf_2892);
  tcase_add_test(tc_sprintf, sprintf_2893);
  tcase_add_test(tc_sprintf, sprintf_2894);
  tcase_add_test(tc_sprintf, sprintf_2895);
  tcase_add_test(tc_sprintf, sprintf_2896);
  tcase_add_test(tc_sprintf, sprintf_2897);
  tcase_add_test(tc_sprintf, sprintf_2898);
  tcase_add_test(tc_sprintf, sprintf_2899);
  tcase_add_test(tc_sprintf, sprintf_2900);
  tcase_add_test(tc_sprintf, sprintf_2901);
  tcase_add_test(tc_sprintf, sprintf_2902);
  tcase_add_test(tc_sprintf, sprintf_2903);
  tcase_add_test(tc_sprintf, sprintf_2904);
  tcase_add_test(tc_sprintf, sprintf_2905);
  tcase_add_test(tc_sprintf, sprintf_2906);
  tcase_add_test(tc_sprintf, sprintf_3013);
  tcase_add_test(tc_sprintf, sprintf_3014);
  tcase_add_test(tc_sprintf, sprintf_3015);
  tcase_add_test(tc_sprintf, sprintf_3016);
  tcase_add_test(tc_sprintf, sprintf_3017);
  tcase_add_test(tc_sprintf, sprintf_3018);
  tcase_add_test(tc_sprintf, sprintf_3019);
  tcase_add_test(tc_sprintf, sprintf_3020);
  tcase_add_test(tc_sprintf, sprintf_3021);
  tcase_add_test(tc_sprintf, sprintf_3021_2);
  tcase_add_test(tc_sprintf, sprintf_3022);
  tcase_add_test(tc_sprintf, sprintf_3023);
  tcase_add_test(tc_sprintf, sprintf_3024);
  tcase_add_test(tc_sprintf, sprintf_3025);
  tcase_add_test(tc_sprintf, sprintf_3026);
  tcase_add_test(tc_sprintf, sprintf_3027);
  tcase_add_test(tc_sprintf, sprintf_3028);
  tcase_add_test(tc_sprintf, sprintf_3029);
  tcase_add_test(tc_sprintf, sprintf_3030);
  tcase_add_test(tc_sprintf, sprintf_3031);
  tcase_add_test(tc_sprintf, sprintf_3032);
  tcase_add_test(tc_sprintf, sprintf_3033);
  tcase_add_test(tc_sprintf, sprintf_3034);
  tcase_add_test(tc_sprintf, sprintf_3035);
  tcase_add_test(tc_sprintf, sprintf_3036);
  tcase_add_test(tc_sprintf, sprintf_3037);
  tcase_add_test(tc_sprintf, sprintf_3038);
  tcase_add_test(tc_sprintf, sprintf_3039);
  tcase_add_test(tc_sprintf, sprintf_3040);
  tcase_add_test(tc_sprintf, sprintf_3041);
  tcase_add_test(tc_sprintf, sprintf_3072);
  tcase_add_test(tc_sprintf, sprintf_3073);
  tcase_add_test(tc_sprintf, sprintf_3074);
  tcase_add_test(tc_sprintf, sprintf_3075);
  tcase_add_test(tc_sprintf, sprintf_3076);
  tcase_add_test(tc_sprintf, sprintf_3077);
  tcase_add_test(tc_sprintf, sprintf_3078);
  tcase_add_test(tc_sprintf, sprintf_3079);
  tcase_add_test(tc_sprintf, sprintf_3080);
  tcase_add_test(tc_sprintf, sprintf_3081);
  tcase_add_test(tc_sprintf, sprintf_3082);
  tcase_add_test(tc_sprintf, sprintf_3083);
  tcase_add_test(tc_sprintf, sprintf_3084);
  tcase_add_test(tc_sprintf, sprintf_3085);
  tcase_add_test(tc_sprintf, sprintf_3086);
  tcase_add_test(tc_sprintf, sprintf_3087);
  tcase_add_test(tc_sprintf, sprintf_3088);
  tcase_add_test(tc_sprintf, sprintf_3089);
  tcase_add_test(tc_sprintf, sprintf_3090);
  tcase_add_test(tc_sprintf, sprintf_3091);
  tcase_add_test(tc_sprintf, sprintf_3092);
  tcase_add_test(tc_sprintf, sprintf_3093);
  tcase_add_test(tc_sprintf, sprintf_3094);
  tcase_add_test(tc_sprintf, sprintf_3095);
  tcase_add_test(tc_sprintf, sprintf_3096);
  tcase_add_test(tc_sprintf, sprintf_3097);
  tcase_add_test(tc_sprintf, sprintf_3098);
  tcase_add_test(tc_sprintf, sprintf_3099);
  tcase_add_test(tc_sprintf, sprintf_3100);
  tcase_add_test(tc_sprintf, sprintf_3101);
  tcase_add_test(tc_sprintf, sprintf_3132);
  tcase_add_test(tc_sprintf, sprintf_3133);
  tcase_add_test(tc_sprintf, sprintf_3134);
  tcase_add_test(tc_sprintf, sprintf_3135);
  tcase_add_test(tc_sprintf, sprintf_3136);
  tcase_add_test(tc_sprintf, sprintf_3137);
  tcase_add_test(tc_sprintf, sprintf_3138);
  tcase_add_test(tc_sprintf, sprintf_3139);
  tcase_add_test(tc_sprintf, sprintf_3140);
  tcase_add_test(tc_sprintf, sprintf_3141);
  tcase_add_test(tc_sprintf, sprintf_3142);
  tcase_add_test(tc_sprintf, sprintf_3143);
  tcase_add_test(tc_sprintf, sprintf_3144);
  tcase_add_test(tc_sprintf, sprintf_3145);
  tcase_add_test(tc_sprintf, sprintf_3146);
  tcase_add_test(tc_sprintf, sprintf_3147);
  tcase_add_test(tc_sprintf, sprintf_3148);
  tcase_add_test(tc_sprintf, sprintf_3149);
  tcase_add_test(tc_sprintf, sprintf_3150);
  tcase_add_test(tc_sprintf, sprintf_3151);
  tcase_add_test(tc_sprintf, sprintf_3152);
  tcase_add_test(tc_sprintf, sprintf_3153);
  tcase_add_test(tc_sprintf, sprintf_3154);
  tcase_add_test(tc_sprintf, sprintf_3155);
  tcase_add_test(tc_sprintf, sprintf_3156);
  tcase_add_test(tc_sprintf, sprintf_3157);
  tcase_add_test(tc_sprintf, sprintf_3158);
  tcase_add_test(tc_sprintf, sprintf_3159);
  tcase_add_test(tc_sprintf, sprintf_3160);
  tcase_add_test(tc_sprintf, sprintf_3161);
  tcase_add_test(tc_sprintf, sprintf_3192);
  tcase_add_test(tc_sprintf, sprintf_3193);
  tcase_add_test(tc_sprintf, sprintf_3194);
  tcase_add_test(tc_sprintf, sprintf_3195);
  tcase_add_test(tc_sprintf, sprintf_3196);
  tcase_add_test(tc_sprintf, sprintf_3197);
  tcase_add_test(tc_sprintf, sprintf_3198);
  tcase_add_test(tc_sprintf, sprintf_3199);
  tcase_add_test(tc_sprintf, sprintf_3200);
  tcase_add_test(tc_sprintf, sprintf_3201);
  tcase_add_test(tc_sprintf, sprintf_3202);
  tcase_add_test(tc_sprintf, sprintf_3203);
  tcase_add_test(tc_sprintf, sprintf_3204);
  tcase_add_test(tc_sprintf, sprintf_3205);
  tcase_add_test(tc_sprintf, sprintf_3206);
  tcase_add_test(tc_sprintf, sprintf_3207);
  tcase_add_test(tc_sprintf, sprintf_3208);
  tcase_add_test(tc_sprintf, sprintf_3209);
  tcase_add_test(tc_sprintf, sprintf_3210);
  tcase_add_test(tc_sprintf, sprintf_3211);
  tcase_add_test(tc_sprintf, sprintf_3212);
  tcase_add_test(tc_sprintf, sprintf_3213);
  tcase_add_test(tc_sprintf, sprintf_3214);
  tcase_add_test(tc_sprintf, sprintf_3215);
  tcase_add_test(tc_sprintf, sprintf_3216);
  tcase_add_test(tc_sprintf, sprintf_3217);
  tcase_add_test(tc_sprintf, sprintf_3218);
  tcase_add_test(tc_sprintf, sprintf_3219);
  tcase_add_test(tc_sprintf, sprintf_3220);
  tcase_add_test(tc_sprintf, sprintf_3221);
  tcase_add_test(tc_sprintf, sprintf_3373);
  tcase_add_test(tc_sprintf, sprintf_3374);
  tcase_add_test(tc_sprintf, sprintf_3375);
  tcase_add_test(tc_sprintf, sprintf_3376);
  tcase_add_test(tc_sprintf, sprintf_3377);
  tcase_add_test(tc_sprintf, sprintf_3378);
  tcase_add_test(tc_sprintf, sprintf_3379);
  tcase_add_test(tc_sprintf, sprintf_3380);
  tcase_add_test(tc_sprintf, sprintf_3381);
  tcase_add_test(tc_sprintf, sprintf_3382);
  tcase_add_test(tc_sprintf, sprintf_3383);
  tcase_add_test(tc_sprintf, sprintf_3384);
  tcase_add_test(tc_sprintf, sprintf_3385);
  tcase_add_test(tc_sprintf, sprintf_3386);
  tcase_add_test(tc_sprintf, sprintf_3387);
  tcase_add_test(tc_sprintf, sprintf_3388);
  tcase_add_test(tc_sprintf, sprintf_3389);
  tcase_add_test(tc_sprintf, sprintf_3390);
  tcase_add_test(tc_sprintf, sprintf_3391);
  tcase_add_test(tc_sprintf, sprintf_3392);
  tcase_add_test(tc_sprintf, sprintf_3393);
  tcase_add_test(tc_sprintf, sprintf_3394);
  tcase_add_test(tc_sprintf, sprintf_3395);
  tcase_add_test(tc_sprintf, sprintf_3396);
  tcase_add_test(tc_sprintf, sprintf_3397);
  tcase_add_test(tc_sprintf, sprintf_3398);
  tcase_add_test(tc_sprintf, sprintf_3399);
  tcase_add_test(tc_sprintf, sprintf_3400);
  tcase_add_test(tc_sprintf, sprintf_3401);
  tcase_add_test(tc_sprintf, sprintf_3402);
  tcase_add_test(tc_sprintf, sprintf_3523);
  tcase_add_test(tc_sprintf, sprintf_3525);
  tcase_add_test(tc_sprintf, sprintf_3535);
  tcase_add_test(tc_sprintf, sprintf_3554);
  tcase_add_test(tc_sprintf, sprintf_3555);
  tcase_add_test(tc_sprintf, sprintf_2708_i);
  tcase_add_test(tc_sprintf, sprintf_2709_i);
  tcase_add_test(tc_sprintf, sprintf_2710_i);
  tcase_add_test(tc_sprintf, sprintf_2711i);
  tcase_add_test(tc_sprintf, sprintf_2712i);
  tcase_add_test(tc_sprintf, sprintf_2713i);
  tcase_add_test(tc_sprintf, sprintf_2714i);
  tcase_add_test(tc_sprintf, sprintf_2715i);
  tcase_add_test(tc_sprintf, sprintf_2716i);
  tcase_add_test(tc_sprintf, sprintf_2717i);
  tcase_add_test(tc_sprintf, sprintf_2718i);
  tcase_add_test(tc_sprintf, sprintf_2719i);
  tcase_add_test(tc_sprintf, sprintf_2720i);
  tcase_add_test(tc_sprintf, sprintf_2721i);
  tcase_add_test(tc_sprintf, sprintf_2722i);
  tcase_add_test(tc_sprintf, sprintf_2723i);
  tcase_add_test(tc_sprintf, sprintf_2724i);
  tcase_add_test(tc_sprintf, sprintf_2725i);
  tcase_add_test(tc_sprintf, sprintf_2726i);
  tcase_add_test(tc_sprintf, sprintf_2727i);
  tcase_add_test(tc_sprintf, sprintf_2728i);
  tcase_add_test(tc_sprintf, sprintf_2729i);
  tcase_add_test(tc_sprintf, sprintf_2730i);
  tcase_add_test(tc_sprintf, sprintf_2731i);
  tcase_add_test(tc_sprintf, sprintf_2732i);
  tcase_add_test(tc_sprintf, sprintf_2733i);
  tcase_add_test(tc_sprintf, sprintf_2734i);
  tcase_add_test(tc_sprintf, sprintf_2735i);
  tcase_add_test(tc_sprintf, sprintf_2736i);
  tcase_add_test(tc_sprintf, sprintf_2737i);
  tcase_add_test(tc_sprintf, sprintf_2738i);
  tcase_add_test(tc_sprintf, sprintf_2739i);
  tcase_add_test(tc_sprintf, sprintf_2740i);
  tcase_add_test(tc_sprintf, sprintf_2741i);
  tcase_add_test(tc_sprintf, sprintf_2742i);
  tcase_add_test(tc_sprintf, sprintf_2743i);
  tcase_add_test(tc_sprintf, sprintf_2744i);
  tcase_add_test(tc_sprintf, sprintf_2745i);
  tcase_add_test(tc_sprintf, sprintf_2746i);
  tcase_add_test(tc_sprintf, sprintf_2747i);
  tcase_add_test(tc_sprintf, sprintf_2748i);
  tcase_add_test(tc_sprintf, sprintf_2749i);
  tcase_add_test(tc_sprintf, sprintf_i_2750_i);
  tcase_add_test(tc_sprintf, sprintf_i_2751_i);
  tcase_add_test(tc_sprintf, sprintf_i_2752_i);
  tcase_add_test(tc_sprintf, sprintf_i_2753_i);
  tcase_add_test(tc_sprintf, sprintf_i_2754_i);
  tcase_add_test(tc_sprintf, sprintf_i_2755_i);
  tcase_add_test(tc_sprintf, sprintf_i_2756_i);
  tcase_add_test(tc_sprintf, sprintf_i_2757_i);
  tcase_add_test(tc_sprintf, sprintf_i_2758_i);
  tcase_add_test(tc_sprintf, sprintf_i_2759_i);
  tcase_add_test(tc_sprintf, sprintf_i_2760_i);
  tcase_add_test(tc_sprintf, sprintf_i_2761_i);
  tcase_add_test(tc_sprintf, sprintf_i_2762_i);
  tcase_add_test(tc_sprintf, sprintf_i_2763_i);
  tcase_add_test(tc_sprintf, sprintf_i_2764_i);
  tcase_add_test(tc_sprintf, sprintf_i_2765_i);
  tcase_add_test(tc_sprintf, sprintf_i_2766_i);
  tcase_add_test(tc_sprintf, sprintf_i_2767_i);
  tcase_add_test(tc_sprintf, sprintf_i_2768_i);
  tcase_add_test(tc_sprintf, sprintf_i_2769_i);
  tcase_add_test(tc_sprintf, sprintf_i_2770_i);
  tcase_add_test(tc_sprintf, sprintf_i_2771_i);
  tcase_add_test(tc_sprintf, sprintf_i_2772_i);
  tcase_add_test(tc_sprintf, sprintf_i_2773_i);
  tcase_add_test(tc_sprintf, sprintf_i_2774_i);
  tcase_add_test(tc_sprintf, sprintf_i_2775_i);
  tcase_add_test(tc_sprintf, sprintf_i_2776_i);
  tcase_add_test(tc_sprintf, sprintf_i_2777_i);
  tcase_add_test(tc_sprintf, sprintf_i_2778_i);
  tcase_add_test(tc_sprintf, sprintf_i_2779_i);
  tcase_add_test(tc_sprintf, sprintf_i_2780_i);
  tcase_add_test(tc_sprintf, sprintf_i_2781_i);
  tcase_add_test(tc_sprintf, sprintf_i_2782_i);
  tcase_add_test(tc_sprintf, sprintf_i_2783_i);
  tcase_add_test(tc_sprintf, sprintf_i_2784_i);
  tcase_add_test(tc_sprintf, sprintf_i_2785_i);
  tcase_add_test(tc_sprintf, sprintf_i_2786_i);
  tcase_add_test(tc_sprintf, sprintf_i_2786_2_i);
  tcase_add_test(tc_sprintf, sprintf_i_2787_i);
  tcase_add_test(tc_sprintf, sprintf_i_2788_i);
  tcase_add_test(tc_sprintf, sprintf_i_2789_i);
  tcase_add_test(tc_sprintf, sprintf_i_2790_i);
  tcase_add_test(tc_sprintf, sprintf_i_2791_i);
  tcase_add_test(tc_sprintf, sprintf_i_2792_i);
  tcase_add_test(tc_sprintf, sprintf_i_2793_i);
  tcase_add_test(tc_sprintf, sprintf_i_2794_i);
  tcase_add_test(tc_sprintf, sprintf_i_2795_i);
  tcase_add_test(tc_sprintf, sprintf_i_2796_i);
  tcase_add_test(tc_sprintf, sprintf_i_2800_i);
  tcase_add_test(tc_sprintf, sprintf_i_2802_i);
  tcase_add_test(tc_sprintf, sprintf_i_2803_i);
  tcase_add_test(tc_sprintf, sprintf_i_2804_i);
  tcase_add_test(tc_sprintf, sprintf_i_2805_i);
  tcase_add_test(tc_sprintf, sprintf_i_2806_i);
  tcase_add_test(tc_sprintf, sprintf_i_2807_i);
  tcase_add_test(tc_sprintf, sprintf_i_2807_2_i);
  tcase_add_test(tc_sprintf, sprintf_i_2808_i);
  tcase_add_test(tc_sprintf, sprintf_i_2809_i);
  tcase_add_test(tc_sprintf, sprintf_i_2810_i);
  tcase_add_test(tc_sprintf, sprintf_i_2811_i);
  tcase_add_test(tc_sprintf, sprintf_i_2812_i);
  tcase_add_test(tc_sprintf, sprintf_i_2813_i);
  tcase_add_test(tc_sprintf, sprintf_i_2814_i);
  tcase_add_test(tc_sprintf, sprintf_i_2815_i);
  tcase_add_test(tc_sprintf, sprintf_i_2816_i);
  tcase_add_test(tc_sprintf, sprintf_i_2817_i);
  tcase_add_test(tc_sprintf, sprintf_i_2818_i);
  tcase_add_test(tc_sprintf, sprintf_i_2819_i);
  tcase_add_test(tc_sprintf, sprintf_i_2820_i);
  tcase_add_test(tc_sprintf, sprintf_i_2821_i);
  tcase_add_test(tc_sprintf, sprintf_i_2822_i);
  tcase_add_test(tc_sprintf, sprintf_i_2823_i);
  tcase_add_test(tc_sprintf, sprintf_i_2824_i);
  tcase_add_test(tc_sprintf, sprintf_i_2825_i);
  tcase_add_test(tc_sprintf, sprintf_i_2826_i);
  tcase_add_test(tc_sprintf, sprintf_i_2827_i);
  tcase_add_test(tc_sprintf, sprintf_i_2828_i);
  tcase_add_test(tc_sprintf, sprintf_i_2829_i);
  tcase_add_test(tc_sprintf, sprintf_i_2830_i);
  tcase_add_test(tc_sprintf, sprintf_i_2831_i);
  tcase_add_test(tc_sprintf, sprintf_i_2832_i);
  tcase_add_test(tc_sprintf, sprintf_i_2833_i);
  tcase_add_test(tc_sprintf, sprintf_i_2834_i);
  tcase_add_test(tc_sprintf, sprintf_i_2835_i);
  tcase_add_test(tc_sprintf, sprintf_i_2836_i);
  tcase_add_test(tc_sprintf, sprintf_i_2837_i);
  tcase_add_test(tc_sprintf, sprintf_i_2838_i);
  tcase_add_test(tc_sprintf, sprintf_i_2839_i);
  tcase_add_test(tc_sprintf, sprintf_i_2840_i);
  tcase_add_test(tc_sprintf, sprintf_i_2841_i);
  tcase_add_test(tc_sprintf, sprintf_i_2842_i);
  tcase_add_test(tc_sprintf, sprintf_i_2843_i);
  tcase_add_test(tc_sprintf, sprintf_i_2844_i);
  tcase_add_test(tc_sprintf, sprintf_i_2845_i);
  tcase_add_test(tc_sprintf, sprintf_i_2846_i);
  tcase_add_test(tc_sprintf, sprintf_i_2847_i);
  tcase_add_test(tc_sprintf, sprintf_i_2848_i);
  tcase_add_test(tc_sprintf, sprintf_i_2849_i);
  tcase_add_test(tc_sprintf, sprintf_i_2850_i);
  tcase_add_test(tc_sprintf, sprintf_i_2851_i);
  tcase_add_test(tc_sprintf, sprintf_i_2852_i);
  tcase_add_test(tc_sprintf, sprintf_i_2853_i);
  tcase_add_test(tc_sprintf, sprintf_i_2854_i);
  tcase_add_test(tc_sprintf, sprintf_i_2855_i);
  tcase_add_test(tc_sprintf, sprintf_i_2856_i);
  tcase_add_test(tc_sprintf, sprintf_i_2857_i);
  tcase_add_test(tc_sprintf, sprintf_i_2858_i);
  tcase_add_test(tc_sprintf, sprintf_i_2859_i);
  tcase_add_test(tc_sprintf, sprintf_i_2860_i);
  tcase_add_test(tc_sprintf, sprintf_i_2861_i);
  tcase_add_test(tc_sprintf, sprintf_i_2862_i);
  tcase_add_test(tc_sprintf, sprintf_i_2863_i);
  tcase_add_test(tc_sprintf, sprintf_i_2864_i);
  tcase_add_test(tc_sprintf, sprintf_i_2865_i);
  tcase_add_test(tc_sprintf, sprintf_i_2866_i);
  tcase_add_test(tc_sprintf, sprintf_i_2867_i);
  tcase_add_test(tc_sprintf, sprintf_i_2868_i);
  tcase_add_test(tc_sprintf, sprintf_i_2869_i);
  tcase_add_test(tc_sprintf, sprintf_i_2870_i);
  tcase_add_test(tc_sprintf, sprintf_i_2871_i);
  tcase_add_test(tc_sprintf, sprintf_i_2872_i);
  tcase_add_test(tc_sprintf, sprintf_i_2873_i);
  tcase_add_test(tc_sprintf, sprintf_i_2874_i);
  tcase_add_test(tc_sprintf, sprintf_i_2875_i);
  tcase_add_test(tc_sprintf, sprintf_i_2876_i);
  tcase_add_test(tc_sprintf, sprintf_i_2877_i);
  tcase_add_test(tc_sprintf, sprintf_i_2878_i);
  tcase_add_test(tc_sprintf, sprintf_i_2879_i);
  tcase_add_test(tc_sprintf, sprintf_i_2880_i);
  tcase_add_test(tc_sprintf, sprintf_i_2881_i);
  tcase_add_test(tc_sprintf, sprintf_i_2882_i);
  tcase_add_test(tc_sprintf, sprintf_i_2883_i);
  tcase_add_test(tc_sprintf, sprintf_i_2884_i);
  tcase_add_test(tc_sprintf, sprintf_i_2885_i);
  tcase_add_test(tc_sprintf, sprintf_i_2886_i);
  tcase_add_test(tc_sprintf, sprintf_i_2887_i);
  tcase_add_test(tc_sprintf, sprintf_i_2888_i);
  tcase_add_test(tc_sprintf, sprintf_i_2889_i);
  tcase_add_test(tc_sprintf, sprintf_i_2890_i);
  tcase_add_test(tc_sprintf, sprintf_i_2891_i);
  tcase_add_test(tc_sprintf, sprintf_i_2892_i);
  tcase_add_test(tc_sprintf, sprintf_i_2893_i);
  tcase_add_test(tc_sprintf, sprintf_i_2894_i);
  tcase_add_test(tc_sprintf, sprintf_i_2895_i);
  tcase_add_test(tc_sprintf, sprintf_i_2896_i);
  tcase_add_test(tc_sprintf, sprintf_i_2897_i);
  tcase_add_test(tc_sprintf, sprintf_i_2898_i);
  tcase_add_test(tc_sprintf, sprintf_i_2899_i);
  tcase_add_test(tc_sprintf, sprintf_i_2900_i);
  tcase_add_test(tc_sprintf, sprintf_i_2904_i);
  tcase_add_test(tc_sprintf, sprintf_i_2905_i);
  tcase_add_test(tc_sprintf, sprintf_i_2906_i);
  tcase_add_test(tc_sprintf, sprintf_i_3013);
  tcase_add_test(tc_sprintf, sprintf_i_3014);
  tcase_add_test(tc_sprintf, sprintf_i_3015);
  tcase_add_test(tc_sprintf, sprintf_i_3016);
  tcase_add_test(tc_sprintf, sprintf_i_3017);
  tcase_add_test(tc_sprintf, sprintf_i_3018);
  tcase_add_test(tc_sprintf, sprintf_i_3019);
  tcase_add_test(tc_sprintf, sprintf_i_3020);
  tcase_add_test(tc_sprintf, sprintf_i_3021);
  tcase_add_test(tc_sprintf, sprintf_i_3021_2);
  tcase_add_test(tc_sprintf, sprintf_i_3022);
  tcase_add_test(tc_sprintf, sprintf_i_3023);
  tcase_add_test(tc_sprintf, sprintf_i_3024);
  tcase_add_test(tc_sprintf, sprintf_i_3025);
  tcase_add_test(tc_sprintf, sprintf_i_3026);
  tcase_add_test(tc_sprintf, sprintf_i_3027);
  tcase_add_test(tc_sprintf, sprintf_i_3028);
  tcase_add_test(tc_sprintf, sprintf_i_3029);
  tcase_add_test(tc_sprintf, sprintf_i_3030);
  tcase_add_test(tc_sprintf, sprintf_i_3031);
  tcase_add_test(tc_sprintf, sprintf_i_3032);
  tcase_add_test(tc_sprintf, sprintf_i_3033);
  tcase_add_test(tc_sprintf, sprintf_i_3034);
  tcase_add_test(tc_sprintf, sprintf_i_3035);
  tcase_add_test(tc_sprintf, sprintf_i_3036);
  tcase_add_test(tc_sprintf, sprintf_i_3037);
  tcase_add_test(tc_sprintf, sprintf_i_3038);
  tcase_add_test(tc_sprintf, sprintf_i_3039);
  tcase_add_test(tc_sprintf, sprintf_i_3040);
  tcase_add_test(tc_sprintf, sprintf_i_3041);
  tcase_add_test(tc_sprintf, sprintf_i_3072);
  tcase_add_test(tc_sprintf, sprintf_i_3073);
  tcase_add_test(tc_sprintf, sprintf_i_3074);
  tcase_add_test(tc_sprintf, sprintf_i_3075);
  tcase_add_test(tc_sprintf, sprintf_i_3076);
  tcase_add_test(tc_sprintf, sprintf_i_3077);
  tcase_add_test(tc_sprintf, sprintf_i_3078);
  tcase_add_test(tc_sprintf, sprintf_i_3079);
  tcase_add_test(tc_sprintf, sprintf_i_3080);
  tcase_add_test(tc_sprintf, sprintf_i_3081);
  tcase_add_test(tc_sprintf, sprintf_i_3082);
  tcase_add_test(tc_sprintf, sprintf_i_3083);
  tcase_add_test(tc_sprintf, sprintf_i_3084);
  tcase_add_test(tc_sprintf, sprintf_i_3085);
  tcase_add_test(tc_sprintf, sprintf_i_3086);
  tcase_add_test(tc_sprintf, sprintf_i_3087);
  tcase_add_test(tc_sprintf, sprintf_i_3088);
  tcase_add_test(tc_sprintf, sprintf_i_3089);
  tcase_add_test(tc_sprintf, sprintf_i_3090);
  tcase_add_test(tc_sprintf, sprintf_i_3091);
  tcase_add_test(tc_sprintf, sprintf_i_3092);
  tcase_add_test(tc_sprintf, sprintf_i_3093);
  tcase_add_test(tc_sprintf, sprintf_i_3094);
  tcase_add_test(tc_sprintf, sprintf_i_3095);
  tcase_add_test(tc_sprintf, sprintf_i_3096);
  tcase_add_test(tc_sprintf, sprintf_i_3097);
  tcase_add_test(tc_sprintf, sprintf_i_3098);
  tcase_add_test(tc_sprintf, sprintf_i_3099);
  tcase_add_test(tc_sprintf, sprintf_i_3100);
  tcase_add_test(tc_sprintf, sprintf_i_3101);
  tcase_add_test(tc_sprintf, sprintf_i_3132);
  tcase_add_test(tc_sprintf, sprintf_i_3133);
  tcase_add_test(tc_sprintf, sprintf_i_3134);
  tcase_add_test(tc_sprintf, sprintf_i_3135);
  tcase_add_test(tc_sprintf, sprintf_i_3136);
  tcase_add_test(tc_sprintf, sprintf_i_3137);
  tcase_add_test(tc_sprintf, sprintf_i_3138);
  tcase_add_test(tc_sprintf, sprintf_i_3139);
  tcase_add_test(tc_sprintf, sprintf_i_3140);
  tcase_add_test(tc_sprintf, sprintf_i_3141);
  tcase_add_test(tc_sprintf, sprintf_i_3142);
  tcase_add_test(tc_sprintf, sprintf_i_3143);
  tcase_add_test(tc_sprintf, sprintf_i_3144);
  tcase_add_test(tc_sprintf, sprintf_i_3145);
  tcase_add_test(tc_sprintf, sprintf_i_3146);
  tcase_add_test(tc_sprintf, sprintf_i_3147);
  tcase_add_test(tc_sprintf, sprintf_i_3148);
  tcase_add_test(tc_sprintf, sprintf_i_3149);
  tcase_add_test(tc_sprintf, sprintf_i_3150);
  tcase_add_test(tc_sprintf, sprintf_i_3151);
  tcase_add_test(tc_sprintf, sprintf_i_3152);
  tcase_add_test(tc_sprintf, sprintf_i_3153);
  tcase_add_test(tc_sprintf, sprintf_i_3154);
  tcase_add_test(tc_sprintf, sprintf_i_3155);
  tcase_add_test(tc_sprintf, sprintf_i_3156);
  tcase_add_test(tc_sprintf, sprintf_i_3157);
  tcase_add_test(tc_sprintf, sprintf_i_3158);
  tcase_add_test(tc_sprintf, sprintf_i_3159);
  tcase_add_test(tc_sprintf, sprintf_i_3160);
  tcase_add_test(tc_sprintf, sprintf_i_3161);
  tcase_add_test(tc_sprintf, sprintf_i_3192);
  tcase_add_test(tc_sprintf, sprintf_i_3193);
  tcase_add_test(tc_sprintf, sprintf_i_3194);
  tcase_add_test(tc_sprintf, sprintf_i_3195);
  tcase_add_test(tc_sprintf, sprintf_i_3196);
  tcase_add_test(tc_sprintf, sprintf_i_3197);
  tcase_add_test(tc_sprintf, sprintf_i_3198);
  tcase_add_test(tc_sprintf, sprintf_i_3199);
  tcase_add_test(tc_sprintf, sprintf_i_3200);
  tcase_add_test(tc_sprintf, sprintf_i_3201);
  tcase_add_test(tc_sprintf, sprintf_i_3202);
  tcase_add_test(tc_sprintf, sprintf_i_3203);
  tcase_add_test(tc_sprintf, sprintf_i_3204);
  tcase_add_test(tc_sprintf, sprintf_i_3205);
  tcase_add_test(tc_sprintf, sprintf_i_3206);
  tcase_add_test(tc_sprintf, sprintf_i_3207);
  tcase_add_test(tc_sprintf, sprintf_i_3208);
  tcase_add_test(tc_sprintf, sprintf_i_3209);
  tcase_add_test(tc_sprintf, sprintf_i_3210);
  tcase_add_test(tc_sprintf, sprintf_i_3211);
  tcase_add_test(tc_sprintf, sprintf_i_3212);
  tcase_add_test(tc_sprintf, sprintf_i_3213);
  tcase_add_test(tc_sprintf, sprintf_i_3214);
  tcase_add_test(tc_sprintf, sprintf_i_3215);
  tcase_add_test(tc_sprintf, sprintf_i_3216);
  tcase_add_test(tc_sprintf, sprintf_i_3217);
  tcase_add_test(tc_sprintf, sprintf_i_3218);
  tcase_add_test(tc_sprintf, sprintf_i_3219);
  tcase_add_test(tc_sprintf, sprintf_i_3220);
  tcase_add_test(tc_sprintf, sprintf_i_3221);
  tcase_add_test(tc_sprintf, sprintf_i_4001);
  tcase_add_test(tc_sprintf, sprintf_i_4002);
  tcase_add_test(tc_sprintf, sprintf_i_4004);
  tcase_add_test(tc_sprintf, sprintf_i_4005);
  tcase_add_test(tc_sprintf, sprintf_i_4006);
  tcase_add_test(tc_sprintf, sprintf_i_4007);
  tcase_add_test(tc_sprintf, sprintf_i_4008);
  tcase_add_test(tc_sprintf, sprintf_i_4009);
  tcase_add_test(tc_sprintf, sprintf_i_4010);
  tcase_add_test(tc_sprintf, sprintf_i_4011);
  tcase_add_test(tc_sprintf, sprintf_i_4012);
  tcase_add_test(tc_sprintf, sprintf_i_4013);
  tcase_add_test(tc_sprintf, sprintf_i_4014);
  tcase_add_test(tc_sprintf, sprintf_i_4015);
  tcase_add_test(tc_sprintf, sprintf_i_4016);
  tcase_add_test(tc_sprintf, sprintf_i_4017);
  tcase_add_test(tc_sprintf, sprintf_i_4018);
  tcase_add_test(tc_sprintf, sprintf_i_4019);
  tcase_add_test(tc_sprintf, sprintf_i_4020);
  tcase_add_test(tc_sprintf, sprintf_i_4021);
  tcase_add_test(tc_sprintf, sprintf_i_4022);
  tcase_add_test(tc_sprintf, sprintf_i_4023);
  tcase_add_test(tc_sprintf, sprintf_i_4024);
  tcase_add_test(tc_sprintf, sprintf_i_4025);
  tcase_add_test(tc_sprintf, sprintf_i_4026);
  tcase_add_test(tc_sprintf, sprintf_i_4027);
  tcase_add_test(tc_sprintf, sprintf_i_4028);
  tcase_add_test(tc_sprintf, sprintf_i_4029);
  tcase_add_test(tc_sprintf, sprintf_i_4030);
  tcase_add_test(tc_sprintf, sprintf_i_4031);
  tcase_add_test(tc_sprintf, sprintf_i_4032);
  tcase_add_test(tc_sprintf, sprintf_i_4033);
  tcase_add_test(tc_sprintf, sprintf_i_4034);
  tcase_add_test(tc_sprintf, sprintf_i_4035);
  tcase_add_test(tc_sprintf, sprintf_i_4036);
  tcase_add_test(tc_sprintf, sprintf_i_4037);
  tcase_add_test(tc_sprintf, sprintf_i_4038);
  tcase_add_test(tc_sprintf, sprintf_i_4039);
  tcase_add_test(tc_sprintf, sprintf_i_4040);
  tcase_add_test(tc_sprintf, sprintf_i_4041);
  tcase_add_test(tc_sprintf, sprintf_i_4042);
  tcase_add_test(tc_sprintf, sprintf_i_4043);
  tcase_add_test(tc_sprintf, sprintf_i_4044);
  tcase_add_test(tc_sprintf, sprintf_i_4045);
  suite_add_tcase(s, tc_sprintf);
  // strlen
  tc_strlen = tcase_create("s21_strlen");
  tcase_add_test(tc_strlen, test_s21_strlen);
  suite_add_tcase(s, tc_strlen);

  // strncpy
  tc_strncpy = tcase_create("s21_strncpy");
  tcase_add_test(tc_strncpy, test_s21_strncpy_normal);
  tcase_add_test(tc_strncpy, test_s21_strncpy_empty);
  tcase_add_test(tc_strncpy, test_s21_strncpy_null);
  tcase_add_test(tc_strncpy, test_s21_strncpy_zero_n);
  tcase_add_test(tc_strncpy, test_s21_strncpy_large_n);

  suite_add_tcase(s, tc_strncpy);

  // strncat
  tc_strncat = tcase_create("s21_strncat");
  tcase_add_test(tc_strncat, test_s21_strncat_normal);
  tcase_add_test(tc_strncat, test_s21_strncat_empty_dest);
  tcase_add_test(tc_strncat, test_s21_strncat_empty_source);
  tcase_add_test(tc_strncat, test_s21_strncat_dest_longer_than_count);
  tcase_add_test(tc_strncat, test_s21_strncat_count_greater_than_source_length);

  suite_add_tcase(s, tc_strncat);

  // strstr
  tc_strstr = tcase_create("s21_strstr");
  tcase_add_test(tc_strstr, test_strstr_null);
  tcase_add_test(tc_strstr, test_strstr_empty);
  tcase_add_test(tc_strstr, test_strstr_not_found);
  tcase_add_test(tc_strstr, test_strstr_found);
  tcase_add_test(tc_strstr, test_strstr_case_sensitive);
  tcase_add_test(tc_strstr, test_strstr_match_at_beginning);
  tcase_add_test(tc_strstr, test_strstr_match_at_end);
  tcase_add_test(tc_strstr, test_strstr_match_in_middle);
  tcase_add_test(tc_strstr, test_strstr_multiple_matches);
  suite_add_tcase(s, tc_strstr);

  // strncmp
  tc_strncmp = tcase_create("s21_strncmp");
  tcase_add_test(tc_strncmp, test_strncmp_empty);
  tcase_add_test(tc_strncmp, test_strncmp_0);
  tcase_add_test(tc_strncmp, test_strncmp_first_long);
  tcase_add_test(tc_strncmp, test_strncmp_second_long);
  suite_add_tcase(s, tc_strncmp);

  // strbrk
  tc_strbrk = tcase_create("s21_strbrk");
  tcase_add_test(tc_strncpy, test_strpbrk_empty);
  tcase_add_test(tc_strncpy, test_strpbrk_first_match);
  tcase_add_test(tc_strncpy, test_strpbrk_no_match);
  tcase_add_test(tc_strncpy, test_strpbrk_multiple_matches);
  suite_add_tcase(s, tc_strbrk);

  // strcspn
  tc_strcspn = tcase_create("s21_strcspn");
  tcase_add_test(tc_strcspn, test_strcspn_no_match);
  tcase_add_test(tc_strcspn, test_strcspn_match_end);
  tcase_add_test(tc_strcspn, test_strcspn_match_start);
  tcase_add_test(tc_strcspn, test_strcspn_empty_str1);
  tcase_add_test(tc_strcspn, test_strcspn_empty_str2);
  suite_add_tcase(s, tc_strcspn);

  // strchr
  tc_strchr = tcase_create("s21_strchr");
  tcase_add_test(tc_strchr, test_s21_strchr_normal);
  tcase_add_test(tc_strchr, test_s21_strchr_char_not_present);
  tcase_add_test(tc_strchr, test_s21_strchr_char_null_terminator);
  suite_add_tcase(s, tc_strchr);

  // strchr
  tc_strrchr = tcase_create("s21_strrchr");
  tcase_add_test(tc_strrchr, test_s21_strrchr_normal);
  tcase_add_test(tc_strrchr, test_s21_strrchr_char_not_present);
  tcase_add_test(tc_strrchr, test_s21_strrchr_char_null_terminator);
  suite_add_tcase(s, tc_strrchr);

  // memchr
  tc_memchr = tcase_create("s21_memchr");
  tcase_add_test(tc_memchr, test_memchr_not_found);
  tcase_add_test(tc_memchr, test_memchr_found);
  tcase_add_test(tc_memchr, test_memchr_match_at_beginning);
  tcase_add_test(tc_memchr, test_memchr_match_at_end);
  tcase_add_test(tc_memchr, test_memchr_match_in_middle);
  tcase_add_test(tc_memchr, test_memchr_match_with_length);
  tcase_add_test(tc_memchr, test_memchr_match_with_zero_length);
  suite_add_tcase(s, tc_memchr);

  // memcmp
  tc_memcmp = tcase_create("s21_memcmp");
  tcase_add_test(tc_memchr, test_memcmp_same_ptr);
  tcase_add_test(tc_memchr, test_memcmp_equal_strings);
  tcase_add_test(tc_memchr, test_memcmp_different_strings);
  tcase_add_test(tc_memchr, test_memcmp_partial_match);
  tcase_add_test(tc_memchr, test_memcmp_first_string_long);
  suite_add_tcase(s, tc_memcmp);

  // memcpy
  tc_memcpy = tcase_create("s21_memcpy");
  tcase_add_test(tc_memcpy, test_memcpy_empty);
  tcase_add_test(tc_memcpy, test_memcpy_full_string);
  tcase_add_test(tc_memcpy, test_memcpy_partial_string);
  tcase_add_test(tc_memcpy, test_memcpy_large_string);
  suite_add_tcase(s, tc_memcpy);

  // memset
  tc_memset = tcase_create("s21_memset");
  tcase_add_test(tc_memset, test_memset_basic);
  tcase_add_test(tc_memset, test_memset_zero_len);
  tcase_add_test(tc_memset, test_memset_full_len);
  tcase_add_test(tc_memset, test_memset_partial_len);
  tcase_add_test(tc_memset, test_memset_zero_value);
  suite_add_tcase(s, tc_memset);

  // strtok
  tc_strtok = tcase_create("s21_strtok");
  tcase_add_test(tc_strtok, test_strtok_multiple_delimiters);
  tcase_add_test(tc_strtok, test_strtok_empty_tokens);
  tcase_add_test(tc_strtok, test_strtok_no_delimiters);
  tcase_add_test(tc_strtok, test_strtok_null_string);
  tcase_add_test(tc_strtok, test_strtok_basic);
  suite_add_tcase(s, tc_strtok);

  return s;
}

int main(void) {
  int number_failed;
  Suite *s;
  SRunner *sr;

  s = str_suite();
  sr = srunner_create(s);

  srunner_run_all(sr, CK_NORMAL);
  number_failed = srunner_ntests_failed(sr);
  srunner_free(sr);

  return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
