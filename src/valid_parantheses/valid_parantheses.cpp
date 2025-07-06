#include <map>
#include <stack>
#include <string>

using std::map;
using std::string;

class Solution {
private:
  map<char, char> matches = {{')', '('}, {']', '['}, {'}', '{'}};

  auto getMatch(char val) {
    auto it = matches.find(val);
    return it;
  }

public:
  bool isValid(string s) {
    if (s.size() == 1) {
      return false;
    }

    std::stack<char> stck;
    if (matches.find(s[0]) != matches.end()) {
      return false;
    }

    for (int i = 0; i < s.length(); ++i) {
      char val = s[i];
      auto match = getMatch(val);
      if (match != matches.end()) {
        if (stck.size() < 1) {
          return false;
        }
        if (stck.top() == match->second) {
          stck.pop();
        } else {
          return false;
        }
      } else {
        stck.push(val);
      }
    }
    return stck.size() < 1;
  }
};
