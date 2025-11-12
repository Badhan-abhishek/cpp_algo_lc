#include "reverse_number.cpp"
#include <cstdio>

int main() {
  Solution s;
  // Write your test cases here
  if (s.reverseNumber(54) == 45) {
    printf("Test 1 passed \n");
  } else {
    printf("Test 1 failed %d \n", s.reverseNumber(54));
  }

  if (s.reverseNumber(1) == 1) {
    printf("Test 2 passed \n");
  } else {
    printf("Test 2 failed %d \n", s.reverseNumber(1));
  }

  if (s.reverseNumber(100) == 001) {
    printf("Test 3 passed \n");
  } else {
    printf("Test 3 failed %d \n", s.reverseNumber(001));
  }

  return 0;
}
