#include<bits/stdc++.h>
using namespace std;

int apples(int app[],int m,int a,int s,int t)
{
    int ca=0;
    for(int i=0;i<m;i++)
    {
        app[i]=app[i]+a;
        if(app[i]>=s && app[i]<=t) ca++;
    }
    return ca;
}
int oranges(int ora[],int n,int b,int s,int t)
{
    int co=0;
    for(int i=0;i<n;i++)
    {
        ora[i]=ora[i]+b;
        if(ora[i]>=s && ora[i]<=t) co++;
    }
    return co;
}

int main()
{
    int s,t,a,b,m,n;
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;

    int app[m],ora[n];

    for(int i=0;i<m;i++)
    {
        cin>>app[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>ora[i];
    }

    int A=apples(app,m,a,s,t);
    int O=oranges(ora,n,b,s,t);

    cout<<A<<'\n'<<O<<endl;

}
