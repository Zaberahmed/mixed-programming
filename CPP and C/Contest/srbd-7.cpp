#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    int a[n + 1];
    int level[n + 1];
    memset(level, 0, sizeof(level));
    for (int i = 0; i < n; i++)
        cin >> a[i];
    set<int> team;
    while (q--)
    {
        int ans = 0;
        int x;
        cin >> x;

        if (x == 1)
        {
            int p, q;
            cin >> p >> q;
            team.insert(p);
            transaction_safe_dynamic.insert(q);
        }
        if (x == 2)
        {
            int p;
            cin >> p;
            level[p]++;
        }
        if (x == 3)
        {
            int p;
            cin >> p;
            for (int t : team)
            {
                if (level[t] >= ans)
                {
                    ans = level[t];
                    res = t;
                }
            }
        }
    }
}