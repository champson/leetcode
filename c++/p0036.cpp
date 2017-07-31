/* 36. Valid Sudoku
 * Determine if a Sudoku is valid, according to: Sudoku Puzzles - The Rules.
 *
 * The Sudoku board could be partially filled, where empty cells are filled with the character '.'.
 *
 *
 * A partially filled sudoku which is valid.
 *
 * Note:
 * A valid Sudoku board (partially filled) is not necessarily solvable. Only the filled cells need to be validated.
 */
class Solution {
  public:
    bool isValidSudoku(vector<vector<char>>& board) {
      vector<int> cached(9, -1);
      char t;
      for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
          t = board[i][j];
          if (t == '.') continue;
          if (cached[t - '1'] == i) return false;
          cached[t - '1'] = i;
        }
      }
      std::fill(cached.begin(), cached.end(), -1);
      for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
          t = board[j][i];
          if (t == '.') continue;
          if (cached[t - '1'] == i) return false;
          cached[t - '1'] = i;
        }
      }
      std::fill(cached.begin(), cached.end(), -1);
      for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
          int x = 3 * (i / 3) + j / 3;
          int y = 3 * (i % 3) + j % 3;
          t = board[x][y];
          if (t == '.') continue;
          if (cached[t - '1'] == i) return false;
          cached[t - '1'] = i;
        }
      }
      return true;
    }
};
