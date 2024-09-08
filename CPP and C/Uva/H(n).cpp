#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>

using namespace std;
int i;
long long H(int n)
{
    long long res=0;
    for(i=1; i<=n; i++)
        res=res+(n/i);
    return res;

}
int main()
{
    int T;
    unsigned int  n;
    long long ans;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%u",&n);
        ans=long long H(unsigned int n);
        printf("%lld\n",ans);
    }

    return 0;
}

