#include <stdio.h>

int main()

{
    int num,num1,num2;
    int rem;

    printf("Enter a number:\n");
    scanf("%d",&num);

    num1=num;

    for(num2=0;num>0;num=num/10){
        rem=num%10;
        num2=num2*10+rem;
    }
    if (num1==num2)
        printf("It's a palindrome\n");
    else
        printf("It's not a palindrome\n");

    getch();

    return 0;
}

