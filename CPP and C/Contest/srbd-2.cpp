#include <bits/stdc++.h>
using namespace std;
int min(int x, int y)
{
    if (x > y)
        return y;
    else
        return x;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int w, h;
        cin >> w >> h;
        int x, y;
        int ans = 0;
        // int p, q = 0;
        if (w % 3 == 0 && h % 3 == 0)
        {
            ans = (w / 3) * (h / 3);
        }
        else if (w % 3 != 0 && h % 3 == 0)
        {
            x = (w / 3) + 1;
            y = h / 3;
            ans = x * y + min((w % 3), (h % 3));
        }
        else if (w % 3 == 0 && h % 3 != 0)
        {
            x = (w / 3);
            y = (h / 3) + 1;
            ans = x * y + min((w % 3), (h % 3));
        }
        else
        {
            x = (w / 3) + 1;
            y = (h / 3) + 1;
            ans = x * y + min((w % 3), (h % 3));
        }
        cout << ans << endl;
    }
}