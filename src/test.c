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
}
END_TEST

START_TEST(sprintf_002) {
  char str[100];
  char str1[100];
  s21_sprintf(str, "%-c", 'a');
  sprintf(str1, "%-c", 'a');
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_003) {
  char str[100];
  char str1[100];
  s21_sprintf(str, "%10c", 'a');
  sprintf(str1, "%10c", 'a');
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_004) {
  char str[100];
  char str1[100];
  s21_sprintf(str, "%-2c", 'a');
  sprintf(str1, "%-2c", 'a');
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_005) {
  char str[100];
  char str1[100];
  s21_sprintf(str, "%c", '\0');
  sprintf(str1, "%c", '\0');
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_006) {
  char str[100];
  char str1[100];
  s21_sprintf(str, "%-c", '\0');
  sprintf(str1, "%-c", '\0');
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_007) {
  char str[100];
  char str1[100];
  s21_sprintf(str, "%10c", '\0');
  sprintf(str1, "%10c", '\0');
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_008) {
  char str[100];
  char str1[100];
  s21_sprintf(str, "%-2c", '\0');
  sprintf(str1, "%-2c", '\0');
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_009) {
  char str[100];
  char str1[100];
  s21_sprintf(str, "%d", 0);
  sprintf(str1, "%d", 0);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_010) {
  char str[100];
  char str1[100];
  s21_sprintf(str, "%.d", 0);
  sprintf(str1, "%.d", 0);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_011) {
  char str[100];
  char str1[100];
  s21_sprintf(str, "%10.d", 0);
  sprintf(str1, "%10.d", 0);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_012) {
  char str[100];
  char str1[100];
  s21_sprintf(str, "%10.2d", 0);
  sprintf(str1, "%10.2d", 0);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_016) {
  char str[100];
  char str1[100];
  short int x = 400;
  s21_sprintf(str, "%hd", x);
  sprintf(str1, "%hd", x);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_018) {
  char str[100];
  char str1[100];
  s21_sprintf(str, "%5.d", 0);
  sprintf(str1, "%5.d", 0);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_019) {
  char str[100];
  char str1[100];
  s21_sprintf(str, "%-d", 0);
  sprintf(str1, "%-d", 0);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_020) {
  char str[100];
  char str1[100];
  s21_sprintf(str, "%+d", 0);
  sprintf(str1, "%+d", 0);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_021) {
  char str[100];
  char str1[100];
  s21_sprintf(str, "%3.5d", 20);
  sprintf(str1, "%3.5d", 20);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_022) {
  char str[100];
  char str1[100];
  s21_sprintf(str, "%3.5ld", -100000000000000000);
  sprintf(str1, "%3.5ld", -100000000000000000);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_023) {
  char str[100];
  char str1[100];
  s21_sprintf(str, "% 3.7d", -666);
  sprintf(str1, "% 3.7d", -666);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_024) {
  char str[100];
  char str1[100];
  s21_sprintf(str, "%d", -1);
  sprintf(str1, "%d", -1);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_025) {
  char str[100];
  char str1[100];
  s21_sprintf(str, "%.d", -1);
  sprintf(str1, "%.d", -1);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_026) {
  char str[100];
  char str1[100];
  s21_sprintf(str, "%10.d", -1);
  sprintf(str1, "%10.d", -1);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_027) {
  char str[100];
  char str1[100];
  s21_sprintf(str, "%10.2d", -1);
  sprintf(str1, "%10.2d", -1);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_028) {
  char str[100];
  char str1[100];
  s21_sprintf(str, "%-10.2d", -1);
  sprintf(str1, "%-10.2d", -1);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_029) {
  char str[100];
  char str1[100];
  s21_sprintf(str, "%-.2d", -1);
  sprintf(str1, "%-.2d", -1);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_030) {
  char str[200];
  char str1[200];
  s21_sprintf(str, "%ld", -1234852342345245);
  sprintf(str1, "%ld", -1234852342345245);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_031) {
  char str[100];
  char str1[100];
  short int x = -400;
  s21_sprintf(str, "%hd", x);
  sprintf(str1, "%hd", x);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_032) {
  char str[100];
  char str1[100];
  s21_sprintf(str, "%-5d", -1);
  sprintf(str1, "%-5d", -1);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_033) {
  char str[100];
  char str1[100];
  s21_sprintf(str, "%5d", -1);
  sprintf(str1, "%5d", -1);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_034) {
  char str[100];
  char str1[100];
  s21_sprintf(str, "%-d", -1);
  sprintf(str1, "%-d", -1);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_035) {
  char str[100];
  char str1[100];
  s21_sprintf(str, "%+d", -1);
  sprintf(str1, "%+d", -1);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_036) {
  char str[100];
  char str1[100];
  unsigned int z = 0;
  s21_sprintf(str, "%u", z);
  sprintf(str1, "%u", z);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_037) {
  char str[100];
  char str1[100];
  s21_sprintf(str, "%.u", (unsigned)0);
  sprintf(str1, "%.u", (unsigned)0);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_038) {
  char str[100];
  char str1[100];
  s21_sprintf(str, "%10.u", (unsigned)0);
  sprintf(str1, "%10.u", (unsigned)0);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_039) {
  char str[100];
  char str1[100];
  s21_sprintf(str, "%10.2u", (unsigned)0);
  sprintf(str1, "%10.2u", (unsigned)0);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_040) {
  char str[100];
  char str1[100];
  s21_sprintf(str, "%-10.2u", (unsigned)0);
  sprintf(str1, "%-10.2u", (unsigned)0);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_041) {
  char str[100];
  char str1[100];
  s21_sprintf(str, "%-.2u", (unsigned)0);
  sprintf(str1, "%-.2u", (unsigned)0);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_042) {
  char str[200];
  char str1[200];
  s21_sprintf(str, "%lu", (unsigned long)100000000000000000);
  sprintf(str1, "%lu", (unsigned long)100000000000000000);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_043) {
  char str[100];
  char str1[100];
  unsigned short x = 400;
  s21_sprintf(str, "%hu", x);
  sprintf(str1, "%hu", x);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_044) {
  char str[100];
  char str1[100];
  s21_sprintf(str, "%-5u", (unsigned)0);
  sprintf(str1, "%-5u", (unsigned)0);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_045) {
  char str[100];
  char str1[100];
  s21_sprintf(str, "%5u", (unsigned)0);
  sprintf(str1, "%5u", (unsigned)0);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_046) {
  char str[100];
  char str1[100];
  s21_sprintf(str, "%-u", (unsigned)0);
  sprintf(str1, "%-u", (unsigned)0);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_047) {
  char str[100];
  char str1[100];
  s21_sprintf(str, "%3.5u", (unsigned)20);
  sprintf(str1, "%3.5u", (unsigned)20);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_048) {
  char str[100];
  char str1[100];
  s21_sprintf(str, "%3.5lu", (unsigned long)-100000000000000000);
  sprintf(str1, "%3.5lu", (unsigned long)-100000000000000000);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_049) {
  char str[100];
  char str1[100];
  s21_sprintf(str, "%u", (unsigned)-1);
  sprintf(str1, "%u", (unsigned)-1);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_050) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%.u", (unsigned)-1),
                   sprintf(str1, "%.u", (unsigned)-1));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_051) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%10.u", (unsigned)-1),
                   sprintf(str1, "%10.u", (unsigned)-1));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_052) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%10.2u", (unsigned)-1),
                   sprintf(str1, "%10.2u", (unsigned)-1));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_053) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%-10.2u", (unsigned)-1),
                   sprintf(str1, "%-10.2u", (unsigned)-1));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_054) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%-.2u", (unsigned)-1),
                   sprintf(str1, "%-.2u", (unsigned)-1));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_055) {
  char str[200];
  char str1[200];
  ck_assert_int_eq(s21_sprintf(str, "%lu", (unsigned long)-12348523423452),
                   sprintf(str1, "%lu", (unsigned long)-12348523423452));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_056) {
  char str[100];
  char str1[100];
  unsigned short x = -400;
  ck_assert_int_eq(s21_sprintf(str, "%hu", x), sprintf(str1, "%hu", x));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_057) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%-5u", (unsigned)-1),
                   sprintf(str1, "%-5u", (unsigned)-1));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_058) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%5u", (unsigned)-1),
                   sprintf(str1, "%5u", (unsigned)-1));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_059) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%-u", (unsigned)-1),
                   sprintf(str1, "%-u", (unsigned)-1));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_060) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%i", 0), sprintf(str1, "%i", 0));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_061) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%.i", 0), sprintf(str1, "%.i", 0));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_062) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%10.i", 0), sprintf(str1, "%10.i", 0));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_063) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%10.2i", 0), sprintf(str1, "%10.2i", 0));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_064) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%-10.2i", 0), sprintf(str1, "%-10.2i", 0));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_065) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%-.2i", 0), sprintf(str1, "%-.2i", 0));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_066) {
  char str[200];
  char str1[200];
  ck_assert_int_eq(s21_sprintf(str, "%li", 100000000000000000),
                   sprintf(str1, "%li", 100000000000000000));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_067) {
  char str[100];
  char str1[100];
  short int x = 400;
  ck_assert_int_eq(s21_sprintf(str, "%hi", x), sprintf(str1, "%hi", x));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_068) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%-5i", 0), sprintf(str1, "%-5i", 0));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_069) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%5i", 0), sprintf(str1, "%5i", 0));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_070) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%-i", 0), sprintf(str1, "%-i", 0));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_071) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%+i", 0), sprintf(str1, "%+i", 0));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_072) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%3.5i", 20), sprintf(str1, "%3.5i", 20));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_073) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%3.5li", -100000000000000000),
                   sprintf(str1, "%3.5li", -100000000000000000));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_074) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "% 3.7i", -666),
                   sprintf(str1, "% 3.7i", -666));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_075) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%i", -1), sprintf(str1, "%i", -1));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_076) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%.i", -1), sprintf(str1, "%.i", -1));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_077) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%10.i", -1), sprintf(str1, "%10.i", -1));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_078) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%10.2i", -1), sprintf(str1, "%10.2i", -1));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_079) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%-10.2i", -1),
                   sprintf(str1, "%-10.2i", -1));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_080) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%-.2i", -1), sprintf(str1, "%-.2i", -1));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_081) {
  char str[200];
  char str1[200];
  ck_assert_int_eq(s21_sprintf(str, "%li", -1234852342345245),
                   sprintf(str1, "%li", -1234852342345245));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_082) {
  char str[100];
  char str1[100];
  short int x = -400;
  ck_assert_int_eq(s21_sprintf(str, "%hi", x), sprintf(str1, "%hi", x));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_083) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%-5i", -1), sprintf(str1, "%-5i", -1));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_084) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%5i", -1), sprintf(str1, "%5i", -1));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_085) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%-i", -1), sprintf(str1, "%-i", -1));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_086) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%+i", -1), sprintf(str1, "%+i", -1));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_087) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%f", 1337.228),
                   sprintf(str1, "%f", 1337.228));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_088) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%10f", 1337.228),
                   sprintf(str1, "%10f", 1337.228));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_089) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%10.2f", 1337.228),
                   sprintf(str1, "%10.2f", 1337.228));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_090) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%10.12f", 1337.228),
                   sprintf(str1, "%10.12f", 1337.228));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_091) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%-1.12f", 1337.228),
                   sprintf(str1, "%-1.12f", 1337.228));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_092) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%.12f", 1337.228),
                   sprintf(str1, "%.12f", 1337.228));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_093) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "% 12f", 1337.228),
                   sprintf(str1, "% 12f", 1337.228));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_094) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%+12f", 1337.228),
                   sprintf(str1, "%+12f", 1337.228));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_095) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%.0f", 1337.228),
                   sprintf(str1, "%.0f", 1337.228));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_096) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%.5f", 1337.228),
                   sprintf(str1, "%.5f", 1337.228));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_097) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%3.5f", 1337.228),
                   sprintf(str1, "%3.5f", 1337.228));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_098) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%30.12f", 1337.228),
                   sprintf(str1, "%30.12f", 1337.228));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_099) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%-30.12f", 1337.228),
                   sprintf(str1, "%-30.12f", 1337.228));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_100) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "% 02.12f", 1337.228),
                   sprintf(str1, "% 02.12f", 1337.228));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_101) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%f", -1337.228),
                   sprintf(str1, "%f", -1337.228));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_102) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%10f", -1337.228),
                   sprintf(str1, "%10f", -1337.228));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_103) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%10.2f", -1337.228),
                   sprintf(str1, "%10.2f", -1337.228));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_104) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%10.12f", -1337.228),
                   sprintf(str1, "%10.12f", -1337.228));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_105) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%-1.12f", -1337.228),
                   sprintf(str1, "%-1.12f", -1337.228));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_106) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%.12f", -1337.228),
                   sprintf(str1, "%.12f", -1337.228));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_107) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "% 20f", -1337.228),
                   sprintf(str1, "% 20f", -1337.228));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_108) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%+20f", -1337.228),
                   sprintf(str1, "%+20f", -1337.228));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_109) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%.0f", -1337.228),
                   sprintf(str1, "%.0f", -1337.228));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_110) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%.5f", -1337.228),
                   sprintf(str1, "%.5f", -1337.228));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_111) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%3.5f", -1337.228),
                   sprintf(str1, "%3.5f", -1337.228));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_112) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%30.12f", -1337.228),
                   sprintf(str1, "%30.12f", -1337.228));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_113) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%-30.12f", -1337.228),
                   sprintf(str1, "%-30.12f", -1337.228));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_114) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "% 02.12f", -1337.228),
                   sprintf(str1, "% 02.12f", -1337.228));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_115) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%s", "ABOBA"),
                   sprintf(str1, "%s", "ABOBA"));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_116) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%-s", "ABOBA"),
                   sprintf(str1, "%-s", "ABOBA"));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_117) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%20s", "ABOBA"),
                   sprintf(str1, "%20s", "ABOBA"));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_118) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%20s", "123456789"),
                   sprintf(str1, "%20s", "123456789"));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_119) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%3s", "A B O B A"),
                   sprintf(str1, "%3s", "A B O B A"));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_120) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%-3s", "A B O B A"),
                   sprintf(str1, "%-3s", "A B O B A"));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_121) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%.5s", "A B O B A"),
                   sprintf(str1, "%.5s", "A B O B A"));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_122) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%.25s", "A B O B A"),
                   sprintf(str1, "%.25s", "A B O B A"));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_123) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%.s", "A B O B A"),
                   sprintf(str1, "%.s", "A B O B A"));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_124) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%-.5s", "SampleText"),
                   sprintf(str1, "%-.5s", "SampleText"));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_125) {
  char str[100];
  char str1[100];
  s21_sprintf(str, "%5.10s", "SampleText");
  sprintf(str1, "%5.10s", "SampleText");
  ck_assert_int_eq(s21_sprintf(str, "%5.10s", "SampleText"),
                   sprintf(str1, "%5.10s", "SampleText"));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_126) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%5.1s", "SampleText"),
                   sprintf(str1, "%5.1s", "SampleText"));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_127) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%-5.1s", "SampleText"),
                   sprintf(str1, "%-5.1s", "SampleText"));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_128) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%-5.0s", "SampleText"),
                   sprintf(str1, "%-5.0s", "SampleText"));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_129) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%s", "\0\0\0\0\0\0"),
                   sprintf(str1, "%s", "\0\0\0\0\0\0"));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_130) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%-s", "\0\0\0\0\0\0"),
                   sprintf(str1, "%-s", "\0\0\0\0\0\0"));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_131) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%20s", "\0\0\0\0\0\0"),
                   sprintf(str1, "%20s", "\0\0\0\0\0\0"));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_132) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%20s", "\0\0\0\0\0\0"),
                   sprintf(str1, "%20s", "\0\0\0\0\0\0"));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_133) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%3s", "\0\0\0\0\0\0"),
                   sprintf(str1, "%3s", "\0\0\0\0\0\0"));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_134) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%-3s", "\0\0\0\0\0\0"),
                   sprintf(str1, "%-3s", "\0\0\0\0\0\0"));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_135) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%.5s", "\0\0\0\0\0\0"),
                   sprintf(str1, "%.5s", "\0\0\0\0\0\0"));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_136) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%.25s", "\0\0\0\0\0\0"),
                   sprintf(str1, "%.25s", "\0\0\0\0\0\0"));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_137) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%.s", "\0\0\0\0\0\0"),
                   sprintf(str1, "%.s", "\0\0\0\0\0\0"));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_138) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%-.5s", "\0\0\0\0\0\0\0"),
                   sprintf(str1, "%-.5s", "\0\0\0\0\0\0\0"));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_139) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%5.10s", "\0\0\0\0\0\0\0"),
                   sprintf(str1, "%5.10s", "\0\0\0\0\0\0\0"));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_140) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%5.1s", "\0\0\0\0\0\0\0"),
                   sprintf(str1, "%5.1s", "\0\0\0\0\0\0\0"));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_141) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%-5.1s", "\0\0\0\0\0\0\0"),
                   sprintf(str1, "%-5.1s", "\0\0\0\0\0\0\0"));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_142) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%-5.0s", "\0\0\0\0\0\0\0"),
                   sprintf(str1, "%-5.0s", "\0\0\0\0\0\0\0"));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_143) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%s", ""), sprintf(str1, "%s", ""));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_144) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%-s", ""), sprintf(str1, "%-s", ""));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_145) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%20s", ""), sprintf(str1, "%20s", ""));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_146) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%20s", ""), sprintf(str1, "%20s", ""));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_147) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%3s", ""), sprintf(str1, "%3s", ""));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_148) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%-3s", ""), sprintf(str1, "%-3s", ""));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_149) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%.5s", ""), sprintf(str1, "%.5s", ""));
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_150) {
  char str[100];
  char str1[100];
  ck_assert_int_eq(s21_sprintf(str, "%.25s", ""), sprintf(str1, "%.25s", ""));
  ck_assert_str_eq(str, str1);
}
END_TEST
START_TEST(sprintf_151) {
  char str[100];
  char str1[100];
  s21_sprintf(str, "%.s", "");
  sprintf(str1, "%.s", "");
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_152) {
  char str[100];
  char str1[100];
  s21_sprintf(str, "%-.5s", "");
  sprintf(str1, "%-.5s", "");
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_153) {
  char str[100];
  char str1[100];
  s21_sprintf(str, "%5.10s", "");
  sprintf(str1, "%5.10s", "");
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_154) {
  char str[100];
  char str1[100];
  s21_sprintf(str, "%5.1s", "");
  sprintf(str1, "%5.1s", "");
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_155) {
  char str[100];
  char str1[100];
  s21_sprintf(str, "%-5.1s", "");
  sprintf(str1, "%-5.1s", "");
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_156) {
  char str[100];
  char str1[100];
  s21_sprintf(str, "%-5.0s", "");
  sprintf(str1, "%-5.0s", "");
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_157) {
  char str[100];
  char str1[100];
  s21_sprintf(str, "%%");
  sprintf(str1, "%%");
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_158) {
  char str[100];
  char str1[100];
  s21_sprintf(str, "%%");
  sprintf(str1, "%%");
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_159) {
  char str[100];
  char str1[100];
  s21_sprintf(str, "%%%+.d%.1u%+.i%+.f%.4s", 21, (unsigned)-42, 0xF1AC,
              -2313.1313, "it will go");
  sprintf(str1, "%%%+.d%.1u%+.i%+.f%.4s", 21, (unsigned)-42, 0xF1AC, -2313.1313,
          "it will go");
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_160) {
  char str[100];
  char str1[100];
  for (int i = -101; i <= 101;) {
    s21_sprintf(str1, "% -i % -d % -5d", i, i + 1, 143646235);
    sprintf(str, "% -i % -d % -5d", i, i + 1, 143646235);
    i += 7;
    ck_assert_str_eq(str, str1);
  }
}
END_TEST

