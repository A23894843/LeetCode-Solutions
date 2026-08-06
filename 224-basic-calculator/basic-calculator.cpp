class Solution {
public:
    int calculate(string s) {
        long long num = 0;
        long long ans = 0;
        int op = 1;
        stack <int> stack {{op}};

        for (const char c : s)  {
            if (isdigit(c)) num = num * 10 + (c - '0');
            else if (c == '(')  stack.push(op);
            else if (c == ')')  stack.pop();
            else if (c == '+' || c == '-')  {
                ans += op * num;
                op = (c == '+' ? 1 : -1) * stack.top();
                num = 0;
            }
        }   return ans + op * num;
    }
};