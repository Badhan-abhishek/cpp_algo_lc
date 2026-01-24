#include <vector>

using namespace std;

class Solution {
public:
  vector<int> getconcatenation(vector<int> &nums) {
    nums.insert(nums.end(), nums.begin(), nums.end());
    return nums;
  }
};
