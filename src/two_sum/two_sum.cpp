#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution {
private:
  // Debug map
  void ppMap(map<int, int> values) {
    for (const auto &pair : values) {
      std::cout << "valies :" << pair.first << ": " << pair.second << std::endl;
    }
  }

public:
  vector<int> twoSum(vector<int> &nums, int target) {

    map<int, int> values;

    for (int i = 0; i < nums.size(); i++) {
      int tg = target - nums[i];
      auto it = values.find(tg);
      if (it != values.end()) {
        return {i, values[tg]};
      }
      values[nums[i]] = i;
    }
    return {};
  }
};
