#include<stdio.h>
int main()
{
    int zab[200],n,i,j,count1,count2,e,o;
    while(scanf("%d",&n)==1) {
        for(j=1; j<=n; j++) {
                count1=0;
        count2=0;
            scanf("%d",&zab[j]);
        }
        for(i=1; i<=n; i++){
            if(zab[i]%2==0) {
                count1++;
                e=i;

            }
            if(zab[i]%2!=0) {
                count2++;
                o=i;
            }
        }
        if(count1>count2) {
            printf("%d\n",o);
        }
        else {
            printf("%d\n",e);
        }
    }
    return 0;
}
