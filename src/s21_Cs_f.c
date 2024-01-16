#include <string.h>

#include "s21_string.h"

void *to_upper(const char *str) {
  s21_size_t len = strlen(str);
  char *result = (char *)calloc(len + 1, sizeof(char));
  if (result != S21_NULL) {
    for (s21_size_t i = 0; i < len; i++) {
      if (str[i] >= 'a' && str[i] <= 'z') {
        result[i] = str[i] - 32;
      } else {
        result[i] = str[i];
      }
    }
  }
  return result;
}

void *to_lower(const char *str) {
  s21_size_t len = strlen(str);
  char *result = (char *)calloc(len + 1, sizeof(char));
  if (result != S21_NULL) {
    for (s21_size_t i = 0; i < len; i++) {
      if (str[i] >= 'A' && str[i] <= 'Z') {
        result[i] = str[i] + 32;
      } else {
        result[i] = str[i];
      }
    }
  }
  return result;
}

int main() {
  const char *str = "qwertyuiopasdfghjklzxcvbnm";
  const char *str1 = "QWERTYUIOPASDFGHJKLZXCVBNM";
  char *upper_str = to_upper(str);
  char *lowe_str = to_lower(str1);
  printf("%s\n", upper_str);
  printf("%s\n", lowe_str);
  free(upper_str);
  free(lowe_str);
  return 0;
}