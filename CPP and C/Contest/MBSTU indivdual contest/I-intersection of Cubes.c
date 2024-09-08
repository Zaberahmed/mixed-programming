#include<stdio.h>
int main()
{
    int i,j,k,t,a,n,zab[100],ans;

    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&a);
        zab[1]=zab[2]=zab[3]=1;
        zab[4]=zab[5]=zab[6]=1000;
        for(j=1; j<=a; j++)
        {
            for(k=1; k<=3; k++)
            {
                scanf("%d",&n);
                if(n>zab[k]) {
                    zab[k]=n;
                }
            }
            for(k=4; k<=6; k++)
            {
                scanf("%d",&n);
                if(n<zab[k]) {
                    zab[k]=n;
                }
            }

        }
        if(zab[4]>zab[1]&&zab[5]>zab[2]&&zab[6]>zab[3])
        {
            ans=(zab[4]-zab[1])*(zab[5]-zab[2])*(zab[6]-zab[3]);
            printf("Case %d: %d\n",i,ans);
        }
        else printf("Case %d: 0\n",i);
    }
    return 0;
}


