// Time Complexity->o(nlogn)
// Space complexity->o(n*w)
// Process->first i take input and create a cumalative sum array for the weights.
// then run a loop thrrought cumulative array to every time to find start and stop.
// sum the ways a team can be formed by adding start-end+1 each time.
#include <bits/stdc++.h>
using namespace std;

// void knapsack(int w[], int i, int x, int n)
// {
//     // thought this might be a knapsack problem then tried other ways.
// }
const int N = 1e5 + 10;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long long int n, m;
        cin >> n;
        cin >> m;
        long long int w[N];
        long long int csum[N];
        csum[0] = 0;
        for (long long int i = 1; i <= n; n++)
            cin >> w[i];
        for (long long int i = 1; i <= n; i++)
            csum[i] = w[i] + csum[i - 1];

        long long res = 0;
        for (long long int i = 1; i <= n; i++)
        {
            if (w[i] >= m)
                continue;
            int l = i;
            int r = n;
            int ans = 0;

            while (l <= r)
            {
                long long int mid = (l + r) / 2;
                if (mid == 0)
                    break;

                else if (csum[mid] - csum[i - 1] < m)
                {
                    ans = mid;
                    l = mid + 1;
                }
                else
                    r = mid - 1;
            }
            res += (ans - i + 1);
        }
        cout << res << endl;
    }
    return 0;
}