START_TEST(sprintf_161) {
  char str[100];
  char str1[100];
  s21_sprintf(str, "%.f", 56.7);
  sprintf(str1, "%.f", 56.7);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_162) {
  char str[100];
  char str1[100];
  s21_sprintf(str, "%.f", 56.2);
  sprintf(str1, "%.f", 56.2);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_163) {
  char str[100];
  char str1[100];
  s21_sprintf(str, "%.f", 5634.9);
  sprintf(str1, "%.f", 5634.9);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_166) {
  char str[100];
  char str1[100];
  s21_sprintf(str, "%f", 1337.228);
  sprintf(str1, "%f", 1337.228);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_170) {
  char str1[512];
  char str2[512];
  char *format = "This is a simple value %d";
  int val = 69;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_171) {
  char str1[512];
  char str2[512];
  char *format = "%.5i";
  int val = 69;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_361) {
  char str1[512];
  char str2[512];
  char *format = "%5d";
  int val = 69;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_172) {
  char str1[512];
  char str2[512];
  char *format = "%-5i";
  int val = 69;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_173) {
  char str1[512];
  char str2[512];
  char *format = "%+12d";
  int val = 69;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_174) {
  char str1[512];
  char str2[512];
  char *format = "%+5.31li";
  long int val = 698518581899;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
}
END_TEST

