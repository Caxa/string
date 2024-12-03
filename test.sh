#!/bin/bash

gcc -Wall -Wextra -Werror -std=c11 -o functions_test main.c s21.c

echo "Running tests..."

# Test s21_strstr
result=$(./functions_test | grep "s21_strstr(\"hello world\", \"world\")" | awk -F: '{print $2}' | tr -d ' ')
expected="world"
if [[ "$result" == "$expected" ]]; then
  echo "s21_strstr passed!"
else
  echo "s21_strstr failed!"
fi

# Test s21_strrchr
result=$(./functions_test | grep "s21_strrchr(\"hello world\", 'o')" | awk -F: '{print $2}' | tr -d ' ')
expected="orld"
if [[ "$result" == "$expected" ]]; then
  echo "s21_strrchr passed!"
else
  echo "s21_strrchr failed!"
fi

# Test s21_strcspn
result=$(./functions_test | grep "s21_strcspn(\"hello world\", \"ow\")" | awk -F: '{print $2}' | tr -d ' ')
expected="4"
if [[ "$result" == "$expected" ]]; then
  echo "s21_strcspn passed!"
else
  echo "s21_strcspn failed!"
fi

# Test s21_memchr
result=$(./functions_test | grep "s21_memchr(\"abcdef\", 'c', 6)" | awk -F: '{print $2}' | tr -d ' ')
expected="cdef"
if [[ "$result" == "$expected" ]]; then
  echo "s21_memchr passed!"
else
  echo "s21_memchr failed!"
fi

# Test s21_memset
result=$(./functions_test | grep "s21_memset(\"abcdef\", 'x', 3)" | awk -F: '{print $2}' | tr -d ' ')
expected="xxxdef"
if [[ "$result" == "$expected" ]]; then
  echo "s21_memset passed!"
else
  echo "s21_memset failed!"
fi

# Test s21_strchr
result=$(./functions_test | grep "s21_strchr(\"hello\", 'e')" | awk -F: '{print $2}' | tr -d ' ')
expected="ello"
if [[ "$result" == "$expected" ]]; then
  echo "s21_strchr passed!"
else
  echo "s21_strchr failed!"
fi

rm functions_test
