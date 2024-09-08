#include <stdio.h>

int main(void)

{
    int  num,i,Fac=1;

    printf("Enter a number:\n");

    scanf ("%d",&num);

    for(i=1;i<=num;i++)
    {
        Fac=Fac*i;

    }

    printf("Factorial is %d",Fac);

    getch();

    return 0;
}
