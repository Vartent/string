#include "s21_string.h"

char *s21_strncpy(char *dest, const char *src, s21_size_t n) {
  char *start = dest;
  if (dest == S21_NULL || src == S21_NULL) {
    return S21_NULL;
  }
  while (*src != '\0' && n > 0) {
    *dest = *src;
    dest++;
    src++;
    n--;
  }
  while (n > 0) {
    *dest = '\0';
    dest++;
    n--;
  }
  return start;
}
