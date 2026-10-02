class Solution {
public:
    long long numberOfRightTriangles(vector<vector<int>>& grid) {
        long long  triangles = 0;
        vector <int> row_count (grid.size(), 0);
        vector <int> col_count (grid[0].size(), 0);

        for (int i = 0; i < grid.size(); ++i)   {
            for (int j = 0; j < grid[0].size(); ++j)   {
                if (grid[i][j] == 1) {
                    row_count[i]++;
                    col_count[j]++;
                }
            }
        }   for (int i = 0; i < grid.size(); ++i)  {
            for (int j = 0; j < grid[0].size(); ++j) {
                if (grid[i][j] == 1) {
                    triangles += ((row_count[i] - 1) * (col_count[j] - 1));
                }
            }
        }   return triangles;
    }
};