/* 14. Longest Common Prefix
 * Write a function to find the longest common prefix string amongst
 * an array of strings.
 */

class Solution {
  public:
    string longestCommonPrefix(vector<string>& strs) {
      if (strs.empty()) return "";
      string res;
      int current = 0;
      while (1) {
        if (current >= strs[0].size()) return res;
        char c  = strs[0][current];
        for (int i = 0; i < strs.size(); i++) {
          if (c != strs[i][current]) return res;
        }
        res.push_back(c);
        current++;
      }
      return res;
    }
};
