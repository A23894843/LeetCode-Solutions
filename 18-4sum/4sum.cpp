class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector <vector <int>> result;
        sort (nums.begin(), nums.end());
        set <vector <int>> set;
        for (int i = 0; i < nums.size(); i++)    {
            for (int j = i + 1; j < nums.size(); j++)   {
                long long tar = (long long) target - (long long) nums[i] - (long long) nums[j];
                int low = j + 1;
                int high = nums.size() - 1;

                while (low < high)  {
                    if (nums[low] + nums[high] < tar)   low++;
                    else if (nums[low] + nums[high] > tar)  high--;
                    else    
                    {
                        set.insert ({nums[i], nums[j], nums[low], nums[high]});
                        low++;
                        high--;
                    }
                }
            }
        }   for (auto it : set) result.push_back (it);
        return result;
    }
};