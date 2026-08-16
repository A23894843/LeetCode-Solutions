class Solution {
    bool isPrime (int n)    {
        if (n <= 1) return false;
        if (n == 2) return true;
        if (n % 2 == 0) return false;

        int boundary = sqrt (n);

        for (int i = 3; i <= boundary; i += 2)  {
            if (n % i == 0) return false;
        }   return true;
    }

public:
    int maximumPrimeDifference(vector<int>& nums) {
        vector <int> indices;

        for (int i = 0; i < nums.size(); i++)   {
            if (isPrime(nums[i]))    indices.push_back(i);
        }   return indices [indices.size() - 1] - indices[0];
    }
};