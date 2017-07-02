/* 5. Longest Palindromic Substring 
 * Given a string s, find the longest palindromic substring in s. You may assume that the maximum length of s is 1000.
 *
 * Example:
 *
 * Input: "babad"
 *
 * Output: "bab"
 *
 * Note: "aba" is also a valid answer.
 *
 * Example:
 *
 * Input: "cbbd"
 *
 * Output: "bb"
 */
class Solution {
  public:
    string longestPalindrome(string s) {
      int size = s.size();
      int i, len = 0, index = 0, maxLen = 1;
      for (i = 0; i < size - len; i++) {
        //get index's palindrome
        len = 1;
        while ((i + len) < size && (i - len) >= 0 &&
            s[i - len] == s[i + len]) {
          len++;
        }
        len--;

        if ((len * 2 + 1) > maxLen) {
          index = i - len;
          maxLen = len * 2 + 1;
        }

        len = 1;
        while ((i + len) < size && (i - len + 1) >= 0 &&
            s[i - len + 1] == s[i + len]) {
          len++;
        }
        len--;

        if (len * 2 > maxLen) {
          index = i - len + 1;
          maxLen = len * 2;
        }
      }
      return s.substr(index, maxLen);
    }
};
