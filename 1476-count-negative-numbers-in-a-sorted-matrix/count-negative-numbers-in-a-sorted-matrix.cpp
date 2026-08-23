class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        int cols = grid.size();
        int rows = grid[0].size();

        for (int i = 0; i < cols; i++)   {
            for (int j = 0; j < rows; j++)    {
                if (grid[i][j] < 0) {
                    count += rows - j;
                    break;
                }
            }
        }   return count;
    }
};