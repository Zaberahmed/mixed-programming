#include <bits/stdc++.h>
using namespace std;

int main()
{
    string w[3];
    w[0] = "zaber";
    w[1] = "loves";
    w[2] = "taimee";
    cout << w[2][2] << endl;
     vector<string> names;
    string s;
    for (int i = 0; i < 3; i++)
    {
        cin >> s;
        names.push_back(s);
        int l = s.length();
        cout << l << endl;
    }
    for (int i = 0; i < names.size();i++){
        cout << names[i] << endl;
    } 
}