START_TEST(sprintf_175) {
  char str1[512];
  char str2[512];
  char *format = "%-16.9hi";
  short int val = 6958;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_176) {
  char str1[512];
  char str2[512];
  char *format = "%.0d";
  int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_177) {
  char str1[512];
  char str2[512];
  char *format = "% d";
  int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_178) {
  char str1[512];
  char str2[512];
  char *format = "%u";
  unsigned int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_179) {
  char str1[512];
  char str2[512];
  char *format = "%15u";
  unsigned int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_180) {
  char str1[512];
  char str2[512];
  char *format = "%-16u";
  unsigned int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_181) {
  char str1[512];
  char str2[512];
  char *format = "%.51u";
  unsigned int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_182) {
  char str1[512];
  char str2[512];
  char *format = "% 5.51u";
  unsigned int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_183) {
  char str1[512];
  char str2[512];
  char *format = "%hu";
  unsigned short int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_184) {
  char str1[512];
  char str2[512];
  char *format = "%lu";
  unsigned long int val = 949149114140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_185) {
  char str1[512];
  char str2[512];
  char *format = "%lu, %u, %hu, %.5u, %5.u";
  unsigned long int val = 949149114140;
  ck_assert_int_eq(
      s21_sprintf(str1, format, val, 14, 1441, 14414, 9681),
      sprintf(str2, format, val, (unsigned)14, (unsigned short)1441,
              (unsigned)14414, (unsigned)9681));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_186) {
  char str1[512];
  char str2[512];
  char *format = "%hd";
  short int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_187) {
  char str1[512];
  char str2[512];
  char *format = "%u";
  ck_assert_int_eq(s21_sprintf(str1, format, 0),
                   sprintf(str2, format, (unsigned)0));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_188) {
  char str1[512];
  char str2[512];
  char *format = "%c";
  char val = 'X';
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_189) {
  char str1[512];
  char str2[512];
  char *format = "%.5c";
  char val = 'c';
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_190) {
  char str1[512];
  char str2[512];
  char *format = "% -5c";
  char val = 'c';
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_191) {
  char str1[512];
  char str2[512];
  char *format = "%15c";
  char val = 'c';
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_192) {
  char str1[512];
  char str2[512];
  char *format = "%-5.3c%c%c%c%c Hello! ABOBA";
  char val = 'c';
  ck_assert_int_eq(s21_sprintf(str1, format, val, 'c', 'a', 'b', 'b'),
                   sprintf(str2, format, val, 'c', 'a', 'b', 'b'));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_193) {
  char str1[512];
  char str2[512];
  char *format = "%-5.3c";
  char val = 'c';
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_194) {
  char str1[512];
  char str2[512];
  char *format = "%s";
  char *val = "I LOVE STRINGS AND TESTS AND SCHOOL21 NO JOKE";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_195) {
  char str1[512];
  char str2[512];
  char *format = "%.15s";
  char *val = "I LOVE STRINGS AND TESTS AND SCHOOL21 NO JOKE";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_196) {
  char str1[512];
  char str2[512];
  char *format = "%15s";
  char *val = "69 IS MY FAVORITE NUMBER";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_197) {
  char str1[512];
  char str2[512];
  char *format = "%-15.9s";
  char *val = "69 IS MY FAVORITE NUMBER";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_198) {
  char str1[512];
  char str2[512];
  char *format = "%s";
  char *val =
      "69 IS MY FAVORITE NUMBER THIS IS SUPPOSED TO BE A VERY LONG STRING";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_199) {
  char str1[512];
  char str2[512];
  char *format = "%s%s%s%s";
  char *val =
      "69 IS MY FAVORITE NUMBER THIS IS SUPPOSED TO BE A VERY LONG STRING";
  char *s1 = "";
  char *s2 = "87418347813748913749871389480913";
  char *s3 = "HAHAABOBASUCKER";
  ck_assert_int_eq(s21_sprintf(str1, format, val, s1, s2, s3),
                   sprintf(str2, format, val, s1, s2, s3));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_200) {
  char str1[512];
  char str2[512];
  char *val = "kjafdiuhfjahfjdahf";
  char *format = "%120s";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_201) {
  char str1[512];
  char str2[512];
  char *format = "% f";
  float val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_202) {
  char str1[512];
  char str2[512];
  ck_assert_int_eq(s21_sprintf(str1, "abc"), sprintf(str2, "abc"));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_203) {
  char str1[512];
  char str2[512];
  ck_assert_int_eq(s21_sprintf(str1, "abc"), sprintf(str2, "abc"));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_204) {
  char str1[512];
  char str2[512];
  ck_assert_int_eq(s21_sprintf(str1, "%c", '\t'), sprintf(str2, "%c", '\t'));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_205) {
  char str1[512];
  char str2[512];
  ck_assert_int_eq(s21_sprintf(str1, "%c%c%c%c%c", '\t', '\n', '0', 'S', 's'),
                   sprintf(str2, "%c%c%c%c%c", '\t', '\n', '0', 'S', 's'));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_206) {
  char str1[512];
  char str2[512];
  ck_assert_int_eq(s21_sprintf(str1, "%s", "Drop Sega PLS"),
                   sprintf(str2, "%s", "Drop Sega PLS"));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_207) {
  char str1[512];
  char str2[512];
  ck_assert_int_eq(
      s21_sprintf(str1, "%s%s%s%s%s", "Drop", " ", "Sega", " ", "PLS"),
      sprintf(str2, "%s%s%s%s%s", "Drop", " ", "Sega", " ", "PLS"));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_208) {
  char str1[512];
  char str2[512];
  ck_assert_int_eq(s21_sprintf(str1, "%d", 666), sprintf(str2, "%d", 666));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_209) {
  char str1[512];
  char str2[512];
  ck_assert_int_eq(s21_sprintf(str1, "%d%d%d%d", -999, 0, 666, -100),
                   sprintf(str2, "%d%d%d%d", -999, 0, 666, -100));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_210) {
  char str1[512];
  char str2[512];
  ck_assert_int_eq(s21_sprintf(str1, "%i", -0), sprintf(str2, "%i", -0));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_211) {
  char str1[512];
  char str2[512];
  ck_assert_int_eq(s21_sprintf(str1, "%i%i%i%i", -999, 0, 666, -100),
                   sprintf(str2, "%i%i%i%i", -999, 0, 666, -100));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_212) {
  char str1[512];
  char str2[512];
  ck_assert_int_eq(s21_sprintf(str1, "%f", 0.0001),
                   sprintf(str2, "%f", 0.0001));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_213) {
  char str1[512];
  char str2[512];
  ck_assert_int_eq(
      s21_sprintf(str1, "%f%f%f%f", -999.666, 0.0001, 666.999, -100.001),
      sprintf(str2, "%f%f%f%f", -999.666, 0.0001, 666.999, -100.001));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_214) {
  char str1[512];
  char str2[512];
  ck_assert_int_eq(s21_sprintf(str1, "%u", 100),
                   sprintf(str2, "%u", (unsigned)100));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_215) {
  char str1[512];
  char str2[512];
  ck_assert_int_eq(s21_sprintf(str1, "%u%u%u%u", 999, 0, 666, 100),
                   sprintf(str2, "%u%u%u%u", (unsigned)999, (unsigned)0,
                           (unsigned)666, (unsigned)100));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_216) {
  char str1[512];
  char str2[512];
  ck_assert_int_eq(s21_sprintf(str1, "%8c", '\t'), sprintf(str2, "%8c", '\t'));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_217) {
  char str1[512];
  char str2[512];
  ck_assert_int_eq(s21_sprintf(str1, "%-8c", '\t'),
                   sprintf(str2, "%-8c", '\t'));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_218) {
  char str1[512];
  char str2[512];
  ck_assert_int_eq(
      s21_sprintf(str1, "%3c%-11c%10c%-2c%c", '\t', '\n', '0', 'S', 's'),
      sprintf(str2, "%3c%-11c%10c%-2c%c", '\t', '\n', '0', 'S', 's'));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_219) {
  char str1[512];
  char str2[512];
  char format[] = "%10ld";
  ck_assert_int_eq(s21_sprintf(str1, format, 1), sprintf(str2, format, 1));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_220) {
  char str1[512];
  char str2[512];
  char format[] = "%1.1f";
  ck_assert_int_eq(s21_sprintf(str1, format, 1.1), sprintf(str2, format, 1.1));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_221) {
  char str1[512];
  char str2[512];
  char format[] = "%8.3c";
  ck_assert_int_eq(s21_sprintf(str1, format, 'a'), sprintf(str2, format, 'a'));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_222) {
  char str1[512];
  char str2[512];
  char format[] = "%+5.5d aboba";
  int val = 10000;
  int a = s21_sprintf(str1, format, val);
  int b = sprintf(str2, format, val);
  ck_assert_int_eq(a, b);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_223) {
  char str1[512];
  char str2[512];
  char format[] = "%7.7f";
  ck_assert_int_eq(s21_sprintf(str1, format, 11.123456),
                   sprintf(str2, format, 11.123456));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_224) {
  char str1[512];
  char str2[512];
  char format[] = "%7.4s";
  ck_assert_int_eq(s21_sprintf(str1, format, "aboba floppa"),
                   sprintf(str2, format, "aboba floppa"));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_225) {
  char str1[512];
  char str2[512];
  char format[] = "%6.6u";
  ck_assert_int_eq(s21_sprintf(str1, format, 12341151),
                   sprintf(str2, format, 12341151));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_226) {
  char str1[512];
  char str2[512];
  char format[] = "%li%ld%lu";
  ck_assert_int_eq(s21_sprintf(str1, format, 666666666666, 777, 111),
                   sprintf(str2, format, 666666666666, 777, 111));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_227) {
  char str1[512];
  char str2[512];
  char format[] = "%hi%hd%hu";
  ck_assert_int_eq(s21_sprintf(str1, format, 666, -777, 111),
                   sprintf(str2, format, 666, -777, 111));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_228) {
  char str1[512];
  char str2[512];
  char format[] = "%+li%+lu%+d%+lf";
  ck_assert_int_eq(s21_sprintf(str1, format, -123, 321, -5555, -1213.123),
                   sprintf(str2, format, -123, 321, -5555, -1213.123));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_229) {
  char str1[512];
  char str2[512];
  char format[] = "%-11.11li%-35.5lu%-3.5ld";
  ck_assert_int_eq(
      s21_sprintf(str1, format, 66666666666, 5555555555, 44444444444),
      sprintf(str2, format, 66666666666, 5555555555, 44444444444));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_230) {
  char str1[512];
  char str2[512];
  char format[] = "% c";
  ck_assert_int_eq(s21_sprintf(str1, format, 'a'), sprintf(str2, format, 'a'));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_231) {
  char str1[512];
  char str2[512];
  char format[] = "% s";
  ck_assert_int_eq(s21_sprintf(str1, format, "aboba likes floppa"),
                   sprintf(str2, format, "aboba likes floppa"));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_232) {
  char str1[512];
  char str2[512];
  char format[] = "% s% c";
  ck_assert_int_eq(s21_sprintf(str1, format, "", 'f'),
                   sprintf(str2, format, "", 'f'));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_233) {
  char str1[512];
  char str2[512];
  char format[] = "%210s";
  ck_assert_int_eq(s21_sprintf(str1, format, "AHHAHAHA\0AHHAHAHAH"),
                   sprintf(str2, format, "AHHAHAHA\0AHHAHAHAH"));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_234) {
  char str1[512];
  char str2[512];
  char format[] = "%-115s";
  ck_assert_int_eq(s21_sprintf(str1, format, "Nick her"),
                   sprintf(str2, format, "Nick her"));
  ck_assert_str_eq(str1, str2);
}
END_TEST

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
}
END_TEST

