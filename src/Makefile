CC=gcc
CFLAGS=-Wall -Werror -Wextra
DEPS=s21_string.a
OBJ=test.o s21_strlen.o s21_strncpy.o s21_strcat.o s21_strstr.o
LIBS=-lcheck -lm -lpthread
GCOV=gcov
LCOV=lcov
GENHTML=genhtml

all: test s21_string.a

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)

s21_strncat.o: s21_strncat.c s21_string.h
	$(CC) -c -o $@ $< $(CFLAGS)

all: s21_string.a

s21_string.a: s21_strlen.o s21_strncpy.o s21_strncat.o s21_strstr.o
	ar rcs s21_string.a s21_strlen.o s21_strncpy.o s21_strcat.o s21_strstr.o

s21_strlen.o:
	$(CC) -c $(CFLAGS) s21_strlen.c -o s21_strlen.o -std=c11

s21_strncpy.o:
	$(CC) -c $(CFLAGS) s21_strncpy.c -o s21_strncpy.o -std=c11

s21_strncat.o:
	$(CC) -c $(CFLAGS) s21_strncat.c -o s21_strcat.o -std=c11

s21_strstr.o:
	$(CC) -c $(CFLAGS) s21_strstr.c -o s21_strstr.o -std=c11

test: s21_string.a
	$(CC) $(CFLAGS) -g test.c s21_*.c -o test -std=c11 $(LIBS)

gcov_report: s21_string.a
	$(CC) $(CFLAGS) *.c --coverage -o test -std=c11 $(LIBS)
	./test
	$(GCOV) *.c
	$(LCOV) -t "test" -o result.info -c -d .
	$(GENHTML) -o ./report result.info

lcov:
	brew install lcov

clean:
	rm -rf *.a *.o *.gcda *.gcno *.gcov *.info test report test.dSYM

style:
	clang-format --style=Google -i *.c *.h

rebuild: clean all

everything:
	make rebuild
	make test
	make gcov_report
