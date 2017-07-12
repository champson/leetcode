/* 17. Letter Combinations of a Phone Number
 * Given a digit string, return all possible letter combinations that the number could represent.
 *
 * A mapping of digit to letters (just like on the telephone buttons) is given below.
 *
 *
 *
 * Input:Digit string "23"
 * Output: ["ad", "ae", "af", "bd", "be", "bf", "cd", "ce", "cf"].
 * Note:
 * Although the above answer is in lexicographical order, your answer could be in any order you want.
 */

class Solution {
  public:
    vector<string> letterCombinations(string digits) {
      int size = digits.size();
      vector<vector<string>> result(2);
      if (size == 0) return result[0];
      vector<string> phoneMap = {"0", "1", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
      result[1].push_back("");
      for (int i = 0; i < size; i++) {
        result[i % 2].clear();
        for (int j = 0; j < result[(i + 1) % 2].size(); j++) {
          for (int k = 0; k < phoneMap[digits[i] - '0'].size(); k++) {
            result[i % 2].push_back(result[(i + 1) % 2][j] + phoneMap[digits[i] - '0'][k]);
          }
        }
      }
      return result[(size + 1) % 2];
    }
};

