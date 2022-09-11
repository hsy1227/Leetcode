#include <iostream>
using namespace std;

class Solution
{
public:
    string longestPalindrome(string s)
    {
        if (s.length() == 1)
            return s;
        int length = s.length();
        int maxLength = 0, ResultLength = 1, start = 0;
        for (int i = 0; i < length; i++)
        {
            int oddResult = FindCenter(s, i, i);
            int evenResult = FindCenter(s, i, i + 1);
            maxLength = max(oddResult, evenResult);
            if (maxLength > ResultLength)
            {
                ResultLength = maxLength;
                start = i - (ResultLength - 1) / 2;
            }
        }
        return s.substr(start, ResultLength);
    }
    int FindCenter(const string &s, int L, int R)
    {
        while (L >= 0 && R < s.length() && s[L] == s[R])
        {
            --L;
            ++R;
        }
        return R - L - 1;
    }
};