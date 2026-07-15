class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector <int> temp = arr;
        sort(temp.begin(), temp.end());
        map <int, int> rank;
        vector <int> result;
        int r = 1;

        for (int i : temp)   {
            if (!rank.count(i))  {
                rank[i] = r++;
            }
        }   for (int i : arr)   {
            result.push_back(rank[i]);
        }   return result;
    }
};