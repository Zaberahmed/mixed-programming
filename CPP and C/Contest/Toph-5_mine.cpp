#include <bits/stdc++.h>
using namespace std;

int main()
{
    // string s = "exam is the most examexam of examlife";
    // string r = "exam";
    // string s = "testthis is a testtest to see if it testestest";
    // string r = "test";

    string s;
    string r;
    getline(cin, s);
    getline(cin, r);
    int r_len = r.size();
    int s_len = s.size();
    deque<int> positions;
    for (int i = 0; i < s_len; i++)
    {
        if (s[i] == r[0])
        {
            string tmp = s.substr(i, r_len);
            if (r == tmp)
            {
                if (positions.empty())
                {
                    positions.emplace_back(i);
                    positions.emplace_back(i + r_len);
                }
                else if (!positions.empty() && positions.back() >= i)
                {
                    positions.pop_back();
                    positions.emplace_back(i + r_len);
                }
                else
                {
                    positions.emplace_back(i);
                    positions.emplace_back(i + r_len);
                }
            }
        }
    }
    // for (int i = 0; i < positions.size(); i++)
    //     cout << positions[i] << " ";
    // cout << endl;

    string ans = "";
    if (positions.empty())
        cout << s << endl;
    else
    {
        for (int i = 0; i < s_len; i++)
        {

            if (positions.front() == i)
            {
                // cout << positions.front() << endl;
                ans += '_';
                ans += s[i];
                positions.pop_front();
            }

            else
                ans += s[i];
        }
        if (!positions.empty())
            ans += '_';
        cout << ans << endl;
    }
    // string out = "this is a test to see if it works and test";
    // cout << ans.size() << " " << out.size() << endl;
    // cout << ans << endl;
    // if (ans.compare(s) == 0)
    //     cout << "Y";
}
