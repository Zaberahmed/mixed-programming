#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, n;

    cin >> n >> num;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int low = 0;
    int high = n - 1;
    sort(a, a + n);
    bool found = false;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        // cout << mid << " " << low << " " << high << endl;
        if (a[mid] == num)
        {
            cout << "Found " << num << " at index " << mid << endl;
            found = true;
            break;
        }
        else if (a[mid] > num)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    if (!found)
        cout << "Not Found!" << endl;
}