/* 13. Roman to Integer
 * Given a roman numeral, convert it to an integer.
 *
 * Input is guaranteed to be within the range from 1 to 3999.
 */

class Solution {
  public:
    int romanToInt(string s) {
      int size = s.size(), res = 0, val = 0;
      map<char, int> romanMap = {{'M', 1000}, {'D', 500}, {'C', 100}, {'L', 50}, {'X', 10}, {'V', 5}, {'I', 1}};
      for (int i = 0; i < size; i++) {
        if (val < romanMap[s[i]]) {
          res += romanMap[s[i]] - 2 * val;
        } else {
          res += romanMap[s[i]];
        }
        val = romanMap[s[i]];
      }
      return res;
    }
};
