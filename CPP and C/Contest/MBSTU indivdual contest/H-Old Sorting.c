#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1; i<=t; i++) {
        int n,j,zab[200],count,k,l,temp;
        scanf("%d",&n);
        for(j=0; j<n; j++) {
            scanf("%d",&zab[j]);
        }
            count=0;
        for(k=1; k<n; k++){
            for(l=n-1; l>=1; l--) {
                if(zab[l-1]>zab[l]) {
                    temp=zab[l-1];
                    zab[l-1]=zab[l];
                    zab[l]=temp;
                    count++;
                }
            }
        }

        if (count==0) printf("Case %d: %d\n",i,count);
        else if(count>n) printf("Case %d: %d\n",i,count-n);
    }
    return 0;
}
