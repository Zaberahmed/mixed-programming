#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    // sort(s.begin(), s.end());
    int len = s.length();
    // cout << len << endl;
    bool flag = true;
    while (flag)
    {
        flag = false;
        for (int i = 0; i < len - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                for (int j = i; j < len - 2; j++)
                {
                    s[j] = s[j + 2];
                }
                i--;
                s[len - 1] = 0;
                s[len - 2] = 0;
                len--;
                flag = true;
                // cout << len << " " << i << endl;
            }
        }
    }
    string ans = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 0)
            continue;
        else
            ans = ans + s[i];
    }
    if (ans.length() == 0)
        cout << "Empty String" << endl;
    else
        cout << ans << endl;
}