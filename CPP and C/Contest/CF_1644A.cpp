#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int pos[6] = {0};

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'r')
                pos[0] = i;
            if (s[i] == 'R')
                pos[1] = i;
            if (s[i] == 'g')
                pos[2] = i;
            if (s[i] == 'G')
                pos[3] = i;
            if (s[i] == 'b')
                pos[4] = i;
            if (s[i] == 'B')
                pos[5] = i;
        }
        if ((pos[0] < pos[1]) && (pos[2] < pos[3]))
        {
            if (pos[4] < pos[5])
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;
    }
}
