#include <algorithm>
#include <cctype>
#include <string>
#include <vector>

using std::string;

class Solution {
public:
  bool isValid(string word) {
    if (word.length() < 3)
      return false;
    std::vector<char> vowels = {'a', 'i', 'o', 'u', 'e'};
    bool hasVowel = false;
    for (int i = 0; i < word.length(); ++i) {
      int c = word[i];
      if ((c < 48 || c > 57) && (c < 65 || c > 90) && (c < 97 || c > 122)) {
        return false;
      }
      auto r = std::find(vowels.begin(), vowels.end(), std::tolower(word[i]));
      if (r != vowels.end()) {
        hasVowel = true;
      }
    }
    return hasVowel;
  }
};
