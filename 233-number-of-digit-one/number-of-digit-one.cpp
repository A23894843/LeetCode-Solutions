class Solution {
public:
    int countDigitOne(int n) {
        int ans = 0;
        if (n == 0) return 0;

        for (long long int i = 1; i <= n; i *= (long long int) 10) {
            int a = n / i;
            int b = n % i;
            int c = a % 10;
            if (c == 1) ans += (a / 10) * i + (b + 1);
            else if (c == 0)    ans += (a / 10) * i;
            else    ans += (a / 10 + 1) * i;
        }   return ans;
    }
};