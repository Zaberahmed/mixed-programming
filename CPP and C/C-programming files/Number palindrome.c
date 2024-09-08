#include <stdio.h>
#include <math.h>

int main()

{
    int num,num1,num2;
    int rem,c,i;

    printf("Enter a number:\n");
    scanf("%d",&num);
    printf("How many terms are there ?\n");
    scanf("%d",&c);

    num1=num;

    for (num2=0;num>0;num=num/10){
        rem=num%10;
        num2=num2+rem*pow(10,co);
        c-=1;

    }
    num2=num2/10;

    if(num1==num2)
        printf("Its a palindrome");
    else
        printf("Its Not a palindrome");


   getch();

   return 0;

}
