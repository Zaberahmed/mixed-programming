#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> numbers[3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            numbers[i].push_back(j);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << numbers[i][j];
        }
        cout << endl;
    }
}