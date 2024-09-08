#include<stdio.h>
int main()
{
    int t,i,a,b,j,count;
    while(scanf("%d",&t)==1) {
        for(i=1; i<=t; i++) {
            count=0;
            scanf("%d%d",&a,&b);

        for(j=a; j<=b; j++) {
            if(j%2!=0) {
                count++;
            }
        }
        printf("%d\n",count);
        }

    }
    return 0;
}
