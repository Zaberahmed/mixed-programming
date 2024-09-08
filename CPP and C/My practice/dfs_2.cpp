#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10; //// this approach saves the connection of edges in an array of
// integer vectors.
//  connection between nodes is taken as inputs.
vector<int> graph[N];
bool vis[N];
void dfs(int vertex)
{
    // 1-take action on the vertex/parent node after entering the vertex.
    cout << vertex << endl;
    vis[vertex] = true;
    for (int i = 0; i < graph[vertex].size(); i++)
    {

        int child = graph[vertex][i];
        // 2-take action on child node before entering the child node.
        cout << "Node " << vertex << " is connected to " << child << endl;
        if (vis[child])
            continue;

        dfs(child);
        // 3-take action on child node after exiting the child node.
    }
    // 4-take action on the vertex/parent node before exiting the vertex.
}

int main()
{
    int n, e;
    cin >> n >> e;
    for (int i = 0; i < e; i++)
    {
        int n1, n2;
        cin >> n1 >> n2;
        graph[n1].push_back(n2);
        graph[n2].push_back(n1);
    }
    dfs(1);
}