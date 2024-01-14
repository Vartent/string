#include "s21_string.h"

char *s21_strpbrk(const char *str1, const char *str2) {
  char *res = S21_NULL;
  if (str1 != S21_NULL && str2 != S21_NULL) {
    while (*str1) {
      if (s21_strchr(str2, *str1)) {
        res = (char *)str1;
        break;
      }
      str1++;
    }
  }
  return res;
}
