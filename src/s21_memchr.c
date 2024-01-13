#include "s21_string.h"

void *s21_memchr(const void *str, int c, s21_size_t n) {
  const unsigned char *s = (const unsigned char *)str;
  void *res = S21_NULL;
  while (n--) {
    if (*s == c) {
      res = (void *)s;
      break;
    }
    s++;
  }
  return res;
}