#include "s21.h"
#include <stddef.h>


// s21_strstr
char* s21_strstr(char* str1, char* str2) {
  if (str1 != NULL && str2 != NULL) {
    if (*str2 == '\0') return str1;

    while (*str1) {
      if (*str1 == *str2) {
        char* start = str1;
        char* sub = str2;

        while (*start && *sub && (*start == *sub)) {
          ++start;
          ++sub;
        }

        if (*sub == '\0') return str1;
      }
      ++str1;
    }
  }
  return NULL;
}

// s21_strrchr
char* s21_strrchr(char* str1, char str2) {
  char* last = NULL;
  if (str1 != NULL) {
    while (*str1) {
      if (*str1 == str2) {
        last = str1;
      }
      str1++;
    }
  }
  if (str2 == '\0') return (char*)str1;

  return last;
}

// s21_strcspn
int s21_strcspn(const char* str1, const char* str2) {
  int count = 0;
  if (str1 && str2) {
    while (*str1) {
      const char* temp = str2;
      while (*temp) {
        if (*str1 == *temp) {
          return count;
        }
        temp++;
      }
      str1++;
      count++;
    }
  }
  return count;
}



// s21_memchr
void* s21_memchr(const void* s, int c, size_t n) {
    const unsigned char* p = (const unsigned char*)s; 
    for (size_t i = 0; i < n; i++) {
        if (p[i] == (unsigned char)c) {
            return (void*)(p + i); 
        }
    }
    return NULL; 
}

// s21_memset
void* s21_memset(void* s, int c, size_t n) {
    unsigned char* p = s;
    for (size_t i = 0; i < n; i++) {
        p[i] = (unsigned char)c;
    }
    return s;
}

// s21_strchr
char* s21_strchr(const char* s, int c) {
    while (*s) {
        if (*s == c) return (char*)s;
        s++;
    }
    if (c == '\0') return (char*)s;
    return NULL;
}