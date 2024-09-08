// Time Complexity->o(n^2)
// Space complexity->o(n)
// Process->First I take input of the string. then I input the queries.
// if query is type-1 then i change the letter.
// if query if type-2 then i go through the string to match the substring.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int z;

    cin >> s;
    cin >> z;

    for (int i = 0; i < z; i++)
    {
        char o;
        cin >> o;

        if (o == '1')
        {
            char y;
            int p;
            cin >> p;
            cin >> y;

            s[p - 1] = y;
        }
        else if (o == '2')
        {

            int m, n;
            cin >> m;
            cin >> n;
            string q;
            cin >> q;

            int len = q.length();

            int count = 0;
            for (int i = m; i <= n - len + 1; i++)
            {
                if (s.substr(i - 1, len) == q)
                    count++;
            }
            cout << count << endl;
        }
    }
}