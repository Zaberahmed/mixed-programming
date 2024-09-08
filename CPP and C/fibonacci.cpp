#include<bits/stdc++.h>
using namespace std;
long long int fibonacci(long long a,long long b,long long n)
{
    long long fib[n+1];
    long long sum=0;
    fib[0]=a;
    fib[1]=b;
    if(n==1) return fib[1];
    else
    {
    for(long j=2;j<=n;j++)
    {
            fib[j]=fib[j-1]+fib[j-2];
            
    }
    return fib[n];
    }
}
int main()
{
    int t;
    long long a,b,n,res;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b>>n;
        res=fibonacci(a,b,n);
        cout<<res<<endl;
    }


}
