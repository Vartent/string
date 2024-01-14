#include "s21_string.h"

char *s21_strrchr(const char *str, int targetChar) {
  char *lastOccurrence;
  char searchChar;

  searchChar = targetChar;

  for (lastOccurrence = S21_NULL;; str++) {
    if (*str == searchChar) {
      lastOccurrence = (char *)str;
    }

    if (*str == '\0') {
      return lastOccurrence;
    }
  }
}
