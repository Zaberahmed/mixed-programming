#include <bits/stdc++.h>
using namespace std;
struct student
{
    char name[20];
    int roll;
    string dept;
    map<string, int> result;
};
int main()
{
    student s1;
    cin.get(s1.name, 20);
    s1.roll = 33;
    s1.dept = "cse";
    // s1.result.insert({"Bangla", 70});
    // s1.result.insert({"English", 75});
    for (int i = 0; i < 5; i++)
    {
        string s;
        int num;
        cin >> s >> num;
        s1.result.insert({s, num});
    }

    cout << s1.name << endl;
    cout << s1.roll << endl;
    cout << s1.dept << endl;

    for (auto i = s1.result.begin(); i != s1.result.end(); i++)
    {
        cout << i->first << " " << i->second << endl;
    }
}