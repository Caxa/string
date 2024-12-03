#ifndef S21_H
#define S21_H

#include <stddef.h>

char* s21_strstr(const char* haystack, const char* needle);
char* s21_strrchr(const char* s, int c);
size_t s21_strcspn(const char* s1, const char* s2);
void* s21_memchr(const void* s, int c, size_t n);
void* s21_memset(void* s, int c, size_t n);
char* s21_strchr(const char* s, int c);

#endif // S21_H
