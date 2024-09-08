#include <bits/stdc++.h>
using namespace std;
void check(vector<vector<int>> &cell, int a, int b, int m, int n)
{
    if (a < 0 || a > m)
        return;
    if (b < 0 || b > n)
        return;

    if (cell[a][b] == 1 && (a != 0 || b != 0))
        return;
    // else if (cell[a][b] == -1)
    // {
    //     check(cell, a + 1, b, m, n);
    //     check(cell, a - 1, b, m, n);
    //     check(cell, a, b + 1, m, n);
    //     check(cell, a, b - 1, m, n);
    // }
    else
    {

        check(cell, a + 1, b, m, n);
        check(cell, a - 1, b, m, n);
        check(cell, a, b + 1, m, n);
        check(cell, a, b - 1, m, n);
        cell[a][b] = -1;
    }
}
int main()
{
    int m = 4, n = 6;

    vector<vector<int>> guards = {{0, 0}, {1, 1}, {2, 3}};
    vector<vector<int>> walls = {{0, 1}, {2, 2}, {1, 4}};
    vector<vector<int>> cell;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; i++)
        {
            // if (cell[i][j] == 0)
            //     count++;
            cell[i].push_back(0);
        }
    }

    // int i = 0;
    // while (i < guards.size())
    // {
    //     cell[guards[i][0]][guards[i][1]] = -1;
    //     i++;
    // }
    // int j = 0;
    // while (j < walls.size())
    // {
    //     cell[walls[j][0]][walls[j][1]] = 1;
    //     j++;
    // }
    // check(cell, 0, 0, m, n);
    int count = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; i++)
        {
            // if (cell[i][j] == 0)
            //     count++;
            cout << cell[i][j] << " ";
        }
        cout << endl;
    }
    cout << count << endl;
}