#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string> entry;
    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        entry.push_back(temp);
    }
    int count = 0;
    for (int i = 0; i < entry.size() - 1; i++)
    {
        if (entry[i] == "In")

        {
            // cout << "y"<< " ";
            for (int j = i + 1; j < entry.size(); j++)
            {
                if (entry[j] == "Out")
                {
                    i = j;

                    count++;
                    break;
                    // cout << i << " " << j << endl;
                }
            }
        }
        else
            continue;
    }
    cout << count << endl;
}