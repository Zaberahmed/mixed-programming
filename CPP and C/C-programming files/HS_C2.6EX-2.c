#include <stdio.h>


int main(void)

{
    int i,j;

    printf("Enter a value: \n");

    scanf("%d", &i);


    for(j=i;j>0;j--)
        printf("%d\n",j);

    if ((j==0)){printf("\a");}

    getch();

    return 0;
}


