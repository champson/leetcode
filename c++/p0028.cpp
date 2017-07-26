/* 28. Implement strStr()
 *
 * Implement strStr().
 *
 * Returns the index of the first occurrence of needle in
 * haystack, or -1 if needle is not part of haystack.
 */
//TODO: implement kmp algorithm
class Solution {
  public:
    int strStr(string haystack, string needle) {
      int n = haystack.size(), m = needle.size();
      int i, j;
      for (i = 0; i < n - m + 1; i++ ) {
        for (j = 0; j < m; j++) {
          if (haystack[i+j] != needle[j])
            break;
        }
        if (j == m) return i;
      }
      return -1;
    }
};
