#include <bits/stdc++.h>
using namespace std;

void greatest_element(int arr[5], int x)
{
    for (int i = 0; i < x;i++){
        int next = -1;
        for (int j = i + 1; j < x;j++){
            if(arr[i]<arr[j]){
                next = arr[j];
                break;
            }
        }
        cout << next << " ";
        }
}
int main()
{
    int arr[5] = {36, 13, 45, 7, 9};
    int l = sizeof(arr) / sizeof(arr[0]);
    greatest_element(arr, l);
}