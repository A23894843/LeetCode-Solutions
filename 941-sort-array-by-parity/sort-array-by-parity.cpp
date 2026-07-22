class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector <int> result;
        sort (nums.begin(), nums.end());

        for (int i : nums)  {
            if (i % 2 == 0)    result.push_back(i);
        }   for (int i : nums)  {
            if (i % 2 != 0) result.push_back(i);
        }   return result;
    }
};