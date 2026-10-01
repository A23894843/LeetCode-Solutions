class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map <int, int> set;
        int result = -1;

        for (int i = 0; i < nums.size(); i++)   {
            set[nums[i]]++;
        }   for (int i = 0; i < nums.size(); i++)   {
            if (set[nums[i]] == 1)  {
                result = nums[i];
                break;
            }
        }   return result;
    }
};