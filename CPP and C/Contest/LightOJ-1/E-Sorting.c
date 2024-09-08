#include<stdio.h>
int main()
{
    printf("11000\n");
    long long t,i;
    scanf("%lld",&t);
    for(i=1;i<=t;i++){
        long long n,j,k,zab[1000];
        scanf("%lld",&n);
        for(j=1;j<=n;j++){
            scanf("%lld",&zab[j]);
        }
        long long count1=1,count2=1;
        for(j=1;j<=n-1;j++){
            if(zab[j+1]>zab[j]) count1++;
            else break;
        }
        for(k=1;k<=n-1;k++){
            if(zab[k+1]<zab[k]) count2++;
            else break;
        }
        printf("%lld %lld\n",count1,count2);
        if(count1>count2) printf("%lld\n",zab[count1+1]);
        else if (count1<count2) printf("%lld\n",zab[count2+1]);
    }
    return 0;
}

