class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int result = INT_MIN;

        if (nums.size() == 1)   return nums[0] - 1;
        else if (nums.size() == 2)  return ((nums[0] - 1) * (nums[1] - 1));

        for (int i = 0; i < nums.size(); i++)   {
            for (int j = i + 1; j < nums.size(); j++)   {
                int product = (nums[i] - 1) * (nums[j] - 1);
                result = max (result, product);
            }
        }   return result;
    }
};