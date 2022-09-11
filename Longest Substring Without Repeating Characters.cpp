#include <iostream>
#include <map>
using namespace std;

int main(string s)
{
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        map<int, int> record;
        int j = i, count = 0;
        while (j < s.size())
        {
            record[s[j]]++;
            if (record[s[j]] > 1)
            {
                break;
            }
            j++, count++;
        }
        ans = max(ans, count);
    }

    return ans;
}