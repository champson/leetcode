/* 6. ZigZag Conversion
 * The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this:
 * (you may want to display this pattern in a fixed font for better legibility)
 *
 * P   A   H   N
 * A P L S I I G
 * Y   I   R
 * And then read line by line: "PAHNAPLSIIGYIR"
 * Write the code that will take a string and make this conversion given a number of rows:
 *
 * string convert(string text, int nRows);
 * convert("PAYPALISHIRING", 3) should return "PAHNAPLSIIGYIR".
 */
class Solution {
  public:
    string convert(string s, int numRows) {
      int size = s.size(), index = 0;
      string result(s);
      if (size <= numRows || numRows == 1) return result;
      int pitch = numRows * 2 - 2;
      for (int i = 0; i < numRows; i++) {
        int cols = (size - i - 1) / pitch + 1;
        int mapIndex =  i;
        for (int j = 0; j < cols; j++) {
          result[index++] = s[mapIndex];
          mapIndex += pitch;
          if (i == 0 || i == numRows-1) continue;
          if (mapIndex - 2 * i < size)
            result[index++] = s[mapIndex - 2 * i];
        }
      }
      return result;
    }
};
