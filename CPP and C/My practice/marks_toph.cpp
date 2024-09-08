#include <bits/stdc++.h>
using namespace std;

vector<int> a, b;

int b_search(int x)
{

    int l = 0;
    int r = b.size() - 1;
    int ans = -1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (b[mid] == x)
            ans = mid;
        else if (b[mid] > x)
            r = mid - 1;
        else
            l = mid;
    }

    return ans;
}
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        a.push_back(temp);
    }
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        b.push_back(temp);
    }
    int count = 0;
    int index = -1;

    for (int i = 0; i < n; i++)
    {

        index = b_search(a[i]);
        cout << index << endl;
        // if (index >= i && index <= n - 1)
        //     count++;
    }
    // cout << count << endl;
}