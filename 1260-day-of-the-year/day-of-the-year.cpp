class Solution {
public:
    int dayOfYear(string date) {
        vector <int> days = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int yyyy = stoi (date.substr (0, 4));
        int mm = stoi (date.substr (5, 2));
        int dd = stoi (date.substr (8, 2));

        if ((yyyy % 400 == 0) || (yyyy % 4 == 0 && yyyy % 100 != 0))    days[1] = 29;

        for (int i = 0; i < mm - 1; i++)    {
            dd += days[i];
        }   return dd;
    }
};