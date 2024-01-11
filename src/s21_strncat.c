#include "s21_string.h"

char *s21_strncat(char *dest, const char *source, s21_size_t n) {
  s21_size_t destLength = s21_strlen(dest);
  s21_size_t sourceLength = s21_strlen(source);

  if (sourceLength < n) {
    s21_strncpy(&dest[destLength], source, n);
  } else {
    s21_strncpy(&dest[destLength], source, n);
    dest[destLength + n] = '\0';
  }
  return dest;
}