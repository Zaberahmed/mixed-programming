#include <stdio.h>

int main(void)


{
    int pc,user,stick=21;

    for (stick;stick>0;)
    {
            printf("MATCHSTICK AVAILABLE %d\n",stick);


    printf("your pick now 1,2,3 or 4 sticks : ");

    scanf("%d",&user);

    if (user<1||user>4)
    {
        printf("invalid move\n");

        break;
    }

    pc=5-user;

    printf("computer picks %d sticks\n",pc);

    stick=stick-pc-user;

    if (stick==1)
    {
            printf("only one stick left.\n GAME OVER\n");

        break;

    }
    }
    getch();

    return 0;

}
