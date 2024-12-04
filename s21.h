#ifndef S21_H
#define S21_H

#include <stddef.h>

char* s21_strstr(char* str1, char* str2);
char* s21_strrchr(char* str1, char str2);
int s21_strcspn(const char* str1, const char* str2);
void* s21_memchr(const void* s, int c, size_t n);
void* s21_memset(void* s, int c, size_t n);
char* s21_strchr(const char* s, int c);

#endif // S21_H
