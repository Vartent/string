CC=gcc
CFLAGS=-Wall -Werror -Wextra
DEPS=s21_string.a
OBJ= s21_strlen.o s21_strncpy.o s21_strncat.o s21_strstr.o s21_strncmp.o s21_strpbrk.o s21_strchr.o s21_strrchr.o s21_memchr.c s21_memcmp.c s21_memcpy.c s21_memset.c s21_strtok.o
LIBS=-lcheck -lm -lpthread
GCOV=gcov
LCOV=lcov
GENHTML=genhtml

all: test $(DEPS)

%.o: %.c %.h
	$(CC) -c -o $@ $< $(CFLAGS)

all: $(DEPS)

$(DEPS): $(OBJ)
	ar rcs $(DEPS) $(OBJ)

test: $(DEPS)
	$(CC) $(CFLAGS) -g test.c s21_*.c -o test -std=c11 $(LIBS)

gcov_report: $(DEPS)
	$(CC) $(CFLAGS) *.c --coverage -o test -std=c11 $(LIBS)
	./test
	$(GCOV) *.c
	$(LCOV) -t "test" -o result.info -c -d .
	$(GENHTML) -o ./report result.info
	open ./report/index.html

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