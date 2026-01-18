#include <algorithm>
#include <unordered_map>
#include <vector>

class Solution {
public:
  int reverse(int num) {
    int rev = 0;
    while (num > 0) {
      rev = (10 * rev) + (num % 10);
      num = num / 10;
    }
    return rev;
  };

  int removeEndZero(int num) {
    if (num % 10 != 0) {
      return num;
    }

    while (num % 10 == 0) {
      num = num / 10;
    }

    return num;
  };

  // Add your methods here
  int minMirrorPairDistance(std::vector<int> &nums) {
    std::unordered_map<int, int> um;
    int result = -1;
    for (int i = 0; i < nums.size(); i++) {
      if (um.find(nums[i]) != um.end()) {
        if (result == -1) {
          result = i - um.at(nums[i]);
        } else {
          result = std::min(result, i - um.at(nums[i]));
        }
      }
      int rev = this->reverse(nums[i]);
      if (um.find(rev) != um.end()) {
        um.erase(rev);
      }
      um.insert({rev, i});
    }
    return result;
  }
};
