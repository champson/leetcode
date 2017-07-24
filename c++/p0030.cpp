/* 30. Substring with Concatenation of All Words
 * You are given a string, s, and a list of words, words, that are
 * all of the same length. Find all starting indices of substring(s)
 * in s that is a concatenation of each word in words exactly once 
 * and without any intervening characters.
 *
 * For example, given:
 * s: "barfoothefoobarman"
 * words: ["foo", "bar"]
 *
 * You should return the indices: [0,9].
 * (order does not matter).
 */

class Solution {
  public:
    vector<int> findSubstring(string s, vector<string>& words) {
      vector<pair<int, int>> indexs;
      vector<int> result;
      if (words.size() == 0) return result;
      int i, size = s.size(), j, ws = words[0].size(), n = words.size();
      if (size < ws || size < n) return result;
      for (int k = 0; k < n; k++) {
        for (i = 0; i < size - ws + 1; i++) {
          for (j = 0; j < ws; j++) {
            if (s[i + j] == words[k][j])
              continue;
            break;
          }
          if (j == ws)  indexs.push_back({i, k});
        }
      }
      sort(indexs.begin(), indexs.end());

      int expect = -1;
      set<int> seen;

      for (i = 0; i < indexs.size() - n + 1; i++) {
        seen.clear();
        pair<int, int> p = indexs[i];
        seen.insert(p.second);
        expect = p.first + ws;
        pair<int, int> key;
        j = i + 1;
        while(j < indexs.size()) {
          key = {expect, 0};
          j = lower_bound(indexs.begin() + j, indexs.end(), key) - indexs.begin();
          if (j >= indexs.size()) break;

          while (expect == indexs[j].first) {
            if (seen.find(indexs[j].second) == seen.end()) {
              seen.insert(indexs[j].second);
              break;
            }
            j++;
          }
          if (expect != indexs[j].first) break;
          if (seen.size() == n) break;
          expect += ws;
        }

        if (seen.size() == n) result.push_back(p.first);
        while (i < indexs.size() - 1 &&
            indexs[i].first == indexs[i+1].first)
          i++;
      }
      return result;
    }
};
