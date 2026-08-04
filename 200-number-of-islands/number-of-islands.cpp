class Solution {
public :
    void dfs (int i, int j, vector <vector <char>>& g)  {
        if (i < 0 || j < 0 || i >= g.size() || j >= g[0].size() || g[i][j] == '0')  return;

        g[i][j] = '0';
        dfs (i + 1, j, g);
        dfs (i - 1, j, g);
        dfs (i, j + 1, g);
        dfs (i, j - 1, g);
    }

    int numIslands(vector<vector<char>>& grid) {
        int count = 0;

        for (int i = 0; i < grid.size(); i++)   {
            for (int j = 0; j < grid[0].size(); j++)    {
                if (grid[i][j] == '1')  {
                    count++;
                    dfs (i, j, grid);
                }
            }
        }   return count;
    }
};