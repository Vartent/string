#include <check.h>
#include <string.h>

#include "s21_string.h"

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

Suite *str_suite(void) {
  Suite *s;
  TCase *tc_strlen, *tc_strncpy, *tc_strncat, *tc_strstr, *tc_strncmp,
      *tc_strcspn, *tc_strbrk, *tc_memchr, *tc_memcpy, *tc_memcmp, *tc_memset;

  s = suite_create("String");

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
