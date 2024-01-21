#include <stdio.h>
#include <string.h>

int main() {
  char sp[256] = {"example"};
  char s21[256];
  char format[] = "%-10.5s";
  //   sprintf(sp, format, 1);
  sprintf(s21, format, sp);
  printf(s21);
}
