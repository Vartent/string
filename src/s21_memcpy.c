#include "s21_string.h"

void *s21_memcpy(void *dest, const void *src, s21_size_t n) {
  char *src_1 = (char *)src;
  char *dest_1 = (char *)dest;
  for (s21_size_t i = 0; i < n; i++) dest_1[i] = src_1[i];

  return dest;
}