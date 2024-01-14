#ifndef _S21_STRING_H_
#define _S21_STRING_H_

#include <stdio.h>
#include <stdlib.h>

#ifndef _S21_SIZE_T
#define s21_size_t unsigned long long
#endif

#ifndef S21_NULL
#define S21_NULL (void *)0
#endif

// void *s21_memchr(const void *str, int c, s21_size_t n);
// int s21_memcmp(const void *str1, const void *str2, s21_size_t n);
// void *s21_memcpy(void *dest, const void *src, s21_size_t n);
// void *s21_memset(void *str, int c, s21_size_t n);
char *s21_strncat(char *dest, const char *source, s21_size_t n);
char *s21_strchr(const char *str, int targetChar);
char *s21_strrchr(const char *str, int targetChar);
int s21_strncmp(const char *str1, const char *str2, s21_size_t n);
char *s21_strncpy(char *dest, const char *src, s21_size_t n);
s21_size_t s21_strcspn(const char *str1, const char *str2);
// char *s21_strerror(int errnum);
s21_size_t s21_strlen(const char *str);
char *s21_strpbrk(const char *str1, const char *str2);
char *s21_strstr(char *haystack, char *needle);
// char *s21_strtok(char *str, const char *delim);
// int s21_sscanf(const char *str, const char *format, ...);
// int s21_sprintf(char *str, const char *format, ...);

#endif