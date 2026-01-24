#include "get_concatenation.cpp"
#include <iostream>

using namespace std;

int main() {
  Solution s;
  // Write your test cases here

  vector<int> a1 = {1, 2, 3};

  vector<int> s1 = {1, 2, 3, 1, 2, 3};

  vector<int> r1 = s.getconcatenation(a1);

  if (r1 == s1) {
    cout << "Test case 1: PASSED" << endl;
  } else {
    cout << "Test case 2: FAILED" << endl;
  }

  return 0;
}
