#include <vector>

using std::vector;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right)
      : val(x), left(left), right(right) {}
};

class Solution {
private:
  void walk(TreeNode *node, vector<int> &result) {
    if (node == nullptr) {
      return;
    }
    walk(node->left, result);
    result.push_back(node->val);
    walk(node->right, result);
  }

public:
  vector<int> inorderTraversal(TreeNode *root) {
    vector<int> result;
    walk(root, result);
    return result;
  }
};
