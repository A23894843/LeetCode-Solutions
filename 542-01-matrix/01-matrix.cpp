class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        vector <pair <int, int>> directions = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
        queue <pair <int, int>> q;

        for (int i = 0; i < m; i++)    {
            for (int j = 0; j < n; j++) {
                if (mat[i][j] == 0)  q.push({i, j});
                else    mat[i][j] = INT_MAX;
            }
        }

        while (!q.empty())  {
            pair <int, int> cell = q.front();
            q.pop();
            int row = cell.first;
            int col = cell.second;

            for (pair <int, int> direction : directions)    {
                int newRow = row + direction.first;
                int newCol = col + direction.second;

                if (newRow >= 0 && newRow < m && newCol >= 0 && newCol < n && mat[newRow][newCol] > mat[row][col] + 1)  {
                    mat[newRow][newCol] = mat[row][col] + 1;
                    q.push({newRow, newCol});
                }
            }
        }   return mat;
    }
};