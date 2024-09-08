#include<cstdio>
#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>

using namespace std;

int main()
{
    long long s,d,i,n;
    while(scanf("%lld %lld",&s,&d)==2)
    {
        n=0;
        i=s;
        while(1)
        {
            n+=i;
            if(n>d || n==d)
            {
                printf("%lld\n",i);
                break;
            }
            i++;
        }
    }
    return 0;
}



