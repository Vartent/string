#include "s21_string.h"
void *s21_insert(const char *src, const char *str, size_t start_index) {
  if (start_index > s21_strlen(src)) {
    return S21_NULL;
  }
  char *new_str = malloc(s21_strlen(src) + s21_strlen(str) + 1);
  if (new_str != S21_NULL) {
    s21_strncpy(new_str, src, start_index);
    s21_strncpy(new_str + start_index, str, s21_strlen(str));
    s21_strncpy(new_str + start_index + s21_strlen(str), src + start_index,
                s21_strlen(src + start_index));
  }
  return new_str;
}