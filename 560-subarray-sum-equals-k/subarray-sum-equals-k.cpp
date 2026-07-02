class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;

        for (int i = 0; i < nums.size(); i++)   {
            int current_sum = 0;
            
            current_sum += nums[i];
            if (current_sum == k)   count++;

            for (int j = i + 1; j < nums.size(); j++)   {
                current_sum += nums[j];
                if (current_sum == k)   count++;
            }
        }   return count;
    }
};