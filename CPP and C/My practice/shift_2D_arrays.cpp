#include <bits/stdc++.h>
using namespace std;

void reverse(int num[], int start, int end)
{

    while (start < end)
    {
        int temp = num[start];
        num[start] = num[end];
        num[end] = temp;
        start++;
        end--;
    }
}
int main()
{
    vector<vector<int>> grid = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row = grid.size();
    int col = grid[0].size();
    int num[2500];
    int m = 0;
    int k = 4;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            num[m++] = grid[i][j];
        }
    }
    k = k % m;
    reverse(num, 0, m - 1);
    reverse(num, 0, k - 1);
    reverse(num, k, m - 1);

    int n = 0;
    vector<vector<int>> ans;

    for (int i = 0; i < row; i++)
    {
        vector<int> row;
        for (int j = 0; j < col; j++)
        {
            int x = num[n++];
            row.push_back(x);
        }
        ans.push_back(row);
    }
    // for (int i = 0; i < m; i++)
    // {
    //     cout << num[i] << ",";
    // }
}
