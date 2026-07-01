class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int max_sum = 0;
        if (nums.size() < k)    return 0;
        else if (nums.size() == k)   {
            for (int i : nums)  max_sum += i;
            double result = (double)max_sum/k;
            return result;
        }   else    {
            int i = 0;
            int j = i + k - 1;
            int curr_sum = 0;
            while (i >= 0 && i <= j)    {
                curr_sum += nums[i++];
            }   max_sum = curr_sum;
            while (i < nums.size()) {
                curr_sum += nums[i];
                curr_sum -= nums[i-k];
                i++;
                max_sum = max(max_sum, curr_sum);
            }   
        }   double result = (double)max_sum / k;
        return result;
    }
};