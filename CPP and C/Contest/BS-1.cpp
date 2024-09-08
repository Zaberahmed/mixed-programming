// Time Complexity-> O(n^2)
// Space complexity->O(n);
// Process->I am taking input in a vector. Then use sorting. then reverse it.
// then finding out values
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    int k;
    vector<int> num;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        num.push_back(x);
    }
    sort(num.begin(), num.end());
    reverse(num.begin(), num.end());
    cout << num[k - 1] << endl;
}