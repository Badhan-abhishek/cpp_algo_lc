#include "count_digits.cpp"
#include <cstdio>

int main() {
  Solution s;
  // Write your test cases here
  int digit = s.countDigits(10);
  if (digit == 2) {
    printf("Test 1 passed %d \n", digit);
  } else {
    printf("Test 1 failed %d \n", digit);
  }

  digit = s.countDigits(454);
  if (digit == 3) {
    printf("Test 2 passed %d \n", digit);
  } else {
    printf("Test 2 failed %d \n", digit);
  }

  digit = s.countDigits(0);
  if (digit == 1) {
    printf("Test 3 passed %d \n", digit);
  } else {
    printf("Test 3 failed %d \n", digit);
  }

  digit = s.countDigits(1);
  if (digit == 1) {
    printf("Test 4 passed %d \n", digit);
  } else {
    printf("Test 4 failed %d \n", digit);
  }

  digit = s.countDigitsOptim(10);
  if (digit == 2) {
    printf("Optim Test 1 passed %d \n", digit);
  } else {
    printf("Optim Test 1 failed %d \n", digit);
  }

  digit = s.countDigitsOptim(454);
  if (digit == 3) {
    printf("Optim Test 2 passed %d \n", digit);
  } else {
    printf("Optim Test 2 failed %d \n", digit);
  }

  digit = s.countDigitsOptim(0);
  if (digit == 1) {
    printf("Optim Test 3 passed %d \n", digit);
  } else {
    printf("Optim Test 3 failed %d \n", digit);
  }

  digit = s.countDigitsOptim(1);
  if (digit == 1) {
    printf("Optim Test 4 passed %d \n", digit);
  } else {
    printf("Optim Test 4 failed %d \n", digit);
  }

  return 0;
}
