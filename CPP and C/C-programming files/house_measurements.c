#include <stdio.h>

int main(void)

{
    int length,width,height;

    int sum=0,m,room_num,a;

    printf("How many rooms are there ?\n");

    scanf("%d",&room_num);

    for(a=0;a<=room_num;a++)
    {
        printf("What is the length,width and height of the rooms?\n");

        scanf("%d",length);

        scanf("%d",width);

        scanf("%d",height);

        m=length*width*height;

        sum=sum+m;

    if (a==room_num)
    {   break;
        printf("The square footage is %d",sum);
    }

    getch();

    return 0;
}

}
