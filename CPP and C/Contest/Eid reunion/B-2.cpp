#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int t,i;
    long long int l,n,d;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%lld %lld",&l,&n);
        d=l-1;
        printf("Case %d: %lld\n",i,d-n);
    }
    return 0;
}
