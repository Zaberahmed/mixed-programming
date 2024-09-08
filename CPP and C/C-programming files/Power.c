#include<stdio.h>
#include<math.h>

int main (void)


{
    int a,b,x;

    printf("\n Enter two numbers : \n");

    scanf("%d %d",&a,&b);

    x=2*pow(a,b);

    printf("%d",x);

    getch();

    return 0;


}
