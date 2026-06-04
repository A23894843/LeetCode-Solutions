class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        
        for (char c : s)   if (isalnum(c))  str += tolower(static_cast<unsigned char> (c));
        
        s = str;
        
        int l = 0;
        int r = s.size() - 1;

        while (l < r)   {
            if (s[l] != s[r])   {
                return false;
            }   l++;
            r--;
        }   return true;
    }
};