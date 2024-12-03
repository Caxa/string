#include "s21.h"
#include <stddef.h>

// s21_strstr
char* s21_strstr(const char* haystack, const char* needle) {
    if (!*needle) return (char*)haystack;
    for (; *haystack; haystack++) {
        if (*haystack == *needle) {
            const char* h = haystack;
            const char* n = needle;
            while (*h && *n && (*h == *n)) {
                h++;
                n++;
            }
            if (!*n) return (char*)haystack;
        }
    }
    return NULL;
}

// s21_strrchr
char* s21_strrchr(const char* s, int c) {
    const char* last = NULL;
    while (*s) {
        if (*s == c) last = s;
        s++;
    }
    if (c == '\0') return (char*)s;
    return (char*)last;
}

// s21_strcspn
size_t s21_strcspn(const char* s1, const char* s2) {
    const char* p1 = s1;
    while (*p1) {
        for (const char* p2 = s2; *p2; p2++) {
            if (*p1 == *p2) return p1 - s1;
        }
        p1++;
    }
    return p1 - s1;
}

// s21_memchr
void* s21_memchr(const void* s, int c, size_t n) {
    const unsigned char* p = s;
    for (size_t i = 0; i < n; i++) {
        if (p[i] == (unsigned char)c) return (void*)(p + i);
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