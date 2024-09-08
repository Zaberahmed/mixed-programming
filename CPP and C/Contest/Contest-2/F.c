#include<stdio.h>
#include<math.h>
#define mod 1000000007
int main()
{
    long long int t,n,m,i,j,p,count;
    while(scanf("%lld",&t)==1) {
        for(i=1; i<=t; i++) {
                count=0;
            scanf("%lld%lld",&n,&m);
            if(n<1 && m<0) break;

            p=pow(n,m);
            for(j=1;j<=p/2;j++) {
                if(p%j==0) {
                    if(j==p/j) count=count+j;
                    else count=count+j+(j/p);
                }

            }
                count+=p;
            printf("Case %lld: %lld\n",i,count%mod);
        }
    }
    return 0;
}
