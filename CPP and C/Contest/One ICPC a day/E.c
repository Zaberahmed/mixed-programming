#include<stdio.h>
int main()
{
    int t,i,j,zab[200],s,max,l,m,n,k;
    scanf("%d",&t);
    for(i=1; i<=t; i++) {
        scanf("%d ",&n);
        for(j=0; j<n; j++) {
            scanf("%d",&zab[j]);
        }
        for(l=1; l<n; l++) {
            for(m=n-1; m>=1; m--) {
                if(zab[m-1]>zab[m]) {
                    s=zab[m-1];
                    zab[m-1]=zab[m];
                    zab[m]=s;
                }
            }
        }
        max=0;
        for(k=0; k<n-1; k++) {
            if(zab[k+1]-zab[k]>max) max=zab[k+1]-zab[k];
        }
        printf("Class %d:\nMax %d, Min %d, Largest gap %d\n",i,zab[n-1],zab[0],max);
    }
    return 0;
}
