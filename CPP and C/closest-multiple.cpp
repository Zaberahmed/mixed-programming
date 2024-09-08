#include<bits/stdc++.h>
using namespace std;

long long int power(long long int a,long long int b)
{
    long long int c=a;
    for(int j=1;j<b;j++)
    {
        a=a*c;
    }
    return a;
}
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        long long int x,a,b,res;
        long long int exp;
        int div;

        cin>>a>>b>>x;

        if(b<=0){
            res=0;
            cout<<res<<endl;
        }
        else{
            exp=power(a,b);
            div=exp%x;
            if(div>x/2) res=exp+(x-div);
            else if(div<=x/2) res=exp-div;

            cout<<res<<endl;
        }
}
}
