#include<stdio.h>
int main()
{
    printf("11000\n");
    int t,i;
    scanf("%d",&t);
    for(i=1; i<=t; i++) {
        int n,j,k,zab[200];
        scanf("%d",&n);
        for(j=0; j<n; j++) {
            scanf("%d",&zab[j]);
        }
        int count=1;
        for(k=0; k<n-1; k++) {
            if(zab[k+1]>zab[k]) break;

            else count++;

        }
        printf("%d\n",count);
    }
    return 0;
}

