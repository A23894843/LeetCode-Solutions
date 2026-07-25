class Solution {
public:
    bool isValid(string s) {
        stack <int> st;

        int i = 0;

        st.push(s[i]);
        for (i = 1; i < s.size(); i++)  {
            if (!st.empty() && st.top() == '(' && s[i] == ')') st.pop();
            else if (!st.empty() && st.top() == '[' && s[i] == ']')   st.pop();
            else if (!st.empty() && st.top() == '{' && s[i] == '}')   st.pop();
            else st.push(s[i]);
        }   return st.empty();
    }
};