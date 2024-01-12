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


Suite *str_suite(void) {
  Suite *s;
  TCase *tc_strlen, *tc_strncpy, *tc_strncat, *tc_strstr, *tc_strncmp, *tc_strbrk;

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

  suite_add_tcase(s, tc_strstr);

  // strncmp
  tc_strncmp = tcase_create("s21_strncmp");
  tcase_add_test(tc_strncmp, test_strncmp_empty);
  tcase_add_test(tc_strncmp, test_strncmp_0);
  tcase_add_test(tc_strncmp, test_strncmp_first_long);
  tcase_add_test(tc_strncmp, test_strncmp_second_long);
  suite_add_tcase(s, tc_strncmp);

  //strbrk
  tc_strbrk = tcase_create("s21_strbrk");
  tcase_add_test(tc_strncpy, test_strpbrk_empty);
  tcase_add_test(tc_strncpy, test_strpbrk_first_match);
  tcase_add_test(tc_strncpy, test_strpbrk_no_match);
  tcase_add_test(tc_strncpy, test_strpbrk_multiple_matches);
  suite_add_tcase(s, tc_strbrk);

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
