#include <stdio.h>

int main(void)

{
    int pos=0,neg=0,zero=0;

    int num,n,count;

    printf("How many answers do you want ?\n");

    scanf("%d",&count);

   for (n=0;n<count;n++)

        {
            printf("Enter a number: ");

            scanf("%d",&num);

            if (num>0) pos++;

            if (num<0) neg++;

            if (num==0) zero++;


        }

    printf("You have entered %d positives,%d negatives,%d zeros",pos,neg,zero);

    getch();

    return 0;

}
