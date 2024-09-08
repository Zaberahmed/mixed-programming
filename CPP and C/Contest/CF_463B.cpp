#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7;
int h[N];
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int result = 0;
    h[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> h[i];
        sum = sum + (h[i - 1] - h[i]);
        if (sum < 0)
        {
            result += abs(sum);
            sum = 0;
        }
    }
    cout << result << endl;
}