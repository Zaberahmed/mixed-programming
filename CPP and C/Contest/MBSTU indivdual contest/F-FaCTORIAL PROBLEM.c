#include<stdio.h>
#include<string.h>

int main()
{
    long long t,i;
    scanf("%lld",&t);
    for(i=1;i<=t;i++){
            long long j,s,fact=1,rem,count=0;
            char n[1000005],b[2000],fact[1000000000];
        scanf("%s %s",&n,&b);

        for(j=1;j<=n;j++){
            fact[]=fact[]*j;
        }

        for(s=fact;s!=0;s=s/b){
            rem=s%b;
            count++;
        }
        printf("Case %lld: %llu\n",i,count);

    }

    return 0;
}
