#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>

using namespace std;

unsigned long long  fact(unsigned long long  n)
{
    unsigned long long i,ren=1;
    for( i=1; i<=n; i++)
    {
        ren*=i;
    }
    return ren;
}
int main()
{
    char a[100];
    unsigned long long int t,i,j,l,c,k=0,store[100],sum,ans,sum1,m;
    scanf("%llu",&t);
    getchar();
    while(t--)
    {

        k++;
        scanf("%s",&a);
        l=strlen(a);
        sort(a,a+l);
        m=1;
        for(i=0; i<l; i++)
        {
            c=1;
            for(j=i+1;j<l; j++)
            {
                if(a[i]==a[j])
                {
                    c++;
                }
                else
                    break;

            }
            if(c!=1)
            {
                store[m]=c;
                m++;
                i=j-1;
            }

        }
        sum=1;
        for(i=1; i<=l; i++)
        {
            sum*=i;
        }
        ans=1;
        for(i=1; i<m; i++)
        {
          ans = ans * fact(store[i]);
        }
        sum1=sum/ans;
        printf("Data set %llu: %llu\n",k,sum1);
        memset(a,'\0',sizeof(a));
    }



return 0;
}
