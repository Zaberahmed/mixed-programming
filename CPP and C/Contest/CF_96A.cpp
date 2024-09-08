#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int count;
    int i, j;
    int flag = 0;
    for (i = 0; i < s.length(); i++)
    {
        count = 0;
        for (j = i; j < s.length(); j++)
        {
            if (s[i] == s[j])
            {
                count++;
                if (count == 7)
                {
                    cout << "YES" << endl;
                    flag = 1;
                    break;
                }
            }
            else
                break;
        }
        if (flag == 1)
            break;
    }
    if (flag == 0)
        cout << "NO" << endl;
}