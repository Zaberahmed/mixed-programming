#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    bool prime[1000001];
    memset(prime, true, sizeof(prime));

    for (int i = 2; i * i <= 1000000; i++)
    {
        if (prime[i] == true)
        {
            for (int j = i * i; j <= 1000000; j += i)
                prime[j] = false;
        }
    }

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int count = 0;
        for (int i = n; i <= m; i++)
        {
            if (i == 1)
                continue;
            if (prime[i] == true)
                count++;
        }
        cout << count << endl;
    }
}