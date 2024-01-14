#include "s21_string.h"

char *s21_strstr(char *haystack, char *needle) {
  char *a, *b;
  if (haystack == S21_NULL || needle == S21_NULL) {
    return S21_NULL;
  }
  b = needle;
  if (*b == 0) {
    return haystack;
  }
  for (; *haystack != 0; haystack += 1) {
    if (*haystack != *b) {
      continue;
    }
    a = haystack;
    while (1) {
      if (*b == 0) {
        return haystack;
      }
      if (*a++ != *b++) {
        break;
      }
    }
    b = needle;
  }
  return S21_NULL;
}
