#include <bits/stdc++.h>
using namespace std;
int mul = 1;
void product(int x)
{
    if (x == 0)
        return;
    int mod = x % 10;
    mul = mul * mod;
    x = x / 10;

    product(x);
}
int main()
{
    int n = 4521;
    product(n);
    cout << mul << endl;
}