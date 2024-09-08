#include <bits/stdc++.h>
using namespace std;
int arr[5] = {1, 2, 3, 4, 5};
int b_search(int val)
{
    int l = 0;
    int r = 4;
    int ans = -1;

    while (l <= r)
    {
        int mid = (r + l) / 2;
        if (arr[mid] == val)
            return mid;
        else if (arr[mid] > val)
            r = mid - 1;
        else
            l = mid + 1;
    }
    cout << "Reached End!!" << endl;
    return ans;
}
int main()
{
    cout << "Found at index: "<<b_search(3) << endl;
}