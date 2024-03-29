#include <map>
#include <string>

using namespace std;

class Solution {
public:
  bool isAnagram(string s, string t) {
    if (s.size() != t.size())
      return false;

    // create a hashmap to count the occurrences of each letter in both s and t:
    map<char, int> s_count;
    map<char, int> t_count;

    for (char c : s) {
      s_count[c]++;
    }

    for (char c : t) {
      t_count[c]++;
    }

    if (s_count == t_count)
      return true;
    else
      return false;
  }
};
