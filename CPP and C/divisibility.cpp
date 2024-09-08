#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n;
        long long int sum=0;
        cin>>n;
        for(int j=1;j<=n;j++)
        {
            long int num;
            cin>>num;
            sum=sum+num;
        }
        if(sum%3==0) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

}
