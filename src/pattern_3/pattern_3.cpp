
#include <iostream>
class Solution {
public:
  void printPattern(int n) {
    int c = 1;
    while (n > 0) {
      for (int i = 1; i <= c; ++i) {
        std::cout << i;
      }
      std::cout << "\n";
      n--;
      c++;
    }
  }
};
