#include <bits/stdc++.h>
using namespace std;

int main()
{
    // priority_queue<int> pq;

    // // cout << pq.top() << endl;
    // pq.push(23);
    // pq.push(33);
    // pq.push(43);
    // pq.push(13);
    // pq.emplace(3);
    // // pq.pop();

    // cout << pq.size() << endl;

    // while (!pq.empty())
    // {
    //     pq.pop();
    //     int x = pq.top();
    //     cout << x << ",";
    // }
    // cout << "\n"
    //      << pq.size() << "\n";

    vector<int> num = {1, 2, 3, 4, 5};
    priority_queue<int> pq;

    int len = num.size();
    cout << pq.size() << endl;
    for (int i = 0; i < len; i++)
    {
        int x = num[i];
        pq.push(x);
    }
    cout << pq.size() << endl;

    while (!pq.empty())
    {

        int t = pq.top();
        pq.pop();
        cout << t << ",";
    }
}