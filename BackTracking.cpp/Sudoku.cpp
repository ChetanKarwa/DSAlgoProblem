// Link: https://leetcode.com/problems/valid-sudoku/

// Determine if a 9x9 Sudoku board is valid. Only the filled cells need to be validated according to the following rules:

// 1.Each row must contain the digits 1-9 without repetition.
// 2.Each column must contain the digits 1-9 without repetition.
// 3.Each of the 9 3x3 sub-boxes of the grid must contain the digits 1-9 without repetition.


///////////////////////////////      Actual Correct Solution but wont work on leetcode       ///////////////////////////////////////
class Solution {
public:
    
bool isSafe(vector<vector<char>> &board, int row, int col, int no)
{
  for (int i = 0; i < 9; i++)
    if (no + '0' == board[row][i])
      return false;
  for (int i = 0; i < 9; i++)
    if (no + '0' == board[i][col])
      return false;
  int x = row / 3;
  int y = col / 3;
  for (int i = 3 * x; i < 3 * x + 3; i++)
  {
    for (int j = 3 * y; j < 3 * y + 3; j++)
    {
      if (no + '0' == board[i][j])
        return false;
    }
  }
  return true;
}
bool Sudoku(vector<vector<char>> &board, int row, int col)
{
  if (row == 9)
    return true;
  else if (col == 9)
    return Sudoku(board, row + 1, 0);
  else if (board[row][col] != '.')
  {
    char c = board[row][col];
    board[row][col] = '.';
    if (isSafe(board, row, col, c - '0'))
    {
      board[row][col] = c;
      return Sudoku(board, row, col + 1);
    }
    else
    {
      board[row][col] = c;
      return false;
    }
  }
  for (int i = 1; i <= 9; i++)
  {
    if (isSafe(board, row, col, i))
    {
      board[row][col] = i + '0';
      if (Sudoku(board, row, col + 1))
        return true;
      board[row][col] = '.';
    }
  }
  return false;
}
bool isValidSudoku(vector<vector<char>> &board)
{
  return Sudoku(board, 0, 0);
}
};
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////     Dumb Soln that just works for leetcode       ///////////////////////////////////

class Solution
{
public:
  bool isSafe(vector<vector<char>> &board, int row, int col, int no)
  {
    for (int i = 0; i < 9; i++)
      if (no + '0' == board[row][i])
        return false;
    for (int i = 0; i < 9; i++)
      if (no + '0' == board[i][col])
        return false;
    int x = row / 3;
    int y = col / 3;
    for (int i = 3 * x; i < 3 * x + 3; i++)
    {
      for (int j = 3 * y; j < 3 * y + 3; j++)
      {
        if (no + '0' == board[i][j])
          return false;
      }
    }
    return true;
  }
  bool isValidSudoku(vector<vector<char>> &board)
  {
    for (int row = 0; row < 9; row++)
    {
      for (int col = 0; col < 9; col++)
      {
        if (board[row][col] != '.')
        {
          char c = board[row][col];
          board[row][col] = '.';
          if (isSafe(board, row, col, c - '0'))
          {
            board[row][col] = c;
          }
          else
          {
            board[row][col] = c;
            return false;
          }
        }
      }
    }
    return true;
  }
};
