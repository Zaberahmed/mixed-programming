#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for (int i = n; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            cout << "*";
        }

        for (int j = 0; j < n - i; j++)
        {
            cout << "  ";
        }
        for (int k = i; k > 0; k--)
        {
            cout << "*";
        }

        cout << endl;
    }
 

    for (int i = 0; i < n; i++)
    {

        for (int k = 0; k <= i; k++)
        {
            cout << "*";
        }
        for (int j = n - i - 1; j > 0; j--)
        {
            cout << "  ";
        }
        for (int k = 0; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}