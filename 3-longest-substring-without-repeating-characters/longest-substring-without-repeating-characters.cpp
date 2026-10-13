class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max_len = 0;

        for (int i = 0; i < s.length(); i++) {
            string temp = "";

            for (int j = i; j < s.length(); j++) {
                char ch = s[j];

                if (temp.find(ch) == string::npos) {
                    temp += ch;
                } else {
                    break;
                }
            }

            if (temp.length() > max_len) {
                max_len = temp.length();
            }
        }

        return max_len;
    }
};