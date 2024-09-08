#include <stdio.h>

int main(void)


{
    int i;

    char ch,mn;

    ch='\t';

     mn='\t';
    for(i=1;i<=100;i++)

        printf("%d %c %c",i,ch,mn);

    getch();

    return 0;
}
