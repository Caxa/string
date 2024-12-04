CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c11

SOURCES = s21.c test_s21.c main.c

all: s21_tests

s21_tests: $(SOURCES) 
	$(CC) $(CFLAGS) -o s21_tests $(SOURCES)

# Запуск тестов
test: s21_tests
	@./s21_tests

clean:
	rm -f s21_tests
