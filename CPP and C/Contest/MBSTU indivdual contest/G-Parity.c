#include<stdio.h>

int main()
{
    long long t,i,n;
    scanf("%lld",&t);
    for(i=1; i<=t; i++) {
        scanf("%lld",&n);
        long long B,count=0;
        while(n!=0) {
            B=n%2;
            n=n/2;
            if(B==1) count++;
        }

        if(count%2==0) printf("Case %lld: even\n",i);
        else printf("Case %lld: odd\n",i);
    }
    return 0;
}