START_TEST(sprintf_236) {
  char str1[512];
  char str2[512];
  char format[] = "%.f";
  ck_assert_int_eq(s21_sprintf(str1, format, 121.123),
                   sprintf(str2, format, 121.123));
  ck_assert_str_eq(str1, str2);
}
END_TEST

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
  ck_assert_int_eq(s21_sprintf(str1, format, 111.111),
                   sprintf(str2, format, 111.111));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_240) {
  char str1[512];
  char str2[512];
  char format[] = "%-.1d";

  ck_assert_int_eq(s21_sprintf(str1, format, 111), sprintf(str2, format, 111));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_250) {
  char str[100];
  char str2[100];

  ck_assert_int_eq(s21_sprintf(str, "Hello %s", "tendyrir"),
                   sprintf(str2, "Hello %s", "tendyrir"));
  ck_assert_int_eq(s21_sprintf(str, "Hello %-s", "tendyrir"),
                   sprintf(str2, "Hello %-s", "tendyrir"));
  ck_assert_int_eq(s21_sprintf(str, "Hello %-20s", "tendyrir"),
                   sprintf(str2, "Hello %-20s", "tendyrir"));
  ck_assert_int_eq(s21_sprintf(str, "Hello %-20.s", "tendyrir"),
                   sprintf(str2, "Hello %-20.s", "tendyrir"));
  ck_assert_int_eq(s21_sprintf(str, "Hello %-.s", "tendyrir"),
                   sprintf(str2, "Hello %-.s", "tendyrir"));
  ck_assert_int_eq(s21_sprintf(str, "Hello %.s", "tendyrir"),
                   sprintf(str2, "Hello %.s", "tendyrir"));
  ck_assert_int_eq(s21_sprintf(str, "Hello %-10.20s", "tendyrir"),
                   sprintf(str2, "Hello %-10.20s", "tendyrir"));
  ck_assert_int_eq(s21_sprintf(str, "Hello %-.20s", "tendyrir"),
                   sprintf(str2, "Hello %-.20s", "tendyrir"));
  ck_assert_int_eq(s21_sprintf(str, "Hello %21.20s", "tendyrir"),
                   sprintf(str2, "Hello %21.20s", "tendyrir"));
  ck_assert_int_eq(
      s21_sprintf(str, "Hello %21.20s and %-2.4s", "tendyrir", "school"),
      sprintf(str2, "Hello %21.20s and %-2.4s", "tendyrir", "school"));
}
END_TEST

START_TEST(sprintf_252) {
  char str[100];
  char str2[100];

  ck_assert_int_eq(s21_sprintf(str, "2 + 2 = %d ! = %d", +4, -1),
                   sprintf(str2, "2 + 2 = %d ! = %d", +4, -1));
  ck_assert_int_eq(s21_sprintf(str, "2 + 2 = %-d ! = %+d", 4, 10),
                   sprintf(str2, "2 + 2 = %-d ! = %+d", 4, 10));
  ck_assert_int_eq(s21_sprintf(str, "2 + 2 = % -d ! = %+-d", +4, 10),
                   sprintf(str2, "2 + 2 = % -d ! = %+-d", +4, 10));
  ck_assert_int_eq(s21_sprintf(str, "2 + 2 = % 10d ! = %+-20d", -4, 10),
                   sprintf(str2, "2 + 2 = % 10d ! = %+-20d", -4, 10));
  ck_assert_int_eq(s21_sprintf(str, "2 + 2 = % 10.d ! = %+-20.20d", 0, -182),
                   sprintf(str2, "2 + 2 = % 10.d ! = %+-20.20d", 0, -182));
  ck_assert_int_eq(
      s21_sprintf(str, "2 + 2 = % 10.hd ! = %+-20.20ld", 4, 276892067102856),
      sprintf(str2, "2 + 2 = % 10.hd ! = %+-20.20ld", (short)4,
              276892067102856));
  ck_assert_int_eq(
      s21_sprintf(str, "2 + 2 = % 10.hd ! = %+-20.20ld", 010, 0x1275623445),
      sprintf(str2, "2 + 2 = % 10.hd ! = %+-20.20ld", (short)010,
              0x1275623445));
}
END_TEST

START_TEST(sprintf_253) {
  char str[100];
  char str2[100];

  ck_assert_int_eq(s21_sprintf(str, "2 + 2 = %i ! = %i", 4, 10),
                   sprintf(str2, "2 + 2 = %i ! = %i", 4, 10));
  ck_assert_int_eq(s21_sprintf(str, "2 + 2 = %-i ! = %+i", 4, 10),
                   sprintf(str2, "2 + 2 = %-i ! = %+i", 4, 10));
  ck_assert_int_eq(s21_sprintf(str, "2 + 2 = % -i ! = %+-i", 4, -10),
                   sprintf(str2, "2 + 2 = % -i ! = %+-i", 4, -10));
  ck_assert_int_eq(s21_sprintf(str, "2 + 2 = % 10d ! = %+-20i", 4, 10),
                   sprintf(str2, "2 + 2 = % 10i ! = %+-20i", 4, 10));
  ck_assert_int_eq(s21_sprintf(str, "2 + 2 = % 10.i ! = %+-20.20i", 4, -10),
                   sprintf(str2, "2 + 2 = % 10.i ! = %+-20.20i", 4, -10));
  ck_assert_int_eq(
      s21_sprintf(str, "2 + 2 = % 10.hi ! = %+-20.20li", -4, +276892067102856),
      sprintf(str2, "2 + 2 = % 10.hi ! = %+-20.20li", (short)-4,
              +276892067102856));
  ck_assert_int_eq(
      s21_sprintf(str, "2 + 2 = % 10.hi ! = %+-20.20li", 010, 0x1275623445),
      sprintf(str2, "2 + 2 = % 10.hi ! = %+-20.20li", (short)010,
              0x1275623445));
}
END_TEST

