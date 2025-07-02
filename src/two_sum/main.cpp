#include "two_sum.cpp"
#include <cassert>
#include <iostream>
#include <vector>

int main() {

  Solution s;

  vector<int> case1 = {2, 7, 11, 15};
  int case1Target = 9;
  vector<int> case1Resultexp = {0, 1};

  vector<int> case1Result = s.twoSum(case1, case1Target);

  std::sort(case1Result.begin(), case1Result.end());

  cout << "Running test cases..." << case1Result.size() << "\n";
  assert(case1Resultexp == case1Result);
  cout << "Done!\n";

  return 0;
}
