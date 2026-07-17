class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maximum = INT_MIN;
        int current = 1;

        for (int i : nums)  {
            current *= i;
            maximum = max(current, maximum);

            if (current == 0)   current = 1;
        }   current = 1;
        for (int i = nums.size() - 1; i >= 0; i--)   {
            current *= nums[i];
            maximum = max(current, maximum);

            if (current == 0)   current = 1;
        }   return maximum;
    }
};