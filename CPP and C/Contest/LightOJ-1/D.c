#include<stdio.h>
int main()
{
    printf("11000\n");
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        int n,j,count=0;
        scanf("%d",&n);
        for(j=2;j<=n/2;j++){
            if(n%j==0) count++;
        }
        if(count>0) printf("Case %d: Composite\n",i);
        else printf("Case %d: Prime\n",i);
    }
    return 0;
}

