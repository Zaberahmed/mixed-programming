#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<pair<int, int>, bool> mp;
    // mp[{1, 1}] = 1;
    // mp[{2, 2}] = 2;
    // mp[{3, 3}] = 3;
    // mp[{4, 4}] = 4;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
                mp[{i, j}] = false;
            else
                mp[{i, j}] = true;
        }
    }
    for (auto &i : mp)
    {
        auto j = i.first;
        cout << j.first << " " << j.second << " " << i.second << endl;
    }
}
