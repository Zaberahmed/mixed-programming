#include<stdio.h>
#include<math.h>
#define mod 1000000007
int main()
{
    long long int t,n,m,p,v,i,j,count;
    scanf("%lld",&t);
    for(j=1; j<=t; j++) {
        count=0;
        scanf("%lld%lld",&n,&m);
        p=pow(n,m);
        v=p;

        for(i=2; i<v; i++)
        {
            if(p%i==0)
            {
                if(i==p/i)
                    count+=i;
                else count+=i+(p/i);
                v=p/i;
            }
        }

        count+=1+p;
        printf("Case %lld: %lld\n",j,count%mod);
    }
    return 0;
}