START_TEST(sprintf_254) {
  char str[100];
  char str2[100];

  ck_assert_int_eq(s21_sprintf(str, "2 + 2 = %d ! = %u", -4, (unsigned)10),
                   sprintf(str2, "2 + 2 = %d ! = %u", -4, (unsigned)10));
  ck_assert_int_eq(s21_sprintf(str, "2 + 2 = %-d ! = %u", 4, (unsigned)10),
                   sprintf(str2, "2 + 2 = %-d ! = %u", 4, (unsigned)10));
  ck_assert_int_eq(s21_sprintf(str, "2 + 2 = % -i ! = %-u", 4, (unsigned)10),
                   sprintf(str2, "2 + 2 = % -i ! = %-u", 4, (unsigned)10));
  ck_assert_int_eq(s21_sprintf(str, "2 + 2 = % 10d ! = %-20u", 4, (unsigned)10),
                   sprintf(str2, "2 + 2 = % 10d ! = %-20u", 4, (unsigned)10));
  ck_assert_int_eq(
      s21_sprintf(str, "2 + 2 = % 10.i ! = %-20.20u", 4, (unsigned)10),
      sprintf(str2, "2 + 2 = % 10.i ! = %-20.20u", 4, (unsigned)10));
  ck_assert_int_eq(
      s21_sprintf(str, "2 + 2 = %10.hu ! = %-20.20lu", (unsigned short)4,
                  (unsigned long)276892067102856),
      sprintf(str2, "2 + 2 = %10.hu ! = %-20.20lu", (unsigned short)4,
              (unsigned long)276892067102856));
}
END_TEST

START_TEST(sprintf_255) {
  char str[100];
  char str2[100];

  ck_assert_int_eq(s21_sprintf(str, "2 + 2 = %f ! = %f", -4.21, +42.21),
                   sprintf(str2, "2 + 2 = %f ! = %f", -4.21, +42.21));
  ck_assert_int_eq(s21_sprintf(str, "2 + 2 = %-f ! = %+f", -4.21, +42.21),
                   sprintf(str2, "2 + 2 = %-f ! = %+f", -4.21, +42.21));
  ck_assert_int_eq(s21_sprintf(str, "2 + 2 = %-10f ! = %+12f", -4.21, +42.21),
                   sprintf(str2, "2 + 2 = %-10f ! = %+12f", -4.21, +42.21));
  ck_assert_int_eq(
      s21_sprintf(str, "2 + 2 = %- 10.f ! = %+12.5f", -4.21, +42.21),
      sprintf(str2, "2 + 2 = %- 10.f ! = %+12.5f", -4.21, +42.21));
  ck_assert_int_eq(
      s21_sprintf(str, "2 + 2 = %- 10.f ! = %+12.5lf", -4.21, +42.21),
      sprintf(str2, "2 + 2 = %- 10.f ! = %+12.5lf", -4.21, +42.21));
}
END_TEST

START_TEST(sprintf_256) {
  char sp[256] = {'\0'};
  char s21[256] = {'\0'};
  char format[] = " %.2d ";
  sprintf(sp, format, -1);
  s21_sprintf(s21, format, -1);
  ck_assert_str_eq(sp, s21);
}
END_TEST

START_TEST(sprintf_257) {
  char sp[256] = {'\0'};
  char s21[256] = {'\0'};
  char format[] = " %.2d ";
  sprintf(sp, format, 1);
  s21_sprintf(s21, format, 1);
  ck_assert_str_eq(sp, s21);
}
END_TEST

START_TEST(sprintf_258) {
  char sp[256] = {'\0'};
  char s21[256] = {'\0'};
  char format[] = " %.1d ";
  sprintf(sp, format, 9);
  s21_sprintf(s21, format, 9);
  ck_assert_str_eq(sp, s21);
}
END_TEST

START_TEST(sprintf_259) {
  char sp[256] = {'\0'};
  char s21[256] = {'\0'};
  char format[] = " %.2d ";
  sprintf(sp, format, 10);
  s21_sprintf(s21, format, 10);
  ck_assert_str_eq(sp, s21);
}
END_TEST

START_TEST(sprintf_260) {
  char sp[256] = {'\0'};
  char s21[256] = {'\0'};
  char format[] = " %.3d ";
  sprintf(sp, format, 11);
  s21_sprintf(s21, format, 11);
  ck_assert_str_eq(sp, s21);
}
END_TEST

START_TEST(sprintf_261) {
  char sp[256] = {'\0'};
  char s21[256] = {'\0'};
  char format[] = " %.4d ";
  sprintf(sp, format, 15);
  s21_sprintf(s21, format, 15);
  ck_assert_str_eq(sp, s21);
}
END_TEST

START_TEST(sprintf_262) {
  char sp[256] = {'\0'};
  char s21[256] = {'\0'};
  char format[] = " %.5d ";
  sprintf(sp, format, 16);
  s21_sprintf(s21, format, 16);
  ck_assert_str_eq(sp, s21);
}
END_TEST

START_TEST(sprintf_263) {
  char sp[256] = {'\0'};
  char s21[256] = {'\0'};
  char format[] = " %.6d ";
  sprintf(sp, format, 17);
  s21_sprintf(s21, format, 17);
  ck_assert_str_eq(sp, s21);
}
END_TEST

START_TEST(sprintf_264) {
  char sp[256] = {'\0'};
  char s21[256] = {'\0'};
  char format[] = " %.1d ";
  sprintf(sp, format, 99);
  s21_sprintf(s21, format, 99);
  ck_assert_str_eq(sp, s21);
}
END_TEST

START_TEST(sprintf_265) {
  char sp[256] = {'\0'};
  char s21[256] = {'\0'};
  char format[] = " %.2d ";
  sprintf(sp, format, 100);
  s21_sprintf(s21, format, 100);
  ck_assert_str_eq(sp, s21);
}
END_TEST

START_TEST(sprintf_266) {
  char sp[256] = {'\0'};
  char s21[256] = {'\0'};
  char format[] = " %.3d ";
  sprintf(sp, format, 101);
  s21_sprintf(s21, format, 101);
  ck_assert_str_eq(sp, s21);
}
END_TEST

START_TEST(sprintf_267) {
  char sp[256] = {'\0'};
  char s21[256] = {'\0'};
  char format[] = " %.1d ";
  sprintf(sp, format, -9);
  s21_sprintf(s21, format, -9);
  ck_assert_str_eq(sp, s21);
}
END_TEST

START_TEST(sprintf_268) {
  char sp[256] = {'\0'};
  char s21[256] = {'\0'};
  char format[] = " %.2d ";
  sprintf(sp, format, -10);
  s21_sprintf(s21, format, -10);
  ck_assert_str_eq(sp, s21);
}
END_TEST

START_TEST(sprintf_269) {
  char sp[256] = {'\0'};
  char s21[256] = {'\0'};
  char format[] = " %.3d ";
  sprintf(sp, format, -11);
  s21_sprintf(s21, format, -11);
  ck_assert_str_eq(sp, s21);
}
END_TEST

START_TEST(sprintf_270) {
  char sp[256] = {'\0'};
  char s21[256] = {'\0'};
  char format[] = " %.4d ";
  sprintf(sp, format, -14);
  s21_sprintf(s21, format, -14);
  ck_assert_str_eq(sp, s21);
}
END_TEST

START_TEST(sprintf_271) {
  char sp[256] = {'\0'};
  char s21[256] = {'\0'};
  char format[] = " %.1d ";
  sprintf(sp, format, -15);
  s21_sprintf(s21, format, -15);
  ck_assert_str_eq(sp, s21);
}
END_TEST

START_TEST(sprintf_272) {
  char sp[256] = {'\0'};
  char s21[256] = {'\0'};
  char format[] = " %.2d ";
  sprintf(sp, format, -16);
  s21_sprintf(s21, format, -16);
  ck_assert_str_eq(sp, s21);
}
END_TEST

START_TEST(sprintf_273) {
  char sp[256] = {'\0'};
  char s21[256] = {'\0'};
  char format[] = " %.3d ";
  sprintf(sp, format, -99);
  s21_sprintf(s21, format, -99);
  ck_assert_str_eq(sp, s21);
}
END_TEST

START_TEST(sprintf_274) {
  char sp[256] = {'\0'};
  char s21[256] = {'\0'};
  char format[] = " %.3d ";
  sprintf(sp, format, -100);
  s21_sprintf(s21, format, -100);
  ck_assert_str_eq(sp, s21);
}
END_TEST

START_TEST(sprintf_275) {
  char sp[256] = {'\0'};
  char s21[256] = {'\0'};
  char format[] = " %.4d ";
  sprintf(sp, format, -101);
  s21_sprintf(s21, format, -101);
  ck_assert_str_eq(sp, s21);
}
END_TEST

START_TEST(sprintf_276) {
  char sp[256] = {'\0'};
  char s21[256] = {'\0'};
  char format[] = " %.8d ";
  sprintf(sp, format, INT_MAX);
  s21_sprintf(s21, format, INT_MAX);
  ck_assert_str_eq(sp, s21);
}
END_TEST

START_TEST(sprintf_277) {
  char sp[256] = {'\0'};
  char s21[256] = {'\0'};
  char format[] = " %.10d ";
  sprintf(sp, format, LONG_MAX);
  s21_sprintf(s21, format, LONG_MAX);
  ck_assert_str_eq(sp, s21);
}
END_TEST

