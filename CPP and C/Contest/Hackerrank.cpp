#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> dictionary = {"hack", "rank", "klan"};
    vector<string> query = {"ahck", "kran"};

    int dic_sum[3] = {0};
    for (int i = 0; i < dictionary.size(); i++)
    {
        int sum = 0;
        for (int j = 0; j < dictionary[i].length(); j++)
        {
            sum += dictionary[i][j] - 0;
        }
        dic_sum[i] = sum;
    }
    int que_sum[2] = {0};
    for (int i = 0; i < query.size(); i++)
    {
        int sum = 0;
        for (int j = 0; j < query[i].length(); j++)
        {
            sum += query[i][j] - 0;
        }
        que_sum[i] = sum;
    }
    int count[2] = {0};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (que_sum[i] == dic_sum[j])
            {
                count[i]++;
                // cout << "YES" << endl;
            }
        }
    }
    for (int i = 0; i < 2; i++)
    {
        cout << count[i] << endl;
    }
}