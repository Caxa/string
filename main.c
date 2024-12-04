#include <stdio.h>
#include "test_s21.h"

int main() {
    int failed = 0;

    failed += test_s21_strstr();
    failed += test_s21_strrchr();
    failed += test_s21_strcspn();
    failed += test_s21_memchr();
    failed += test_s21_memset();
    failed += test_s21_strchr();

    if (failed == 0) {
        printf("All tests passed!\n");
    } else {
        printf("Some tests failed: %d\n", failed);
    }

    return failed;
}
