class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++)    {
            for (int j = 0; j < 9; j++)    {
                if (board[i][j] == '.') continue;
                int k = 0;
                while (k < 9)  {
                    if (j == k) {k++; continue;}
                    if (board[i][j] == board[i][k]) return false;
                    k++;
                }   k = 0;
                while (k < 9)  {
                    if (i == k) {k++; continue;}
                    if (board[i][j] == board[k][j]) return false;
                    k++;
                }   
                if ((i >= 0 && i <= 2) && (j >= 0 && j <= 2))   {
                    for (int x = 0; x <= 2; x++) {   //quadrant 1
                        for (int y = 0; y <= 2; y++) {
                            if (i == x && j == y)   continue;
                            if (board[i][j] == board[x][y]) return false;
                        }   
                    }   
                }   else if ((i >= 0 && i <= 2) && (j >= 3 && j <= 5))   {
                    for (int x = 0; x <= 2; x++) {   //quadrant 2
                        for (int y = 3; y <= 5; y++) {
                            if (i == x && j == y)   continue;
                            if (board[i][j] == board[x][y]) return false;
                        }   
                    }   
                }   else if ((i >= 0 && i <= 2) && (j >= 6 && j <= 8))   {
                    for (int x = 0; x <= 2; x++) {   // quadrant 3
                        for (int y = 6; y <= 8; y++) {
                            if (i == x && j == y)   continue;
                            if (board[i][j] == board[x][y]) return false;
                        }   
                    }   
                }   else if ((i >= 3 && i <= 5) && (j >= 0 && j <= 2))   {
                    for (int x = 3; x <= 5; x++) {   //quadrant 4
                        for (int y = 0; y <= 2; y++) {
                            if (i == x && j == y)   continue;
                            if (board[i][j] == board[x][y]) return false;
                        }   
                    }   
                }   else if ((i >= 3 && i <= 5) && (j >= 3 && j <= 5))   {
                    for (int x = 3; x <= 5; x++) {   //quadrant 5
                    for (int y = 3; y <= 5; y++) {
                        if (i == x && j == y)   continue;
                        if (board[i][j] == board[x][y]) return false;
                    }   
                }   
                }   else if ((i >= 3 && i <= 5) && (j >= 6 && j <= 8))   {
                    for (int x = 3; x <= 5; x++) {   //quadrant 6
                        for (int y = 6; y <= 8; y++) {
                            if (i == x && j == y)   continue;
                            if (board[i][j] == board[x][y]) return false;
                        }   
                    }   
                }   else if ((i >= 6 && i <= 8) && (j >= 0 && j <= 2))   {
                    for (int x = 6; x <= 8; x++) {   // quadrant 7
                    for (int y = 0; y <= 2; y++) {
                        if (i == x && j == y)   continue;
                        if (board[i][j] == board[x][y]) return false;
                    }   
                }   
                }   else if ((i >= 6 && i <= 8) && (j >= 3 && j <= 5))   {
                    for (int x = 6; x <= 8; x++) {   //quadrant 8
                        for (int y = 3; y <= 5; y++) {
                            if (i == x && j == y)   continue;
                            if (board[i][j] == board[x][y]) return false;
                        }   
                    }   
                }   else    {
                    for (int x = 6; x <= 8; x++) {   //quadrant 9
                        for (int y = 6; y <= 8; y++) {
                            if (i == x && j == y)   continue;
                            if (board[i][j] == board[x][y]) return false;
                        }   
                    }
                }
            }
        }   return true;
    }
};