#include "s21_string.h"

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
  int i = s21_strlen(src) - 1;
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

void *s21_trim(const char *src, const char *trim_chars) {
  int start_index = find_start_index(src, trim_chars);
  int end_index = find_end_index(src, trim_chars);
  char *result = (char *)calloc(end_index - start_index, sizeof(char));
  if (result != S21_NULL) {
    s21_strncpy(result, src + start_index, end_index - start_index + 1);
  }
  return result;
}