#include <set>
#include <vector>

using namespace std;

class Solution {
public:
  bool containsDuplicate(vector<int> &nums) {
    set<int> nums_set(nums.begin(), nums.end());

    if (nums_set.size() < nums.size())
      return true;
    else
      return false;
  }
};
