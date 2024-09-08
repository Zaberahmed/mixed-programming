#include<bits/stdc++.h>
using namespace std;

long long int candie(int rat[],int can[],int n)
{
    long long int sum=0;

    if(n>=3)
    {

        for(int i=1;i<n-1;i++)
        {
            if(rat[i]>rat[i+1] || rat[i]>rat[i-1])
            {
                if(rat[i]>rat[i+1]) can[i]=can[i+1]+1;

                if(rat[i]>rat[i-1]) can[i]=can[i-1]+1;
            }
        }

        if(rat[0]>rat[1])
            {
                can[0]=can[1]+1;
            }

        if(rat[n-1]>rat[n-2])
            {
                can[n-1]=can[n-2]+1;
            }


        for( int i=0;i<n;i++)
        {
            sum=sum+can[i];
        }


    }
    else if(n==1) sum=1;

    else if (n==2)
    {
        sum=can[0]+can[1];

        if(rat[0]>rat[1]) sum+=1;
        else if(rat[1]>rat[0]) sum+=1;
    }
return sum;
}

int main()
{
    int n;
    cin>>n;
    int rat[n],can[n];

    for(int i=0;i<n;i++){
        cin>>rat[i];
        can[i]=1;
    }

    long long int z=candie(rat,can,n);

    cout<<z<<endl;


}
