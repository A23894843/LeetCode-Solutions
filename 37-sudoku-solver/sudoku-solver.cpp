class Solution {
    bool isvalid (vector<vector<char>>& board, int x, int y, char val)   {
        for (int i = 0; i < 9; i++) {
            if (board[i][y] == val) return false;
            if (board[x][i] == val) return false;
            int boxrow = 3 * (x / 3) + i / 3;
            int boxcol = 3 * (y / 3) + i % 3;
            if (board [boxrow][boxcol] == val)  return false;
        }   return true;
    }

    bool sol (vector<vector<char>>& board)    {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') {
                    for (char ch = '1'; ch <= '9'; ch++)    {
                        if (isvalid (board, i, j, ch))  {
                            board[i][j] = ch;
                            if (sol (board))  return true;
                            board [i][j] = '.';
                        }
                    }   return false;
                }   
            }
        }   return true;
    }
public:
    void solveSudoku(vector<vector<char>>& board) {
        sol (board);
    }
};