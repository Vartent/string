#ifndef _S21_SPRINTF_
#define _S21_SPRINTF_

#include "math.h"
#include "s21_string.h"

struct flag_type {
  int plus;
  int minus;
  int space;
  int is_short;
  int is_long;
  int precision;
  int width;
};

typedef struct flag_type flag_t;

void reset_flags(flag_t* flags);
char* print_char(char* str, flag_t* flags, char type, va_list* input);
char* print_string(char* str, flag_t* flags, va_list* input);
char* print_number(char* str, flag_t* flags, char type, va_list* input);
void itostr(char* str, long long int num, flag_t* flags);
void ftostr(char* str, double num, flag_t* flags);
void uitostr(char* str, unsigned long num, flag_t* flags);

#endif
