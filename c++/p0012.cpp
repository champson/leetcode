/* 12. Integer to Roman
 * Given an integer, convert it to a roman numeral.
 *
 * Input is guaranteed to be within the range from 1 to 3999.
 */

class Solution {
  public:
    string intToRoman(int num) {
      string roman;
      if (num < 1 || num > 3999) return "";
      vector<pair<int, char>> romanMap = {{1000, 'M'}, {500, 'D'}, {100, 'C'}, {50, 'L'}, {10, 'X'}, {5, 'V'}, {1, 'I'}};
      int size = romanMap.size(), i, j;
      for (i = 0; i < size; i++) {
        while (num >= romanMap[i].first) {
          roman.push_back(romanMap[i].second);
          num -= romanMap[i].first;
        }
        if (num == 0) break;
        j = (i + 2) - i % 2;
        if (num >= (romanMap[i].first - romanMap[j].first)) {                    
          roman.push_back(romanMap[j].second);            
          roman.push_back(romanMap[i].second);
          num -= romanMap[i].first - romanMap[j].first;                    
        }
      }
      return roman;
    }
};
