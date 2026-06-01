class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int size = nums.size();
        vector<vector<int>> result;
        vector<int> re;

        for (int i = 0; i < size - 2; i++)  {
            if (i > 0 && (nums[i] == nums[i - 1]))  continue;

            int j = i + 1;
            int k = size - 1;

            while (j < k)   {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum == 0)   {
                    re.push_back(nums[i]);
                    re.push_back(nums[j]);
                    re.push_back(nums[k]);

                    result.push_back(re);
                    re.erase(re.begin(), re.end());
                    j++;
                    k--;

                    while (j < k && (nums[j] == nums[j - 1]))  j++;
                }

                else if (sum < 0)   j++;
                else k--;
            }
        }   return result;
    }
};