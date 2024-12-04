#include <stdio.h>
#include <string.h>
#include "s21.h"

#define TEST_CASE(name) printf("Running %s...\n", name)
#define ASSERT_EQ_STR(result, expected) \
    if (result == NULL || strcmp(result, expected) != 0) { \
        printf("FAIL: %s != %s\n", result ? result : "NULL", expected); \
        return 1; \
    } else { \
        printf("PASS\n"); \
    }

#define ASSERT_EQ_PTR(result, expected) \
    if (result != expected) { \
        printf("FAIL: %p != %p\n", (void*)result, (void*)expected); \
        return 1; \
    } else { \
        printf("PASS\n"); \
    }

#define ASSERT_EQ_INT(result, expected) \
    if (result != expected) { \
        printf("FAIL: %d != %d\n", result, expected); \
        return 1; \
    } else { \
        printf("PASS\n"); \
    }

int test_s21_strstr() {
    TEST_CASE("test_s21_strstr");
    ASSERT_EQ_STR(s21_strstr("hello world", "world"), "world");
    ASSERT_EQ_PTR(s21_strstr("hello world", "planet"), NULL);
    ASSERT_EQ_STR(s21_strstr("hello", ""), "hello");
    ASSERT_EQ_PTR(s21_strstr("", "hello"), NULL);
    return 0;
}

int test_s21_strrchr() {
    TEST_CASE("test_s21_strrchr");
    ASSERT_EQ_STR(s21_strrchr("hello world", 'o'), "orld");
    ASSERT_EQ_PTR(s21_strrchr("hello", 'z'), NULL);
    ASSERT_EQ_STR(s21_strrchr("hello", '\0'), "");
    return 0;
}

int test_s21_strcspn() {
    TEST_CASE("test_s21_strcspn");
    ASSERT_EQ_INT(s21_strcspn("hello world", "ow"), 4);
    ASSERT_EQ_INT(s21_strcspn("hello world", "xyz"), 11);
    ASSERT_EQ_INT(s21_strcspn("", "a"), 0);
    return 0;
}



int test_s21_memchr() {
    TEST_CASE("test_s21_memchr");
    ASSERT_EQ_PTR(s21_memchr("abcdef", 'c', 6), memchr("abcdef", 'c', 6)); 
    ASSERT_EQ_PTR(s21_memchr("abcdef", 'z', 6), NULL);                     
    ASSERT_EQ_PTR(s21_memchr("abcdef", '\0', 6), memchr("abcdef", '\0', 6)); 
    return 0;
}

int test_s21_memset() {
    TEST_CASE("test_s21_memset");
    char buffer1[10] = "abcdef";
    char buffer2[10] = "abcdef";
    s21_memset(buffer1, 'x', 3);
    memset(buffer2, 'x', 3);
    ASSERT_EQ_STR(buffer1, buffer2);
    return 0;
}

int test_s21_strchr() {
    TEST_CASE("test_s21_strchr");
    ASSERT_EQ_STR(s21_strchr("hello", 'e'), strchr("hello", 'e'));
    ASSERT_EQ_PTR(s21_strchr("hello", 'z'), NULL);
    ASSERT_EQ_STR(s21_strchr("hello", '\0'), strchr("hello", '\0'));
    return 0;
}
