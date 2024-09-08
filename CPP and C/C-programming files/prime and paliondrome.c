#include <stdio.h>

int ispalindrome(int n)
{
    int t,i,l,num=0;
    t=n;
    while(t)
    {
        num = num*10+t%10;
        t=t/10;
    }
    if(n==num)
        return 1;
    else
        return 0;
}
int isprime(int n)
{
    int i;
    if(n==1)
        return 0;
    for(i=2;i<=n/2;i++)
    {
        if((n%i)==0)
            return 0;
    }
    return 1;
}


int main()
{
    int n=1;
    scanf("%d",&n);
    while(n<=10000000)
    {
        if(ispalindrome(n))
        {
            if(isprime(n))
            {
                printf("%d\n",n);
                return 0;
            }
        }
        n++;
    }
    return 0;
}
