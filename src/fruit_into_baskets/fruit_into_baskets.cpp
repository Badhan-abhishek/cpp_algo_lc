#include <map>
#include <vector>

using std::vector;

using std::map;

class Solution {
public:
  int totalFruit(vector<int> &fruits) {

    map<int, int> ht;

    for (auto n : fruits) {
      if (ht.find(n)->first) {
        int el = ht.find(n)->second;
        ht.insert({n, el + 1});
      }
      ht.insert(n, 1);
    }

    int k = std::numeric_limits<int>::min();
    int l = std::numeric_limits<int>::min();

    for (const auto &m : ht) {
      if (k <= m.second) {
        k = m.second;
      } else if (k > m.second && l < m.second) {
        l = m.second;
      }
    }

    return k + l;
  }
};
