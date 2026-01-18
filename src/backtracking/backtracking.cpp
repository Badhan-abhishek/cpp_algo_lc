
#include <vector>

using namespace std;

class Solution {
public:
  // Add your methods here

  void dfs(int i, vector<vector<int>> &res, vector<int> nums,
           vector<int> subset) {
    if (i >= nums.size()) {
      res.push_back(subset);
      return;
    }

    // decision to include nums[i]
    subset.push_back(nums[i]);
    dfs(i + 1, res, nums, subset);

    // decision to not include nums[i]
    subset.pop_back();
    dfs(i + 1, res, nums, subset);
  }

  vector<vector<int>> backtracking(vector<int> nums) {
    vector<vector<int>> res;
    vector<int> subset;
    dfs(0, res, nums, subset);
    return res;
  }
};
