#include <bits/stdc++.h>
using namespace std;

int main()
{
    int input[5] = {-2, -1, 0, 1, 2};
    int output[5] = {0};
    int l = 0;
    int r = 4;
    int i = 5;
    for (int i = 4; i >= 0; i--)
    {

        if (input[l] * input[l] > input[r] * input[r])
        {
            output[i] = input[l] * input[l];
            // cout << output[i] << " ";
            l++;
        }
        else if (input[l] * input[l] <= input[r] * input[r])
        {
            output[i] = input[r] * input[r];
            // cout << output[i] << " ";
            r--;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cout << output[i] << " ";
    }
}