#include<iostream>
#include<algorithm>
#include<cstdio>

using namespace std;

int main()
{

    int T;

    scanf("%d",&T);

    while(T--)
    {
        long long int N,K,E,M,temp,i,j,sum=0,cur=0;
        long long int tot[10001]= {0};

        scanf("%lld %lld %lld %lld",&N,&K,&E,&M);

        for(int i=0; i<N-1; i++)
        {
            tot[i]=0;
            for(int j=0; j<E; j++)
            {
                scanf("%lld",&temp);
                tot[i]+=temp;
            }
        }

        for(int i=0; i<E-1; i++)
        {
            scanf("%lld",&temp);
            sum+=temp;
        }
        sort(tot,tot+N-1);

        for(int i=0; i<N-1; i++)
        {
            temp=tot[i];
            tot[i]=tot[N-2-i];
            tot[N-2-i]=temp;
        }

        cur=tot[N-K-1]+1;
        if((cur-sum)>M)
            printf("Impossible\n");
        else
        {
            if((cur-sum)<=0)
                cout<<"0\n";
            else
                printf("%lld\n",(cur-sum));
        }
    }

    return 0;
}

