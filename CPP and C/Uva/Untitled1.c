#include<stdio.h>
int factorial (int n);
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        if(n>13)
            printf("Overflow!\n");
        else if(n<8)
            printf("Underflow!\n");
        else
            printf("%d\n",factorial(n));



    }

    return 0;
}

int factorial(int n)
{
    if(n!=1)
        return n*factorial(n-1);
}

