#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
vector<int> graph[N];
// bool vis[N];
int ans = 0;
int dfs(int x, int y)
{
    if (x == y) // base case
        return ans = x;

    // 1-take action on the vertex/parent node after entering the vertex.
    for (auto i : graph[x])
    {
        // 2-take action on child node before entering the child node.

        // vis[x] = true;
        if (i == y)
            return i;

        for (auto j : graph[y])
        {
            // 2-take action on child node before entering the child node.'

            // vis[y] = true;
            if (j == x)
                return j;

            return dfs(i, j);
            // 3-take action on child node after exiting the child node.
        }
        // 3-take action on child node after exiting the child node.
    }
    // 4-take action on the vertex/parent node before exiting the vertex.

    return ans; // returning a default value;
}

int main()
{
    int n, e;
    cin >> n >> e;
    for (int i = 0; i < e; i++)
    {
        int n1, n2;
        cin >> n1 >> n2;
        // graph[n1].push_back(n2);
        //  graph[n2].push_back(n2);

        graph[n2].push_back(n1);
        graph[n1].push_back(n1);
    }
    cout << "Enter two nodes: ";
    int a, b;
    cin >> a >> b;
    cout << dfs(a, b) << endl;
    // cout << graph[2][0] << graph[2][1] << endl;
    // cout << graph[6][0] << graph[6][1] << endl;
}