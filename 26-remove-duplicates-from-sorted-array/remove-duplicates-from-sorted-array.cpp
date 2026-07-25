class Solution {
public:
    int remove(vector <int>& nums) {
        for (int i = 0; i < nums.size(); i++)  {
            if (i < (nums.size() - 1) && nums[i] == nums[i + 1])   {
                for (int j = i; j < nums.size() - 1; j++)  {
                    nums[j] = nums[j + 1];
                }   nums.pop_back();
            }
        }  return nums.size();
    }
    int removeDuplicates(vector<int>& nums) {
        remove(nums);
        remove(nums);
        remove(nums);
        remove(nums);
        remove(nums);
        remove(nums);
        remove(nums);
        remove(nums);
        remove(nums);
        remove(nums);
        remove(nums);
        remove(nums);
        return remove(nums);
    }
};