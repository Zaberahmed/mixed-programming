#include <stdio.h>

int main(void)

{
    int magic_num,trial_num,guess;

    magic_num=12;

    for(trial_num=9;trial_num>=0;trial_num--)
       {
           printf("Enter your guess: ");

        scanf("%d",&guess);

        if (guess==magic_num)
        {
            printf("You have guessed right.You win\n");

            break;
        }
        else printf("You have %d trials remaining\n",trial_num);

       }
       printf("You have lost by Default\n");

       getch();

       return 0;

}
