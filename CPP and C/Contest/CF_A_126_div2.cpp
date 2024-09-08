#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long int a[n];
        long long int b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        for (int i = 0; i < n; i++)
        {
            if (a[i] > b[i])
                swap(a[i], b[i]);
        }
        long long int sum = 0;
        for (int i = 0; i < n - 1; i++)
            sum += (abs(a[i] - a[i + 1]) + abs(b[i] - b[i + 1]));
        cout << sum << endl;
    }
}