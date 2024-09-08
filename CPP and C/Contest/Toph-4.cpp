#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long int> div;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i == n / i)
            {
                div.push_back(i);
            }
            else
            {
                div.push_back(i);
                div.push_back(n / i);
            }
        }
    }

    const int m = 1e5;
    vector<long long int> count(m, 0);

    for (int i = 0; i < div.size(); i++)
    {
        long long int c = 0;
        long long int temp = div[i];
        while (temp >= 1)
        {
            if (temp % 2 == 1)
                c++;
            temp = temp >> 1;
        }
        count[c]++;
    }
    sort(count.begin(), count.end());
    cout << count[count.size() - 1] << endl;
    // int ans = 1;
    // int max = -1;
    // for (int i = 0; i < count.size() - 1; i++)
    // {
    //     if (count[i] == count[i + 1])
    //     {
    //         ans++;
    //     }
    //     else
    //     {
    //         ans = 1;
    //     }
    //     if (ans > max)
    //         max = ans;
    // }
    // cout << max << endl;
}