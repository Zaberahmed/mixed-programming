#include <bits/stdc++.h>
using namespace std;

const int N = 3;

void dfs(int edges[N][N], int key) // this approach saves the connection of edges in 2D matrix.
// connection between nodes is represented as value 1.
{
    int parent = key;
    int child;

    for (int j = 0; j < N; j++)
    {

        if (edges[key][j] == 1)
        {

            child = j;
            cout << parent << " is the parent node of child " << child << endl;
            // parent = child;
            dfs(edges, child);
        }
    }
    cout << "The parent node is not connected not any other nodes." << endl;
}
/* We have taken input by assigning 0 and 1.
If two edges are connected then value of the 2D matrix will be 1. If not then, 1.*/
int main()
{
    int edges[N][N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> edges[i][j];
        }
    }
    int key = 2;
    dfs(edges, key);
}
