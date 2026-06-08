class Solution {
    void swap(char& x, char& y) {
        char temp = x;
        x = y;
        y = temp;
    }
public:
    void reverseString(vector<char>& s) {
        int l = 0;
        int r = s.size() - 1;

        while (l < r)   {
            swap(s[l], s[r]);
            l++;
            r--;
        }
    }
};