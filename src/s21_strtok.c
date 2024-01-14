#include "s21_string.h"

char *s21_strtok(char *str, const char *delim) {
  static char *previousToken = S21_NULL;
  char *currentToken = S21_NULL;

  if (str == S21_NULL && (str = previousToken) == S21_NULL) {
    return S21_NULL;
  }

  while (*str != '\0' && s21_strchr(delim, *str) != S21_NULL) {
    str++;
  }

  if (*str == '\0') {
    previousToken = S21_NULL;
  } else {
    currentToken = str;

    while (*str != '\0' && s21_strchr(delim, *str) == S21_NULL) {
      str++;
    }

    if (*str != '\0') {
      *str = '\0';
      previousToken = str + 1;
    } else {
      previousToken = S21_NULL;
    }
  }

  return currentToken;
}
