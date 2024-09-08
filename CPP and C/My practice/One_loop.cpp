#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i = 1;
    int j = 10;
    int k = 1;
    while (i <= 19)
    {
        if (k >= 11)
        {
            // if (j == 0)
            //     break;
            cout << --j << " ";
        }
        else
            cout << k++ << " ";
        i++;
    }
}