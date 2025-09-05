#include <iostream>

class Solution {
public:
  void printPattern(int x, int y) {
    for (int i = 0; i < x; i++) {
      for (int j = 0; j < y; j++) {
        std::cout << "*";
      }
      std::cout << "\n";
    }
  }
};
