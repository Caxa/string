#include <stdio.h>
#include "s21.h"

int main() {
    // Example usage
    printf("s21_strstr(\"hello world\", \"world\"): %s\n", s21_strstr("hello world", "world"));
    printf("s21_strrchr(\"hello world\", 'o'): %s\n", s21_strrchr("hello world", 'o'));
    printf("s21_strcspn(\"hello world\", \"ow\"): %zu\n", s21_strcspn("hello world", "ow"));
    printf("s21_memchr(\"abcdef\", 'c', 6): %s\n", (char*)s21_memchr("abcdef", 'c', 6));
    char buffer[10] = "abcdef";
    printf("s21_memset(\"abcdef\", 'x', 3): %s\n", (char*)s21_memset(buffer, 'x', 3));
    printf("s21_strchr(\"hello\", 'e'): %s\n", s21_strchr("hello", 'e'));

    return 0;
}
