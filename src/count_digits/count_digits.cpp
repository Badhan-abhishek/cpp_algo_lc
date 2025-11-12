
#include <cmath>
class Solution {
public:
  int countDigits(int num) {
    if (num < 10) {
      return 1;
    }

    int result = 0;

    while (num > 0) {
      result++;
      num = num / 10;
      if (num < 10) {
        result++;
        break;
      }
    }

    return result;
  }

  int countDigitsOptim(int num) {
    if (num == 0)
      return 1;
    int result = 0;
    result = int(log10(num) + 1);
    return result;
  }
};
