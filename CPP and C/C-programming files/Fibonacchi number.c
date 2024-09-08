#include <stdio.h>

int main()

{
    long long int t1=0,t2=1;
    long long int c,num,i;

    while(scanf("%lld",&num)==1){

    c=0;
    for(i=1;i<=num;i++)
    {
        c=t1+t2;

        if(c>2) t2=t1;

        t1=c;
    }
    if (num==1) printf("The Fibonacci number for %lld is %lld\n",num,t2);
    else if (num==2) printf("The Fibonacci number for %lld is %lld\n",num,t2);
    else printf("The Fibonacci number for %lld is %lld\n",num,c);
    }

    return 0;

}
