#include <bits/stdc++.h>
using namespace std;

void reverse(string &s, int x, int y)
{
    while (x <= y)
    {
        char temp = s[x];
        s[x] = s[y];
        s[y] = temp;
        x++;
        y--;
    }
}
int main()
{
    string s = "abcde";
    string g = "cdeab";

    int len = s.length();
    int k = 1;
    for (int i = 0; i < len; i++)
    {

        reverse(s, 0, len - 1);
        reverse(s, 0, k - 1);
        reverse(s, k, len - 1);
        // if (s == g)
        // {
        //     cout << "True" << endl;
        //     break;
        // }
        cout << s << endl;
    }
}
