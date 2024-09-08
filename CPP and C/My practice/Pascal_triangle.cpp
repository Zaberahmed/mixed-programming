#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 6;
    // cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int star = n - i - 1; star > 0; star--)
        {
            cout << "*";
        }
        int ans = 1;
        for (int j = 0; j <= i; j++)
        {
            if (j == 0)
                ans = 1;
            else
                ans = ans * (i - j + 1) / j;
            if (j == i)
                cout << ans;
            else if (j < i)
                cout << ans << "*";
        }
        cout << endl;
    }
}
