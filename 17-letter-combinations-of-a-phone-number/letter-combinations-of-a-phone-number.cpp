class Solution {
    vector <string> combinations = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    vector <string> res;

    void solve (string& digits, int i, string current)    {
        if (i == digits.size()) {
            res.push_back (current); 
            return;
        }

        string letters = combinations[digits[i] - '0'];

        for (char c : letters)  {
            current.push_back (c);

            solve (digits, i + 1, current);

            current.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return res;

        solve (digits, 0, "");
        return res;
    }
};