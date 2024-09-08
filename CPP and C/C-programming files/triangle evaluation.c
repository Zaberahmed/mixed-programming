#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the three sides:\n");
    scanf("%d%d%d",&a,&b,&c);

    if(a+b>c && a+c>b && b+c>a ){
        printf("the triangle is valid\n");
    }
    else printf("the triangle is not valid\n");
        return 0;
}

