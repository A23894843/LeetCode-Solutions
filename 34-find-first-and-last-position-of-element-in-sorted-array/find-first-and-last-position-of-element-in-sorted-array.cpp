class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector <int> result;
        vector <bool> is_filled(2, false);
        result.push_back(-1);
        result.push_back(-1);
        int idx = 0;
        int count = 0;

        for (int i = 0; i < nums.size(); i++)   {
            if (nums[i] == target)  {
                if (!is_filled[0])   {
                    result[0] = i;
                    is_filled[0] = true;
                }   count++;
            }
        }   if (count > 1)  result[1] = result[0] + count - 1;
        else if (count == 1)    result[1] = result[0];
        return result;
    }
};