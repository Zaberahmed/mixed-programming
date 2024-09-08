#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mp;

    for (int i = 0; i < 3; i++)
    {
        string s;
        int n;
        cin >> s >> n;
        mp.insert({s, n});
    }
    cout << mp.size() << endl;
    for (auto i : mp)
    {
        cout << i.first << " " << i.second << endl;
    }
    auto &a=mp;
    if(a.find("zaber")!=a.end()) cout<<"Found"<<endl;
    else cout<<"Not Found"<<endl;

}