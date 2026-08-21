class Solution {
public:
    string baseNeg2(int n) {
        string result;
        if (n == 0) result = to_string (0);

        while (n)   {
            int rem = n % (-2);
            n /= (-2);
            if (rem < 0)    rem += 2, n ++;
            result = to_string (rem) + result;
        }   
        return result;
    }
};