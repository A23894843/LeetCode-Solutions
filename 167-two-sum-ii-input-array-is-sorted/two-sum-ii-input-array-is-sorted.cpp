class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int size = numbers.size();
        vector <int> result;
        int l = 0;
        int r = size - 1;
        int sum = numbers[l] + numbers[r];
      
        while (l < r)   {
            sum = numbers[l] + numbers[r];
            if (sum < target)   l++;
            else if (sum > target)   r--;
            else    {
                result.push_back(++l);
                result.push_back(++r);
                break;
            }
        }   return result;
    }
};