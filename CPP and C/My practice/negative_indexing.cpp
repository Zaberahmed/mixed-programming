#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3];
    int len = sizeof(arr) / sizeof(arr[0]);
    cout << len << endl;
    int size = *(&arr + 1) - arr;
    cout << size << endl;

    for (int i = -5; i < size; i++)
    {
        cin >> arr[i];
        cout << arr[i] << endl;
    }
}