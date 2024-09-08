#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string s;

        cin >> s;
        int count = 0;
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] == '1')
                continue;

            if (s[i] == '0' && s[i + 1] == '0')
                count += 2;
            else if (i < n - 2 && s[i + 1] == '1' && s[i + 2] == '0')
                count++;
        }
        cout << count << endl;
    }
}