#include <bits/stdc++.h>
using namespace std;
int numOfOnes(int x)
{
    return __builtin_popcount(x);
}
int main()
{
    int n;
    cin >> n;
    vector<long long int> div;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i != n / i)
            {
                div.push_back(i);
                div.push_back(n / i);
            }
            else
                div.push_back(i);
        }
    }

    const int m = 1e5;
    vector<long long int> count(m, 0);

    for (int i = 0; i < div.size(); i++)
    {
        int c = numOfOnes(div[i]);
        count[c]++;
    }

    sort(count.begin(), count.end());
    cout << count[count.size() - 1] << endl;
}

// #include <bits/stdc++.h>
// using namespace std;
// int numOfOnes(int x)
// {
//     return __builtin_popcount(x);
// }
// int main()
// {
//     cout << numOfOnes(15) << endl;
// }
