#include <bits/stdc++.h>
using namespace std;

void reverse_print(string s)
{
    if (s.length() == 0)
        return;
    int len = s.length();
    cout << s[len - 1];
    len--;
    string n = s.substr(0, len);
    reverse_print(n);
    // cout << n << endl;
}
int main()
{
    string s = "zaber";
    // cin >> s;
    reverse_print(s);
}