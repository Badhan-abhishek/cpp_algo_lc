class Solution {
public:
  int reverseNumber(int n) {
    int result = 0;

    while (n > 0) {
      int ld = n % 10;
      result = (result * 10) + ld;
      n = n / 10;
    }
    return result;
  };
};
