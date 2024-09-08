#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<char> q;
    string s;
    getline(cin, s);
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'S' || s[i] == 's')
            q.push(s[i]);
        else if (s[i] == 'a' || s[i] == 'A')
            q.push(s[i]);
        else if (s[i] == 'm' || s[i] == 'M')
            q.push(s[i]);
        else if (s[i] == 's' || s[i] == 'S')
            q.push(s[i]);
        else if (s[i] == 'u' || s[i] == 'U')
            q.push(s[i]);
        else if (s[i] == 'n' || s[i] == 'N')
            q.push(s[i]);
        else if (s[i] == 'g' || s[i] == 'G')
            q.push(s[i]);
        if (q.size() == 7)
            break;
    }
    string ans;
    while (!q.empty())
    {
        ans += q.front();
        q.pop();
    }
    if (ans == "Samsung")
        cout << "SRBD" << endl;
    else
        cout << "GHOST" << endl;
}