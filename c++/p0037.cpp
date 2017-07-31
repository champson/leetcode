/* 37. Sudoku Solver
 * Write a program to solve a Sudoku puzzle by filling the empty cells.
 *
 * Empty cells are indicated by the character '.'.
 *
 * You may assume that there will be only one unique solution.
 */
class Solution {
  public:
    void solveSudoku(vector<vector<char> > &board) {
      solve(board, 0);
    }

    bool solve(vector<vector<char> > &board, int index) {
      if(index == 81) return true;
      int row = index / 9, col = index % 9; 
      if(board[row][col] != '.') return solve(board, index + 1);

      for(int i=0; i<9; i++) {
        if(check(board, row, col, '1' + i)) {
          board[row][col] = (char)('1' + i);
          if (solve(board, index + 1))
            return true;
        }
      }
      board[row][col] = '.';
      return false;
    }

    bool check(vector<vector<char>> &board, int i, int j, char val)
    {
      int row = i - i%3, column = j - j%3;
      for(int x=0; x<9; x++) if(board[x][j] == val) return false;
      for(int y=0; y<9; y++) if(board[i][y] == val) return false;
      for(int x=0; x<3; x++)
        for(int y=0; y<3; y++)
          if(board[row+x][column+y] == val) return false;
      return true;
    }
};
