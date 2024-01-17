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
  s21_strncpy(new_str + start_index + s21_strlen(str), src + start_index,
              s21_strlen(src + start_index));
  return new_str;
}

int find_start_index(const char *src, const char *trim_chars) {
  int index = -1;
  if (trim_chars == S21_NULL) trim_chars = " ";
  for (int i = 0; src[i] != 0; i++) {
    int match = 0;
    for (int j = 0; trim_chars[j]; j++) {
      if (src[i] == trim_chars[j]) match = 1;
    }
    if (match != 1) {
      index = i;
      break;
    }
  }
  return index;
}

int find_end_index(const char *src, const char *trim_chars) {
  int index = -1;
  int i = strlen(src) - 1;
  if (trim_chars == S21_NULL) trim_chars = " ";
  for (; i >= 0; i--) {
    int match = 0;
    for (int j = 0; trim_chars[j]; j++) {
      if (src[i] == trim_chars[j]) match = 1;
    }
    if (match != 1) {
      index = i;
      break;
    }
  }
  return index;
}

void *trim(const char *src, const char *trim_chars) {
  int start_index = find_start_index(src, trim_chars);
  int end_index = find_end_index(src, trim_chars);
  char *result = (char *)calloc(end_index - start_index, sizeof(char));
  if (result != S21_NULL) {
    s21_strncpy(result, src + start_index, end_index - start_index + 1);
  }
  return result;
}