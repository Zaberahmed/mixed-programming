#include <bits/stdc++.h>
using namespace std;
int arr[5] = {4, 3, 5, 1, 2};

int main()
{
    int n;
    n = 5;

    bool swap = true;
    while (swap)
    {
        swap = false;
        int temp;
        for (int i = 1; i < n; i++)
        {

            if (arr[i - 1] > arr[i])
            {
                temp = arr[i];
                arr[i] = arr[i - 1];
                arr[i - 1] = temp;
                swap = true;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}