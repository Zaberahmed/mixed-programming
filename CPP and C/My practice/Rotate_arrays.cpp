#include <bits/stdc++.h>
using namespace std;

int main()
{
    int nums[7] = {1, 2, 3, 4, 5, 6, 7};
    int ans[7] = {0};
    int k = 3;
    int len = sizeof(nums) / sizeof(nums[0]);

    for (int i = 0; i < len; i++)
    {
        ans[i] = nums[len - i - 1];
    }
    int l = 0, r = k - 1;
    while (l <= r)
    {
        int temp = 0;
        temp = ans[l];
        ans[l] = ans[r];
        ans[r] = temp;
        l++;
        r--;
    }
    int m = k, n = len - 1;
    while (m <= n)
    {
        int temp = 0;
        temp = ans[m];
        ans[m] = ans[n];
        ans[n] = temp;
        m++;
        n--;
    }
    vector<int> res;
    for (int i = 0; i < len; i++)
    {
        int x = 0;
        x = ans[i];
        res.push_back(x);
    }

    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
}
