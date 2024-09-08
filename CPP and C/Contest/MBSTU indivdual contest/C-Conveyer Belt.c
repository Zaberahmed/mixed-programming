#include<stdio.h>
#include<stdlib.h>
int main()
{
    long long t,i,min;
    scanf("%lld",&t);
    for(i=1;i<=t;i++){
            long long n,m,j,k,l,cap[1005],sum,h,s,min=2000000000;
        scanf("%lld%lld",&n,&m);

        for(j=0;j<n;j++){
            scanf("%lld",&cap[j]);
        }
        for(j=1;j<n;j++){
        for(h=n-1;h>=1;h--){
            if(cap[j-1]>cap[j]){
                s=cap[j];
                cap[j]=cap[j-1];
                cap[j-1]=s;
            }
        }
        }

        sum=0;
        for(k=0;k<n;k++){
        for(l=0;l<n;l++){
            sum=cap[l]+cap[k];
            if(sum<min && l!=k && sum>cap[n-1])
                min=sum;
        }
        }
        printf("%d\n",min);

    }

    return 0;
}
