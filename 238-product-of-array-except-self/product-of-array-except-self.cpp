class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1;
        int zero = 0;
        vector <int> result (nums.size(), 0);

        for (int i : nums)  {
            if (i == 0) {zero++; continue;}
            product *= i;
        }

        for (int i = 0; i < nums.size(); i++)   {
            if (zero == 1)  {
                result[i] = (nums[i] == 0) ? product : 0;
            }   else if (zero == 0) {
                result[i] = product / nums[i];
            }
        }   return result;
    }
};