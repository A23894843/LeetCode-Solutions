class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int size = nums.size();
        int ans = INT_MAX;
        int left = 0;
        int right = 0;
        int current_sum = 0;

        while (right < size)    {
            current_sum += nums[right];
            while (current_sum >= target)   {
                ans = min(ans, right - left + 1);
                current_sum -= nums[left];
                left++;
            }   right++;
        }   return ans == INT_MAX ? 0 : ans;
    }
};