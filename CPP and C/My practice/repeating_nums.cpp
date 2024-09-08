#include <bits/stdc++.h>
using namespace std;

int main()
{
    int nums[10];
    int hash[101] = {0};

    for (int i = 0; i < 10; i++)
    {
        cin >> nums[i];
        hash[nums[i]]++;
        // cout << i << " " << nums[i] << " " << hash[nums[i]] << endl;
    }
    for (int i = 0; i <= 100; i++)
    {
        if (hash[i] > 1)
            cout << i << " ";
    }
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << hash[i] << endl;
    // }
}