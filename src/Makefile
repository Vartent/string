CC=gcc
CFLAGS= -Wall -Wextra -Werror -std=c11 -pedantic 
OBJ= s21_memchr.o s21_memcmp.o s21_memcpy.o s21_memset.o s21_strchr.o s21_strlen.o s21_strncat.o s21_strncmp.o s21_strncpy.o s21_strpbrk.o s21_strrchr.o s21_strstr.o s21_strtok.o

all: s21_string.a test 

s21_string.a: $(OBJ)
	ar rcs s21_string.a $(OBJ)
	rm -rf ./*.o

test: 
	$(CC) $(CFLAGS) -g test.c s21_*.c -o test $(LIBS)

gcov_report:
	$(CC) $(CFLAGS) *.c --coverage -o test $(LIBS)
	./test
	gcov *.c
	lcov -t "test" -o result.info -c -d .
	genhtml -o ./report result.info
	open ./report/index.html
	rm -rf *.gcda *.gcno *.gcov
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