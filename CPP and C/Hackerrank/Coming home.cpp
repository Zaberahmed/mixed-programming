#include<cstdio>
#include<iostream>

using namespace std;


int main()
{
    int t,i,k,cth,ctm,tcm,j,sum,ans,ath,atm,tt,tam;
    scanf("%d",&t);

    for(i=1; i<=t; i++)
    {
        sum=0;
        ans=2500;
        scanf("%d %d:%d",&k,&cth,&ctm);
        tcm=(cth*60)+ctm;
        for(j=1; j<=k; j++)
        {
            scanf("%d:%d %d",&ath,&atm,&tt);
            tam=(ath*60)+atm;
            if(tam<tcm)
                sum=1440-tcm+tam+tt;
            else
                sum=tam-tcm+tt;
            if(ans>sum)
                ans=sum;
        }
        printf("Case %d: %d\n",i,ans);
    }
    return 0;
}
