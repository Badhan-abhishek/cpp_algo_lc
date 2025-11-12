#include <algorithm>
#include <unordered_map>
#include <vector>

using std::unordered_map;
using std::vector;

class Solution {
public:
  int maximumUniqueSubarray(vector<int> &nums) {
    unordered_map<int, int> dup;

    int result = 0;

    for (int i = 0; i < nums.size(); ++i) {
      int n = nums[i];
      if (dup.count(n)) {
        int current = 0;
        for (int j = dup[n] + 1; j < nums.size(); ++j) {
          current += n;
          if (dup.count(n)) {
            break;
          }
        }
        result = std::max(current, result);
        bool r = dup.empty();
      } else {
        dup[n] = i;
      }
    }

    return result;
  }
};
