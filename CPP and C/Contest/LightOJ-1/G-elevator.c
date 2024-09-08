#include<stdio.h>
int main()
{
    printf("11000\n");
    long long int tc,i,n,j,k,zab[200],count,l,m,temp,q,p,t,baz[200];
    scanf("%lld",&tc);
    for(i=1; i<=tc; i++) {
        scanf("%lld%lld",&n,&k);
        for(j=1; j<=n; j++) {
            scanf("%lld",&zab[j]);
            baz[j]=zab[j];
            if(zab[j]==k) {
                    p=j;
            }
        }
        count=0;
        for(m=1;m<=p-1;m++){
            for(l=m+1;l<=p-1;l++){
                if(zab[m]==zab[l] || zab[m]==1) count++;
            }

        }

        /*for(l=1;l<p-1;l++){
            for(m=p-2;m>=1;m--){
                if(zab[m-1]>zab[m]){
                    temp=zab[m];
                    zab[m]=zab[m-1];
                    zab[m-1]=temp;
                }
            }
        }
        for(q=0;q<p-1;q++){
            if(zab[q]==zab[q+1] || zab[q]==1) count++;
        }*/
        if(count>0) printf("NO\n");
        else if(count==0) printf("YES\n");
    }
    return 0;
}