START_TEST(sprintf_278) {
  char sp[256] = {'\0'};
  char s21[256] = {'\0'};
  char format[] = " %.11d ";
  sprintf(sp, format, LONG_MIN);
  s21_sprintf(s21, format, LONG_MIN);
  ck_assert_str_eq(sp, s21);
}
END_TEST

START_TEST(sprintf_279) {
  char sp[256] = {'\0'};
  char s21[256] = {'\0'};
  char format[] = " %.12d ";
  sprintf(sp, format, UINT_MAX);
  s21_sprintf(s21, format, UINT_MAX);
  ck_assert_str_eq(sp, s21);
}
END_TEST

START_TEST(sprintf_280) {
  char sp[256] = {'\0'};
  char s21[256] = {'\0'};
  char format[] = " %.13ld ";
  sprintf(sp, format, ULONG_MAX);
  s21_sprintf(s21, format, ULONG_MAX);
  ck_assert_str_eq(sp, s21);
}
END_TEST

START_TEST(sprintf_281) {
  char sp[256] = {'\0'};
  char s21[256] = {'\0'};
  char format[] = " %.14d ";
  sprintf(sp, format, 922337);
  s21_sprintf(s21, format, 922337);
  ck_assert_str_eq(sp, s21);
}
END_TEST

START_TEST(sprintf_282) {
  char sp[256] = {'\0'};
  char s21[256] = {'\0'};
  char format[] = " %.8d %.9d %.10d %.11d %.12d %.13d %.14d";
  sprintf(sp, format, INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
  s21_sprintf(s21, format, INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0,
              -42);
  ck_assert_str_eq(sp, s21);
}
END_TEST

START_TEST(sprintf_283) {
  char sp[256] = {'\0'};
  char s21[256] = {'\0'};
  char format[] = " %+d ";
  sprintf(sp, format, 100);
  s21_sprintf(s21, format, 100);
  ck_assert_str_eq(sp, s21);
}
END_TEST

START_TEST(sprintf_284) {
  char sp[256] = {'\0'};
  char s21[256] = {'\0'};
  char format[] = " %+d ";
  sprintf(sp, format, 101);
  s21_sprintf(s21, format, 101);
  ck_assert_str_eq(sp, s21);
}
END_TEST

START_TEST(sprintf_285) {
  char sp[256] = {'\0'};
  char s21[256] = {'\0'};
  char format[] = " %+d ";
  sprintf(sp, format, -9);
  s21_sprintf(s21, format, -9);
  ck_assert_str_eq(sp, s21);
}
END_TEST

START_TEST(sprintf_286) {
  char sp[256] = {'\0'};
  char s21[256] = {'\0'};
  char format[] = " %+d ";
  sprintf(sp, format, -10);
  s21_sprintf(s21, format, -10);
  ck_assert_str_eq(sp, s21);
}
END_TEST

START_TEST(sprintf_287) {
  char sp[256] = {'\0'};
  char s21[256] = {'\0'};
  char format[] = " %+d ";
  sprintf(sp, format, -101);
  s21_sprintf(s21, format, -101);
  ck_assert_str_eq(sp, s21);
}
END_TEST

START_TEST(sprintf_288) {
  char sp[256] = {'\0'};
  char s21[256] = {'\0'};
  char format[] = " %+d ";
  sprintf(sp, format, INT_MAX);
  s21_sprintf(s21, format, INT_MAX);
  ck_assert_str_eq(sp, s21);
}
END_TEST

START_TEST(sprintf_289) {
  char sp[256] = {'\0'};
  char s21[256] = {'\0'};
  char format[] = " %+d ";
  sprintf(sp, format, INT_MIN);
  s21_sprintf(s21, format, INT_MIN);
  ck_assert_str_eq(sp, s21);
}
END_TEST

START_TEST(sprintf_290) {
  char sp[256] = {'\0'};
  char s21[256] = {'\0'};
  char format[] = " %+d %+d %+d %+d %+d %+d %+d";
  sprintf(sp, format, INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
  s21_sprintf(s21, format, INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0,
              -42);
  ck_assert_str_eq(sp, s21);
}
END_TEST

START_TEST(sprintf_291) {
  char sp[256] = {'\0'};
  char s21[256] = {'\0'};
  char format[] = " {% d} {% d} {% d} {% d} {% d} {% d} {% d}";
  sprintf(sp, format, INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
  s21_sprintf(s21, format, INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0,
              -42);
  ck_assert_str_eq(sp, s21);
}
END_TEST

START_TEST(sprintf_292) {
  char sp[256] = {'\0'};
  char s21[256] = {'\0'};
  char format[] = "%d -- %ld";
  sprintf(sp, format, INT_MAX, LONG_MAX);
  s21_sprintf(s21, format, INT_MAX, LONG_MAX);
  ck_assert_str_eq(sp, s21);
}
END_TEST

START_TEST(sprintf_293) {
  char sp[256] = {'\0'};
  char s21[256] = {'\0'};
  char format[] = "%hd -- %hd";
  sprintf(sp, format, INT_MAX, LONG_MAX);
  s21_sprintf(s21, format, INT_MAX, LONG_MAX);
  ck_assert_str_eq(sp, s21);
}
END_TEST

START_TEST(sprintf_294) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "(%-42.21u)\n", (unsigned)123456789);
  sprintf(data1, "(%-42.21u)\n", (unsigned)123456789);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_295) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "(%42.20u)", (unsigned)-123456789);
  sprintf(data1, "(%42.20u)", (unsigned)-123456789);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_296) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  s21_sprintf(data, "(%-14.12u)\n", (unsigned)72);
  sprintf(data1, "(%-14.12u)\n", (unsigned)72);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_297) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  unsigned short int a = 9;
  s21_sprintf(data, "(%hu)\n", a);
  sprintf(data1, "(%hu)\n", a);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_298) {
  char data[100] = {'\0'};
  char data1[100] = {'\0'};
  unsigned long n = 123456;
  s21_sprintf(data, "(%-lu)\n", n);
  sprintf(data1, "(%lu)\n", n);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_299) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "(%.13f)\n", 15.22222222222);
  sprintf(data1, "(%.13f)\n", 15.22222222222);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_300) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "(% -42.21f)\n", 21.123456789);
  sprintf(data1, "(% -42.21f)\n", 21.123456789);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_301) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "(%-+42.18f)\n", 123456789.1234567898);
  sprintf(data1, "(%-+42.18f)\n", 123456789.1234567898);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_302) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "(% -42.30f)\n", -123456789.123456789);
  sprintf(data1, "(% -42.30f)\n", -123456789.123456789);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_303) {
  char data1[100] = {'\0'};
  char data2[100] = {'\0'};
  char format[] = "{(% c)(% c)(%%)(% c)}";
  s21_sprintf(data1, format, 42, '1', 'H');
  sprintf(data2, format, 42, '1', 'H');
  ck_assert_str_eq(data1, data2);
}
END_TEST

START_TEST(sprintf_304) {
  char data1[100] = {'\0'};
  char data2[100] = {'\0'};
  char format[] = "(%-42c) [%21c]";
  s21_sprintf(data1, format, 'C', 99);
  sprintf(data2, format, 'C', 99);
  ck_assert_str_eq(data1, data2);
}
END_TEST

START_TEST(sprintf_305) {
  char data1[100] = {'\0'};
  char data2[100] = {'\0'};
  char format[] = " %c ";
  s21_sprintf(data1, format, 'C');
  sprintf(data2, format, 'C');
  ck_assert_str_eq(data1, data2);
}
END_TEST

START_TEST(sprintf_306) {
  char data1[100] = {'\0'};
  char data2[100] = {'\0'};
  char format[] = " %c";
  s21_sprintf(data1, format, '0' - 256);
  sprintf(data2, format, '0' - 256);
  ck_assert_str_eq(data1, data2);
}
END_TEST

START_TEST(sprintf_307) {
  char sp[100] = {'\0'};
  char my_sp[100] = {'\0'};
  char format[] = "{  %c   %c   %c  }";
  s21_sprintf(my_sp, format, '0', 0, '1');
  sprintf(sp, format, '0', 0, '1');
  ck_assert_str_eq(sp, my_sp);
}
END_TEST

START_TEST(sprintf_308) {
  char data1[100] = {'\0'};
  char data2[100] = {'\0'};
  char format[] = " %c %c %c ";
  s21_sprintf(data1, format, ' ', ' ', ' ');
  sprintf(data2, format, ' ', ' ', ' ');
  ck_assert_str_eq(data1, data2);
}
END_TEST

START_TEST(sprintf_309) {
  char data1[100] = {'\0'};
  char data2[100] = {'\0'};
  char format[] = " %c %c %c ";
  s21_sprintf(data1, format, '1', '2', '3');
  sprintf(data2, format, '1', '2', '3');
  ck_assert_str_eq(data1, data2);
}
END_TEST

START_TEST(sprintf_310) {
  char data1[100] = {'\0'};
  char data2[100] = {'\0'};
  char format[] = "{%%%c%c%c%%}";
  s21_sprintf(data1, format, 0, '1', '2');
  sprintf(data2, format, 0, '1', '2');
  ck_assert_str_eq(data1, data2);
}
END_TEST

START_TEST(sprintf_311) {
  char data[70] = {'\0'};
  char data1[70] = {'\0'};
  char format[] = "(%s)";
  s21_sprintf(data, format, "Hello, sprintf!");
  sprintf(data1, format, "Hello, sprintf!");
  ck_assert_pstr_eq(data, data1);
}
END_TEST

START_TEST(sprintf_312) {
  char sp[256] = {'\0'};
  char s21[256] = {'\0'};
  char format[] = "%s";
  s21_sprintf(s21, format, "");
  sprintf(sp, format, "");
  ck_assert_pstr_eq(sp, s21);
}
END_TEST

