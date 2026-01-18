#include "backtracking.cpp"
#include <iostream>
#include <vector>

int main() {
  Solution s;
  // Write your test cases here

  std::vector<int> a1 = {1, 2, 3};

  vector<vector<int>> res = s.backtracking(a1);
  // Print res with each subset in a new line
  for (const auto &subset : res) {
    std::cout << "[";
    for (size_t i = 0; i < subset.size(); i++) {
      std::cout << subset[i];
      if (i < subset.size() - 1) {
        std::cout << ", ";
      }
    }
    std::cout << "]" << std::endl;
  }

  return 0;
}
