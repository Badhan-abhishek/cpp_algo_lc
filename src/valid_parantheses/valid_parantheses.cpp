#include <iostream>
#include <map>
#include <stack>
#include <string>

using std::map;
using std::string;

class Solution {

public:
  bool isValid(string s) {
    if (s.size() == 1)
      return false;
    map<char, char> matches = {{'(', ')'}, {'[', ']'}, {'{', '}'}};

    std::stack<char> stck;

    for (int i = 0; i < s.length(); ++i) {
      char val = s[i];
      auto it = matches.find(val);
      if (it != matches.end()) {
        stck.push(val);
      } else if (stck.size() > 0) {
        auto mit = matches.find(stck.top());
        if (mit != matches.end() && mit->second == val) {
          stck.pop();
        }
      }
    }
    std::cout << stck.size() << " Size for items \n";
    return stck.size() < 1;
  }
};
