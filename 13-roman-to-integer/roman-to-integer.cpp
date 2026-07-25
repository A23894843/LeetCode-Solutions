class Solution {
public:
    int romanToInt(string s) {
        map <char, int> roman = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, 
        {'M', 1000}};

        int num = 0;
        int i = 0;
        bool islastincluded = false;

        while(i < s.size() - 1) {
            if (roman[s[i]] >= roman[s[i + 1]]) {
                num += roman[s[i]];
            }   else    {
                num += roman[s[i+1]] - roman[s[i]];
                if (i == s.size() - 2)  islastincluded = true;
                i++;
            }   i++;
        }   if (!islastincluded) {
            num += roman[s[s.size() - 1]];
        }   return num;
    }
};