#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> line;
    line.push(5);
    for (int i = 0; i < 5; i++)
    {
        int n;
        cin >> n;
        line.push(n);
    }

    while (!line.empty())
    {
        cout << line.back() << " ";
        line.pop();
    }
}
