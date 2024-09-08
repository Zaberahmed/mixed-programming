#include <stdio.h>

int main(void)

{
    int num,i;

    printf("How many bells do you want ?\n");

    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        printf("\a");
    }

    getch();

    return 0;


}