START_TEST(sprintf_313) {
  char sp[256] = {'\0'};
  char s21[256] = {'\0'};
  char format[] = "%s ";
  s21_sprintf(s21, format, "");
  sprintf(sp, format, "");
  ck_assert_pstr_eq(sp, s21);
}
END_TEST

START_TEST(sprintf_314) {
  char sp[256] = {'\0'};
  char s21[256] = {'\0'};
  char format[] = " %s ";
  s21_sprintf(s21, format, "");
  sprintf(sp, format, "");
  ck_assert_pstr_eq(sp, s21);
}
END_TEST

START_TEST(sprintf_315) {
  char sp[256] = {'\0'};
  char s21[256] = {'\0'};
  char format[] = " %s %s ";
  s21_sprintf(s21, format, "", "-");
  sprintf(sp, format, "", "-");
  ck_assert_pstr_eq(sp, s21);
}
END_TEST

START_TEST(sprintf_316) {
  char sp[256] = {'\0'};
  char s21[256] = {'\0'};
  char format[] = " %s %s ";
  s21_sprintf(s21, format, "", "-");
  sprintf(sp, format, "", "-");
  ck_assert_pstr_eq(sp, s21);
}
END_TEST

START_TEST(sprintf_317) {
  char sp[256] = {'\0'};
  char s21[256] = {'\0'};
  char format[] = " %s %s ";
  s21_sprintf(s21, format, " - ", "");
  sprintf(sp, format, " - ", "");
  ck_assert_pstr_eq(sp, s21);
}
END_TEST

START_TEST(sprintf_318) {
  char sp[256] = {'\0'};
  char s21[256] = {'\0'};
  char s2[] = "AMOGUS";
  char format[] = " %s %s %s %s %s";
  s21_sprintf(s21, format, " - ", "", "4", "", s2);
  sprintf(sp, format, " - ", "", "4", "", s2);
  ck_assert_pstr_eq(sp, s21);
}
END_TEST

START_TEST(sprintf_319) {
  char sp[256] = {'\0'};
  char s21[256] = {'\0'};
  char format[] = " %s %s %s %s %s ";
  s21_sprintf(s21, format, " - ", "", "4", "", "2 ");
  sprintf(sp, format, " - ", "", "4", "", "2 ");
  ck_assert_pstr_eq(sp, s21);
}
END_TEST

START_TEST(sprintf_320) {
  char sp[256] = {'\0'};
  char s21[256] = {'\0'};
  char format[] = " S21_NULL %s S21_NULL ";
  s21_sprintf(s21, format, S21_NULL);
  sprintf(sp, format, S21_NULL);
  ck_assert_pstr_eq(sp, s21);
}
END_TEST

START_TEST(sprintf_321) {
  char data[1024] = {'\0'};
  char data1[1024] = {'\0'};
  char format[] = "(%.s)";
  s21_sprintf(data, format, "Hello, sprintf!");
  sprintf(data1, format, "Hello, sprintf!");
  ck_assert_pstr_eq(data, data1);
}
END_TEST

START_TEST(sprintf_322) {
  char data[1024] = {'\0'};
  char data1[1024] = {'\0'};
  char format[] = "(%.5s)";
  s21_sprintf(data, format, "Hello, sprintf!");
  sprintf(data1, format, "Hello, sprintf!");
  ck_assert_pstr_eq(data, data1);
}
END_TEST

START_TEST(sprintf_323) {
  char data[1024] = {'\0'};
  char data1[1024] = {'\0'};
  char format[] = "(%1.0s)";
  s21_sprintf(data, format, "Hello, sprintf!");
  sprintf(data1, format, "Hello, sprintf!");
  ck_assert_pstr_eq(data, data1);
}
END_TEST

START_TEST(sprintf_324) {
  char data[1024] = {'\0'};
  char data1[1024] = {'\0'};
  char format[] = "(%150.15s)";
  s21_sprintf(data, format, "Hello, sprintf!");
  sprintf(data1, format, "Hello, sprintf!");
  ck_assert_pstr_eq(data, data1);
}
END_TEST

START_TEST(sprintf_325) {
  char data[1024] = {'\0'};
  char data1[1024] = {'\0'};
  char format[] = "(%-.6s)";
  s21_sprintf(data, format, "Hello, sprintf!");
  sprintf(data1, format, "Hello, sprintf!");
  ck_assert_pstr_eq(data, data1);
}
END_TEST

START_TEST(sprintf_326) {
  char data[1024] = {'\0'};
  char data1[1024] = {'\0'};
  char format[] = "(%-100.100s)";
  s21_sprintf(data, format, "Hello, sprintf!");
  sprintf(data1, format, "Hello, sprintf!");
  ck_assert_pstr_eq(data, data1);
}
END_TEST

START_TEST(sprintf_327) {
  char data[1024] = {'\0'};
  char data1[1024] = {'\0'};
  char format[] = "(%11.11s) %.5s %10s";
  s21_sprintf(data, format, "Hello, sprintf!", "000", "\0");
  sprintf(data1, format, "Hello, sprintf!", "000", "\0");
  ck_assert_pstr_eq(data, data1);
}
END_TEST

START_TEST(sprintf_328) {
  char sp[256] = {'\0'};
  char s21[256] = {'\0'};
  char format[] = "%.s";
  s21_sprintf(s21, format, "");
  sprintf(sp, format, "");
  ck_assert_pstr_eq(sp, s21);
}
END_TEST

START_TEST(sprintf_329) {
  char sp[256] = {'\0'};
  char s21[256] = {'\0'};
  char format[] = " %.1s";
  s21_sprintf(s21, format, "");
  sprintf(sp, format, "");
  ck_assert_pstr_eq(sp, s21);
}
END_TEST

START_TEST(sprintf_330) {
  char sp[256] = {'\0'};
  char s21[256] = {'\0'};
  char format[] = "%.1s ";
  s21_sprintf(s21, format, "");
  sprintf(sp, format, "");
  ck_assert_pstr_eq(sp, s21);
}
END_TEST

START_TEST(sprintf_331) {
  char sp[256] = {'\0'};
  char s21[256] = {'\0'};
  char format[] = " %.s ";
  s21_sprintf(s21, format, "");
  sprintf(sp, format, "");
  ck_assert_pstr_eq(sp, s21);
}
END_TEST

START_TEST(sprintf_332) {
  char sp[256] = {'\0'};
  char s21[256] = {'\0'};
  char format[] = " %.s ";
  s21_sprintf(s21, format, "-");
  sprintf(sp, format, "-");
  ck_assert_pstr_eq(sp, s21);
}
END_TEST

START_TEST(sprintf_333) {
  char sp[256] = {'\0'};
  char s21[256] = {'\0'};
  char format[] = " %.2s %.1s ";
  s21_sprintf(s21, format, "", "-");
  sprintf(sp, format, "", "-");
  ck_assert_pstr_eq(sp, s21);
}
END_TEST

START_TEST(sprintf_334) {
  char sp[256] = {'\0'};
  char s21[256] = {'\0'};
  char format[] = " %.3s %.2s ";
  s21_sprintf(s21, format, " - ", "");
  sprintf(sp, format, " - ", "");
  ck_assert_pstr_eq(sp, s21);
}
END_TEST

START_TEST(sprintf_335) {
  char sp[256] = {'\0'};
  char s21[256] = {'\0'};
  char format[] = " %.1s %.2s %.3s %.4s ";
  s21_sprintf(s21, format, " - ", "", "4", "");
  sprintf(sp, format, " - ", "", "4", "");
  ck_assert_pstr_eq(sp, s21);
}
END_TEST

START_TEST(sprintf_336) {
  char sp[256] = {'\0'};
  char s21[256] = {'\0'};
  char format[] = " % 10.2s % 23.3s % 3.4s % 44.5s % .1s ";
  s21_sprintf(s21, format, " - ", "", "4", "", "2 ");
  sprintf(sp, format, " - ", "", "4", "", "2 ");
  ck_assert_pstr_eq(sp, s21);
}
END_TEST

START_TEST(sprintf_337) {
  char sp[256] = {'\0'};
  char s21[256] = {'\0'};
  char format[] = "%s";
  s21_sprintf(s21, format, "Чебурек");
  sprintf(sp, format, "Чебурек");
  ck_assert_pstr_eq(sp, s21);
}
END_TEST

START_TEST(sprintf_339) {
  char sp[256] = {'\0'};
  char s21[256] = {'\0'};
  char format[] = "%c %c %c";
  s21_sprintf(s21, format, ' ', '#', '@');
  sprintf(sp, format, ' ', '#', '@');
  ck_assert_pstr_eq(sp, s21);
}
END_TEST

START_TEST(sprintf_340) {
  char sp[256] = {'\0'};
  char s21[256] = {'\0'};
  long int n = 3;
  char format[] = "%ld%.5d  % d   %+d %d%-2.d";
  s21_sprintf(s21, format, n, -2, 3, 2, 46, 4, -53, 9);
  sprintf(sp, format, n, -2, 3, 2, 46, 4, -53, 9);
  ck_assert_pstr_eq(sp, s21);
}
END_TEST

START_TEST(sprintf_341) {
  char sp[256] = {'\0'};
  char s21[256] = {'\0'};
  short int n = 11;
  char format[] = "%hi %.5i %i";
  s21_sprintf(s21, format, n, -46, 57);
  sprintf(sp, format, n, -46, 57);
  ck_assert_pstr_eq(sp, s21);
}
END_TEST

