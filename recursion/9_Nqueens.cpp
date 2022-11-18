// APPROACH-1
// Time Complexity : O(N!*N), Since we have N choices in the first row, then N-1 choices in the second row and so on so the overall complexity become O(N!)
// Space Complexity: O(N*N), Just the board and recursive stack space o(n)
// bool canPlace(vector<string> &board, int row, int col, int n)
// {
//     for (int c = 0; c < col; c++)
//     {
//         if (board[row][c] == 'Q')
//             return false;
//     }
//     checking lower diagnoal on left of matrix
//     int i = row, j = col;
//     while (i < n && j >= 0)
//     {
//         if (board[i++][j--] == 'Q')
//             return false;
//     }
//     checking upper diagonal on left of matrix
//     i = row, j = col;
//     while (i >= 0 && j >= 0)
//     {
//         if (board[i--][j--] == 'Q')
//             return false;
//     }
//     return true;
// }
// void helper(int col, vector<string> board, vector<vector<string>> &ans, int n)
// {
//     if (col == n)
//     {
//         ans.push_back(board);
//         return;
//     }
//     for (int row = 0; row < n; row++)
//     {
//         if (canPlace(board, row, col, n))
//         {
//             board[row][col] = 'Q';
//             helper(col + 1, board, ans, n);
//             board[row][col] = '.';
//         }
//     }
// }
// vector<vector<string>> solveNQueens(int n)
// {
//     vector<vector<string>> ans;
//     vector<string> board(n);
//     string s(n, '.');
//     for (int i = 0; i < n; i++)
//     {
//         board[i] = s;
//     }
//     helper(0, board, ans, n);
//     return ans;
// }

// APPROACH-2 :hashing
// optimising canPlace part
//  Time Complexity : O(N!*N), Since we have N choices in the first row, then N-1 choices in the second row and so on so the overall complexity become O(N!)
//  Space Complexity: O(N*N) +O(N) +O(2*N -1) +O(2*N-1), Just the board and leftCheck,upperDiagonal,lowerDiagonal
//  AS = recursive stack space o(n)
//  void helper(int col, vector<string> &board, vector<int> &rowCheck, vector<int> &lowerDiagonal, vector<int> &upperDiagonal, vector<vector<string>> &ans, int n)
//  {
//      if (col == n)
//      {
//          ans.push_back(board);
//          return;
//      }
//      for (int row = 0; row < n; row++)
//      {
//          if (rowCheck[row] == 0 && upperDiagonal[n - 1 + col - row] == 0 && lowerDiagonal[row + col] == 0)
//          {
//              board[row][col] = 'Q';
//              rowCheck[row] = 1;
//              upperDiagonal[n - 1 + col - row] = 1;
//              lowerDiagonal[row + col] = 1;
//              helper(col + 1, board, rowCheck, lowerDiagonal, upperDiagonal, ans, n);
//              board[row][col] = '.';
//              rowCheck[row] = 0;
//              upperDiagonal[n - 1 + col - row] = 0;
//              lowerDiagonal[row + col] = 0;
//          }
//      }
//  }
//  vector<vector<string>> solveNQueens(int n)
//  {
//      vector<vector<string>> ans;
//      vector<string> board(n);
//      string s(n, '.');
//      for (int i = 0; i < n; i++)
//      {
//          board[i] = s;
//      }
//      vector<int> rowCheck(n);
//      vector<int> upperDiagonal(2 * n - 1);
//      vector<int> lowerDiagonal(2 * n - 1);
//      helper(0, board, rowCheck, lowerDiagonal, upperDiagonal, ans, n);
//      return ans;
//  }