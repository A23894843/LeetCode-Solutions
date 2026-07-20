class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int maximum = INT_MIN;
        for (int i : nums)  {
            maximum = max (maximum, i);
        }   for (int i = 0; i < nums.size(); i++)   {
            if (nums[i] == maximum)    return i;
        }   return -1;
    }
};