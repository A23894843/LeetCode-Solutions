class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)  return false;
        int rem, o_num;
        long long int ans = 0;
        o_num = x;
    
        while (x)   {
            rem = x % 10;
            ans = ans * 10 + rem;
            x /= 10;
        }   return (ans == o_num) ? true : false;
    }
};