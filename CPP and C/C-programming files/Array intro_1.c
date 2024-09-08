#include <stdio.h>

int main(void)

{
    int sqrs[20];
    int i;

    for(i=1;i<21;i++) sqrs[i-1]=i*i;

    for(i=0;i<10;i++) printf("%d\n",sqrs[i]);


    getch();

    return 0;
}
