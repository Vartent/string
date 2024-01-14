#include "s21_string.h"

char *s21_strchr(const char *str, int targetChar) {
  char tmpChar;

  tmpChar = targetChar;

  for (;; ++str) {
    if (*str == tmpChar) {
      return ((char *)str);
    }

    if (*str == '\0') {
      return (S21_NULL);
    }
  }
}
