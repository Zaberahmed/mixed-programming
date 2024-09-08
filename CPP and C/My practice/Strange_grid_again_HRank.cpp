#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long r, c;
    cin >> r >> c;
    if (r % 2 == 0)
    {                                            // For odd numbers
        long long int n = ((r - 1) / 2) * 5 + c; // Figuring out the nth odd number.
        cout << 2 * n - 1 << endl;
    }
    else
    {                                            // For even numbers
        long long int n = ((r - 1) / 2) * 5 + c; // Figuring out the nth even number.

        cout << 2 * n - 2 << endl;
    }
}