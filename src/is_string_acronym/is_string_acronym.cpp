#include <string>
#include <vector>

using std::string;
using std::vector;

class Solution {
public:
  bool isAcronym(vector<string> &words, string s) {
    string result = "";
    for (string x : words) {
      result += x[0];
    }
    return result == s;
  }
};
