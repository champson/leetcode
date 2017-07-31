/* 38. Count and Say
 * The count-and-say sequence is the sequence of integers with the first five terms as following:
 *
 * 1.     1
 * 2.     11
 * 3.     21
 * 4.     1211
 * 5.     111221
 * 1 is read off as "one 1" or 11.
 * 11 is read off as "two 1s" or 21.
 * 21 is read off as "one 2, then one 1" or 1211.
 * Given an integer n, generate the nth term of the count-and-say sequence.
 *
 * Note: Each term of the sequence of integers will be represented as a string.
 *
 * Example 1:
 *
 * Input: 1
 * Output: "1"
 * Example 2:
 *
 * Input: 4
 * Output: "1211"
 */
class Solution {
  public:
    string countAndSay(int n) {
      if (n < 0) return "";
      string s[2] = {"1", "1"};
      char c;
      int count = 0, cur, next;
      while (n-- > 1) {
        cur = n % 2;
        next = 1 - n % 2;
        c = s[cur][0];
        int size = s[cur].size();
        count = 1;
        s[next].clear();
        for (int i = 1; i < size; i++) {
          if (c == s[cur][i]) {
            count++;
          } else {
            s[next] += ('0' + count);
            s[next] += c;
            count = 1;
            c = s[cur][i];
          }
        }
        s[next] += '0' + count;
        s[next] += c;
      }
      return s[n % 2];
    }
};
