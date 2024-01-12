#include "s21_string.h"

s21_size_t s21_strcspn(const char *str1, const char *str2) {
  const char *p = str1;
  const char *spanp = str2;
  s21_size_t count = 0;

  if (str1 != S21_NULL && str2 != S21_NULL) {
    while (*p != '\0') {
        spanp = str2;
        while (*spanp != '\0') {
            if (*p == *spanp)
                return count;
            spanp++;
        }
        p++;
        count++;
    }
  }
  return count;
}

