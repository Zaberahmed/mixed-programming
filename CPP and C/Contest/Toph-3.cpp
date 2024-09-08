#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int sum = 0;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = n - i; j > 0; j--)
        {
            cout << "  ";
        }
        for (int k = i; k > 0; k--)
        {
            cout << k << " ";
            if (i == n)
                sum += k;
        }
        for (int l = 0; l <= i; l++)
        {
            cout << l << " ";
            if (i == n)
                sum += l;
        }
        cout << endl;
    }
    cout << "Sum of last row: " << sum << endl;
}