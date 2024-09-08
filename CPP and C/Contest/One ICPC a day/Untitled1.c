#include<stdio.h>
int main()
{
    int n,sum;
    while(scanf("%d",&n)==1 && n!=-1) {
            sum=0;
        int i,s[100],t[100];
        for(i=1; i<=n; i++) {
            scanf("%d%d",&s[i],&t[i]);
        }
        int j,a,b;
        for(j=1; j<=n; j++) {
            a=s[j];
            if(j>=2){
                    b=t[i]-t[i-1];
            }
            sum=sum+a*b;
            printf("%d\n",sum);
        }
        printf("%d miles\n",sum);

    }
    return 0;
}
