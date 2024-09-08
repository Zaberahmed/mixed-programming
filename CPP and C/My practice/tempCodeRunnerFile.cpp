#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "exam is the most examexam of examlife";
    string r = "exam";

    int r_len = r.length();
    vector<int> locations;
    for (int i = 0; i < s.length() - r_len; i++)
    {
        if (s.substr(i, r_len) == r)
        {
            locations.push_back(i);
        }
    }
    queue<int> length;
    for (auto i = locations.begin(); i != locations.end(); i++)
    {
        if (*i + r_len == *(i + 1))
        {
            locations.erase(i + 1);
            i--;
        }
    }
    int k = 0;
    string ans;
    for (int i = 0; i < s.size(); i++)
    {
        if (k < locations.size() && i == locations[k++])
        {
            int p = i;
            while (s[p] != ' ')
            {
                p++;
            }
            ans += '_';
        }
    }
    queue<int> start;
    for (auto i : locations)
        start.push(i);

    for (int i = 0; i < s.size(); i++)
    {
        if (i == start.front())
        {

            ans += '_';
            start.pop();
            if (!start.empty())
                for (int j = i; j < start.front(); j++)
                {
                    ans += s[j];
                }
            else
                for (int j = i; j < s.size(); j++)
                {
                    ans += s[j];
                }
        }
    }
    cout << ans << endl;
}
