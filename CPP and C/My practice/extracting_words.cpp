#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "My name is sk. zaber ahmed";
    vector<string> words;
    string r = "";
    for (int i = 0; i <= s.length(); i++)
    {

        if (s[i] == ' ' || i == s.length())
            words.push_back(r), r = "";
        else
            r += s[i];
    }
    cout << words.size() << endl;
    for (int i = 0; i < words.size(); i++)
        cout << words[i] << " ";
    cout << endl;
    for (int i = 0; i < words.size(); i++)
        cout << words[i].length() << "\t";
}