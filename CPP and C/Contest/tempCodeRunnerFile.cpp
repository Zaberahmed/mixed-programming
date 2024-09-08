#include <bits/stdc++.h>
using namespace std;

int biggest(int x, int y, int z)
{
    if (x > y)
    {
        if (x > z)
            return x;
        else
            return z;
    }
    else
    {
        if (y > z)
            return y;
        else
            return z;
    }
}

int main()
{
    queue<int> s1;
    queue<int> s2;
    queue<int> s3;
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    int sum1 = 0;
    int sum2 = 0;
    int sum3 = 0;
    for (int i = 0; i < n1; i++)
    {
        int x;
        cin >> x;
        sum1 += x;
        s1.push(x);
    }
    for (int i = 0; i < n2; i++)
    {
        int x;
        cin >> x;
        sum2 += x;
        s2.push(x);
    }
    for (int i = 0; i < n3; i++)
    {
        int x;
        cin >> x;
        sum3 += x;
        s3.push(x);
    }
    while (sum1 != sum2 && sum2 != sum3 && sum1 != sum3)
    {
        cout << sum1 << " " << sum2 << " " << sum3;
        if (sum1 == biggest(sum1, sum2, sum3))
        {
            sum1 -= s1.front();
            s1.pop();
        }
        else if (sum2 == biggest(sum1, sum2, sum3))
        {
            sum2 -= s2.front();
            s2.pop();
        }
        else if (sum3 == biggest(sum1, sum2, sum3))
        {
            sum3 -= s3.front();
            s3.pop();
        }
    }
    cout << sum1 << endl;
}
