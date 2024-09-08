#include <stdio.h>

int main(void)

{
    int room_num,length,width,height;

    int a,volume,sum;

    sum=0;

    printf("How many rooms are there ?\n");

    scanf("%d",&room_num);

    for(a=1;a<=room_num;a++)
    {
        printf("Give me the dimensions of room no. %d\n",a);

        scanf("%d %d %d",&length,&width,&height);

        volume=length*width*height;

        sum=sum+volume;

    }

    printf("The dimension of the house is %d",sum);

    getch();

    return 0;


}
