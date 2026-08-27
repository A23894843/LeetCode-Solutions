class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector <int> result;

        for (int i = num.size() - 1; i >= 0; i--)   {
            int sum = num[i] + k;
            result.push_back (sum % 10);
            k = sum / 10;
        }   while (k > 0)   {
            result.push_back (k % 10);
            k /= 10;
        }   reverse (result.begin(), result.end());
        return result;
    }
};