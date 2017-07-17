/* 22. Generate Parentheses
 * Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.
 *
 * For example, given n = 3, a solution set is:
 *
 * [
 * "((()))",
 * "(()())",
 * "(())()",
 * "()(())",
 * "()()()"
 * ]
 */
class Solution {
  public:
    void generateParenthesis(vector<string> &res, string str, int m, int n) {
      if (m <= 0 && n <= 0) {
        res.push_back(str);
        return;
      }

      if(m > 0) generateParenthesis(res, str + "(", m - 1, n);
      if(m < n) generateParenthesis(res, str + ")", m, n - 1);
    }
    vector<string> generateParenthesis(int n) {
      if (n <= 0) return {};
      vector<string> res;
      generateParenthesis(res, "", n, n);
      return res;
    }
};
