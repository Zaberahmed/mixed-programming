#include <bits/stdc++.h>
using namespace std;
void reverse(int nums[], int start, int end)
{
    int l = start;
    int r = end;
    while (l <= r)
    {
        int temp = nums[l];
        nums[l] = nums[r];
        nums[r] = temp;
        l++;
        r--;
    }
}
int main()
{
    int nums[7] = {1, 2, 3, 4, 5, 6, 7};
    int len = *(&nums + 1) - nums; // len=sizeof(nums)/sizeof(nums[0]);
    int k = 3 % len;

    reverse(nums, 0, len - 1);
    reverse(nums, 0, k - 1);
    reverse(nums, k, len - 1);
    for (int i = 0; i < len; i++)
    {
        cout << nums[i] << " ";
    }
}