START_TEST(sprintf_342) {
  char sp[256] = {'\0'};
  char s21[256] = {'\0'};
  char format[] = "%d %.s %.3s %s";
  s21_sprintf(s21, format, -2, "Hello", " world", "!");
  sprintf(sp, format, -2, "Hello", " world", "!");
  ck_assert_pstr_eq(sp, s21);
}
END_TEST

START_TEST(sprintf_343) {
  char sp[256] = {'\0'};
  char s21[256] = {'\0'};
  unsigned short n = 2;
  unsigned long m = 33;
  char format[] = "%hi %.5i %i";
  s21_sprintf(s21, format, n, m, (unsigned)58432322);
  sprintf(sp, format, n, m, (unsigned)58432322);
  ck_assert_pstr_eq(sp, s21);
}
END_TEST

START_TEST(sprintf_344) {
  char buffer1[100] = {'\0'};
  char buffer2[100] = {'\0'};
  sprintf(buffer1, "%s", "Xenon");
  s21_sprintf(buffer2, "%s", "Xenon");
  ck_assert_str_eq(buffer1, buffer2);
}
END_TEST

START_TEST(sprintf_345) {
  char buffer1[100] = {'\0'};
  char buffer2[100] = {'\0'};
  sprintf(buffer1, "%.10d%%\n", 4);
  s21_sprintf(buffer2, "%.10d%%\n", 4);
  ck_assert_str_eq(buffer1, buffer2);
}
END_TEST

START_TEST(sprintf_346) {
  long unsigned key_l = 421;
  char buffer1[100] = {'\0'};
  char buffer2[100] = {'\0'};
  sprintf(buffer1, "%-10lu%%\n", key_l);
  s21_sprintf(buffer2, "%-10lu%%\n", key_l);
  ck_assert_str_eq(buffer1, buffer2);
}
END_TEST

START_TEST(sprintf_347) {
  char buffer1[100] = {'\0'};
  char buffer2[100] = {'\0'};
  short unsigned key_h = 421;
  sprintf(buffer1, "%-10hu%%\n", key_h);
  s21_sprintf(buffer2, "%-10hu%%\n", key_h);
  ck_assert_str_eq(buffer1, buffer2);
}
END_TEST

START_TEST(sprintf_348) {
  char buffer1[100] = {'\0'};
  char buffer2[100] = {'\0'};
  sprintf(buffer1, "%-10u%%\n", (unsigned)421);
  s21_sprintf(buffer2, "%-10u%%\n", (unsigned)421);
  ck_assert_str_eq(buffer1, buffer2);
}
END_TEST

START_TEST(sprintf_350) {
  char buffer1[100] = {'\0'};
  char buffer2[100] = {'\0'};
  short var_short = 123;
  sprintf(buffer1, "%hd%%\n", var_short);
  s21_sprintf(buffer2, "%hd%%\n", var_short);
  ck_assert_str_eq(buffer1, buffer2);
}
END_TEST

START_TEST(sprintf_351) {
  char buffer1[100] = {'\0'};
  char buffer2[100] = {'\0'};
  sprintf(buffer1, "%+10d%%\n", -4);
  s21_sprintf(buffer2, "%+10d%%\n", -4);
  ck_assert_str_eq(buffer1, buffer2);
}
END_TEST

START_TEST(sprintf_352) {
  char buffer1[100] = {'\0'};
  char buffer2[100] = {'\0'};
  sprintf(buffer1, "%-+10d%%\n", 4);
  s21_sprintf(buffer2, "%-+10d%%\n", 4);
  ck_assert_str_eq(buffer1, buffer2);
}
END_TEST

START_TEST(sprintf_353) {
  char buffer1[100] = {'\0'};
  char buffer2[100] = {'\0'};
  sprintf(buffer1, "%+f %+f", -200000.4, 2000.231);
  s21_sprintf(buffer2, "%+f %+f", -200000.4, 2000.231);
  ck_assert_str_eq(buffer1, buffer2);
}
END_TEST

START_TEST(sprintf_355) {
  char data1[100] = {'\0'};
  char data2[100] = {'\0'};
  s21_sprintf(data1, "(%%)");
  sprintf(data2, "(%%)");
  ck_assert_str_eq(data1, data2);
}
END_TEST

START_TEST(sprintf_356) {
  char data1[100] = {'\0'};
  char data2[100] = {'\0'};
  s21_sprintf(data1, "(%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%)");
  sprintf(data2, "(%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%)");
  ck_assert_str_eq(data1, data2);
}
END_TEST

START_TEST(sprintf_357) {
  char data1[100] = {'\0'};
  char data2[100] = {'\0'};
  s21_sprintf(data1, "(School %% 21 %% TESTER %%%% LOL %%)");
  sprintf(data2, "(School %% 21 %% TESTER %%%% LOL %%)");
  ck_assert_str_eq(data1, data2);
}
END_TEST

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
// START_TEST(test_strtok_null_string) {
//   const char delimiters[] = ",";
//   char *token_s21 = s21_strtok(NULL, delimiters);
//   char *token_orig = strtok(NULL, delimiters);

//   ck_assert_ptr_eq(token_s21, token_orig);
// }
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

// strerror

START_TEST(test_s21_strerror) {
  int validErrorCode = 20;
  char *validErrorMessage = s21_strerror(validErrorCode);
  char *validErrorMessageOriginal = strerror(validErrorCode);
  ck_assert_str_eq(validErrorMessage, validErrorMessageOriginal);
  int unknownErrorCode = -1;
  char *unknownErrorMessage = s21_strerror(unknownErrorCode);
  char *unknownErrorMessageOriginal = strerror(unknownErrorCode);
  ck_assert_str_eq(unknownErrorMessage, unknownErrorMessageOriginal);
}
END_TEST

// to_upper

START_TEST(test_to_upper) {
  char *str = "Hello World";
  char *result = s21_to_upper(str);
  ck_assert_str_eq(result, "HELLO WORLD");
  free(result);
}
END_TEST

// to_lower

START_TEST(test_to_lower) {
  char *str = "Hello World";
  char *result = s21_to_lower(str);
  ck_assert_str_eq(result, "hello world");
  free(result);
}
END_TEST

// insert

START_TEST(test_insert) {
  char *src = "Hello World";
  char *str = ", Beautiful";
  char *result = s21_insert(src, str, 5);
  ck_assert_str_eq(result, "Hello, Beautiful World");
  free(result);
}
END_TEST

START_TEST(test_insert_start_index_out_of_range) {
  char *src = "Hello World";
  char *str = ", Beautiful";
  char *result =
      s21_insert(src, str, 50);  // start_index is greater than length of src
  ck_assert_ptr_eq(result, NULL);
}
END_TEST

// trim

START_TEST(test_trim_spaces) {
  char *src = "  Hello World ";
  char *result = s21_trim(src, " ");
  ck_assert_str_eq(result, "Hello World");
  free(result);
}
END_TEST

START_TEST(test_trim_no_chars_to_trim) {
  char *src = "Hello World";
  char *result = s21_trim(src, "");
  ck_assert_str_eq(result, "Hello World");
  free(result);
}
END_TEST

START_TEST(test_trim_all_chars_to_trim) {
  char *src = "   ";
  char *result = s21_trim(src, " ");
  ck_assert_str_eq(result, "");
  free(result);
}
END_TEST

START_TEST(test_trim_empty_string) {
  char *src = "";
  char *result = s21_trim(src, " ");
  ck_assert_str_eq(result, "");
  free(result);
}
END_TEST

START_TEST(test_trim_point) {
  char *src = "............Hello World.";
  char *result = s21_trim(src, ".");
  ck_assert_str_eq(result, "Hello World");
  free(result);
}
END_TEST

Suite *str_suite(void) {
  Suite *s;
  TCase *tc_strlen, *tc_strncpy, *tc_strncat, *tc_strstr, *tc_strncmp,
      *tc_strcspn, *tc_strbrk, *tc_strchr, *tc_strrchr, *tc_memchr, *tc_memcpy,
      *tc_memcmp, *tc_memset, *tc_strtok, *tc_sprintf, *tc_strerror,
      *tc_to_lower, *tc_to_upper, *tc_insert, *tc_trim;

  s = suite_create("String");

  tc_to_lower = tcase_create("to_lower");
  tcase_add_test(tc_to_lower, test_to_lower);

  tc_to_upper = tcase_create("to_upper");
  tcase_add_test(tc_to_upper, test_to_upper);

  tc_insert = tcase_create("insert");
  tcase_add_test(tc_insert, test_insert);
  tcase_add_test(tc_insert, test_insert_start_index_out_of_range);

  tc_trim = tcase_create("trim");
  tcase_add_test(tc_trim, test_trim_spaces);
  tcase_add_test(tc_trim, test_trim_no_chars_to_trim);
  tcase_add_test(tc_trim, test_trim_all_chars_to_trim);
  tcase_add_test(tc_trim, test_trim_empty_string);
  tcase_add_test(tc_trim, test_trim_point);

  suite_add_tcase(s, tc_to_lower);
  suite_add_tcase(s, tc_to_upper);
  suite_add_tcase(s, tc_insert);
  suite_add_tcase(s, tc_trim);

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
  tcase_add_test(tc_sprintf, sprintf_016);
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
  tcase_add_test(tc_sprintf, sprintf_239);
  tcase_add_test(tc_sprintf, sprintf_240);
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
  tcase_add_test(tc_sprintf, sprintf_361);
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
  // tcase_add_test(tc_strtok, test_strtok_null_string);
  tcase_add_test(tc_strtok, test_strtok_basic);
  suite_add_tcase(s, tc_strtok);

  // strerror
  tc_strerror = tcase_create("s21_strerror");
  tcase_add_test(tc_strerror, test_s21_strerror);
  suite_add_tcase(s, tc_strerror);

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