#include "s21_string.h"

int s21_strncmp(const char *str1, const char *str2, s21_size_t n) {
  while (*str1 == *str2 && n > 0) {
    str1++;
    str2++;
    n--;
  }
  int result = *str1 - *str2;
  return (n == 0) ? 0 : result;
}