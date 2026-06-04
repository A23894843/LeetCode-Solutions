class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size = nums.size();
        int count = 0;
        for (int i = size - 1; i >= 0; i--)    {
            if (nums[i] == 0)   {
                count++;
                nums.erase(nums.begin() + i, nums.begin() + i + 1);
            }
        }   while (count)   {
            nums.push_back(0);
            count--;
        }
    }
};