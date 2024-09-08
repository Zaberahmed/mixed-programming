#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int main()
{
    int n, q;
    cin >> n >> q;
    int a[n + 1];
    int dp[n + 1][n + 1];
    memset(dp, 0, sizeof(dp));
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (dp[x][a[j]] == 0)
            {
                dp[x][a[j]] = gcd(x, a[j]);
                dp[a[j]][x] = dp[x][a[j]];
                if (dp[x][a[j]] == 1)
                    count++;
            }
            else
            {
                if (dp[x][a[j]] == 1)
                    count++;
            }
        }
        cout << count << endl;
    }
}