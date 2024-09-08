// Time Complexity->o(nlogn)
// Space complexity->o(n*w)
// Process->first i take input and create a cumalative sum array for the weights.
// then run a loop thrrought cumulative array to every time to find start and stop.
// sum the ways a team can be formed by adding start-end+1 each time.
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int w[N];
        int csum[N];
        csum[0] = 0;
        for (int i = 1; i <= n; i++)
            cin >> w[i];
        for (int i = 1; i <= n; i++)
            csum[i] = csum[i - 1] + w[i];
        long long res = 0;
        for (int i = 1; i <= n; i++)
        {
            int l = i;
            int r = n;
            int ans = i;
            if (w[i] >= x)
                continue;
            else
            {
                while (l <= r)
                {
                    int mid = (l + r) / 2;
                    if (csum[mid] - csum[i - 1] < x)
                    {
                        ans = mid;
                        l = mid + 1;
                    }
                    else
                        r = mid - 1;
                }
                res += (ans - i + 1);
            }
        }
        cout << res << endl;
    }
}