/* 20. Valid Parentheses
 * Given a string containing just the characters '(', ')', '{', '}',
 * '[' and ']', determine if the input string is valid.
 *
 * The brackets must close in the correct order, "()" and "()[]{}" are
 * all valid but "(]" and "([)]" are not.
 */

class Solution {
  public:
    bool isValid(string s) {
      stack<char> visited;
      for (char c : s) {
        switch (c) {
          case '{' :
          case '(' :
          case '[' :  visited.push(c); break;
          case '}' :
          case ')' :
          case ']' : if (visited.empty() || abs(c - visited.top()) > 2) return false; visited.pop();
          default: break;
        }
      }
      return visited.empty();
    }
};
