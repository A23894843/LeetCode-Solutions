class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector <int> result;

        for (int i = left; i <= right; i++) {
            bool valid = true;
            int n = i;

            while (n != 0)  {
                int rem = n % 10;
                
                if (rem == 0 || i % rem != 0)   {
                    valid = false;
                    break;
                }   n /= 10;
            }   if (valid)  result.push_back (i);
        }   return result;
    }
};