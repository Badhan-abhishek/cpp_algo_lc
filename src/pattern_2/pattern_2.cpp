#include <iostream>

class Solution {
public:
  void printPattern(int n) {
    int c = 1;
    while (n > 0) {
      for (int i = 0; i < c; i++) {
        std::cout << "*";
      }
      std::cout << "\n";
      c++;
      n--;
    }
  }
};
