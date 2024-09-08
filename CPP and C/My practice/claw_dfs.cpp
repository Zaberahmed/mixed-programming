#include <bits/stdc++.h>
using namespace std;
const int N = 2000;

bool is_claw(vector<int> nodes[], int v, bool vis[], vector<int> color)
{
    for (int i : nodes[v]) // for all child of the current node
    {
        if (vis[i] == false) // if not visited
        {
            vis[i] = true;
            color[i] = !color[v]; // inverting the color from parent node
            // cout << "IF: " << i << " " << v << " " << color[i] << " " << color[v] << endl;
            if (is_claw(nodes, i, vis, color) == true) // recursion->if child node returns false we end it right here.
                return true;
            // return is_claw(nodes, i, vis, color);// it returns value to soon.
        }
        else if (color[i] == color[v]) // if node is visited again then colors will match
        {
            // cout << "ELSE IF: " << i << " " << v << " " << color[i] << " " << color[v] << endl;

            return false;
        }
    }
    return true; // if the loop is successfully completed then return true
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int v;
    while (cin >> v) // taking input of vertices
    {
        if (v == 0)
            break;

        bool vis[N];                     // declaring visited array
        memset(vis, false, sizeof(vis)); // setting values to false each time

        vector<int> color(N); // declaring the color vector each time
        vector<int> nodes[N]; // declaring the nodes vector of array each time

        int x, y;

        while (cin >> x >> y) // taking edge value between two nodes
        {
            if (x == 0 && y == 0)
                break;
            nodes[x].push_back(y); // connecting two nodes (vice versa)
            nodes[y].push_back(x); // for example 1 with 2 and 2 with 1
        }
        vis[1] = true; // setting it true so that it doesn't traverse in 1 again.
        color[1] = 1;  // setting the color of the starting node.

        if (is_claw(nodes, 1, vis, color) == true) // calling the dfs
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}