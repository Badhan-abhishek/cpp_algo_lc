#include "min_absolute_distance_between_mirror_pairs.cpp"
#include <cstdio>
#include <vector>

int main() {
  Solution s;

  std::vector<int> t1 = {1000, 100, 10, 1, 100, 10, 1};
  int r1 = 1;

  std::vector<int> t2 = {120, 21};
  int r2 = 1;

  std::vector<int> t3 = {21, 120};
  int r3 = -1;

  std::vector<int> t4 = {7, 21, 39, 37, 47, 72, 12, 74};
  int r4 = 3;

  int tc1 = s.minMirrorPairDistance(t1);
  if (tc1 == r1) {
    printf("Test case 1 passed \n");
  } else {
    printf("Test case 1 failed %d \n", tc1);
  }

  int tc2 = s.minMirrorPairDistance(t2);
  if (tc2 == r2) {
    printf("Test case 2 passed \n");
  } else {
    printf("Test case 2 failed %d \n", tc2);
  }

  int tc3 = s.minMirrorPairDistance(t3);
  if (tc3 == r3) {
    printf("Test case 3 passed \n");
  } else {
    printf("Test case 3 failedo %d \n", tc3);
  }

  int tc4 = s.minMirrorPairDistance(t4);
  if (tc4 == r4) {
    printf("Test case 4 passed \n");
  } else {
    printf("Test case 4 failed %d \n", tc4);
  }

  return 0;
}
