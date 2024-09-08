#include <bits/stdc++.h>
using namespace std;

int main()
{
    int nums[8] = {1, 0, 2, -4, 0, 5, 0, 11};
    int len = *(&nums + 1) - nums;
    for (int i = 0; i < len; i++)
    {
        if (nums[i] == 0)
        {
            for (int j = i; j < len - 1; j++)
            {
                nums[j] = nums[j + 1];
            }
            nums[len - 1] = 0;
        }
    }
    for (int i = 0; i < len; i++)
    {
        cout << nums[i] << " ";
    }
}