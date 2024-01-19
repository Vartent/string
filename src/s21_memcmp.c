#include "s21_string.h"

int s21_memcmp(const void *str1, const void *str2, s21_size_t n) {
  const unsigned char *str_1 = str1;
  const unsigned char *str_2 = str2;
  int res = 0;
  while (n > 0) {
    if (*str_1 != *str_2) {
      res = *str_1 - *str_2;
      break;
    }
    str_1++;
    str_2++;
    n--;
  }
  return res;
}