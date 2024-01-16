#include <string.h>

#include "s21_string.h"

void *to_upper(const char *str) {
  s21_size_t len = s21_strlen(str);
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
  s21_size_t len = s21_strlen(str);
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

void *insert(const char *src, const char *str, size_t start_index) {
    if (start_index > s21_strlen(src)) {
        return S21_NULL;
    }
    char *new_str = malloc(s21_strlen(src) + s21_strlen(str) + 1);
    // if (!new_str) {
    //     return S21_NULL;
    // }
    s21_strncpy(new_str, src, start_index);
    s21_strncpy(new_str + start_index, str, s21_strlen(str));
    s21_strncpy(new_str + start_index + s21_strlen(str), src + start_index, s21_strlen(src + start_index));
    return new_str;
}

// int main() {
//   const char *str = "qwertyuiopasdfghjklzxcvbnm";
//   const char *str1 = "QWERTYUIOPASDFGHJKLZXCVBNM";
//   char *upper_str = to_upper(str);
//   char *lowe_str = to_lower(str1);
//   char *inserted = insert(str, str1, 5);
//   printf("%s\n", upper_str);
//   printf("%s\n", lowe_str);
//   printf("%s\n", inserted);
//   free(upper_str);
//   free(lowe_str);
//   return 0;
// }