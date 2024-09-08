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
    map<pair<int, int>, int> list;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        int count = 0;
        pair<int, int> p1;
        pair<int, int> p2;
        for (int j = 0; j < n; j++)
        {
            p1 = {x, a[j]};
            p2 = {a[j], x};
            if (list.count(p1))
            {
                auto a = list.find(p1);
                if (a->second == 1)
                    count++;
            }
            else
            {
                int ans = gcd(x, a[j]);
                if (ans == 1)
                    count++;
                list.insert({p1, ans});
                list.insert({p2, ans});
            }
        }
        cout << count << endl;
    }
}