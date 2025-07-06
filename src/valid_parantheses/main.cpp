#include "valid_parantheses.cpp"
#include <cassert>
#include <cstdio>
#include <iostream>

using std::printf;
using std::string;

int main() {

  Solution s;

  string input1 = "()";
  bool result1Exp = 1;

  bool result1 = s.isValid(input1);

  printf("Running test case 1... %b\n", result1);
  assert(result1Exp == result1);
  printf("1: Done\n");

  string input2 = "()[]{}";
  bool result2Exp = 1;

  bool result2 = s.isValid(input2);

  printf("Running test case 2... %b\n", result2);
  assert(result2Exp == result2);
  printf("2: Done\n");

  string input3 = "(]";
  bool result3Exp = false;

  bool result3 = s.isValid(input3);

  printf("Running test case 3... %b \n", result3);
  assert(result3Exp == result3);
  printf("3: Done\n");

  string input4 = ")(){}";
  bool result4Exp = false;
  bool result4 = s.isValid(input4);

  printf("Running test case 4... %b \n", result4);
  assert(result4Exp == result4);
  printf("4: Done\n");

  string input5 = "(])";
  bool result5exp = false;
  bool result5 = s.isValid(input5);

  printf("Running test case 5... %b \n", result5);
  assert(result5 == result5exp);
  printf("5: Done \n");

  return 0;
}
