class Solution {
public:
    int minImpossibleOR(vector<int>& nums) {
        long long int ans = 1;
        sort (nums.begin(), nums.end());
        for (int i : nums)  {
            if (ans == i)   {
                ans *= 2;
            }
        }   return ans;
    }
};