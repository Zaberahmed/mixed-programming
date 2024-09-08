#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> ans;
    vector<int> nums;
    nums.push_back(33);
    nums.push_back(100);
    ans.push_back(nums);
    ans[0].push_back({66});
    ans[0].push_back({200});
    cout << ans[0].size() << endl;
    for (int i = 0; i < ans[0].size(); i++)
    {
        cout << ans[0][i] << " ";
    }
}