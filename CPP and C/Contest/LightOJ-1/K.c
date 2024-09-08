#include<stdio.h>
int main()
{
    printf("11000\n");
    int p=2,q=1,z;
    if(q<p){
        z=p;
        p=q;
        q=z;
    }
    printf("Answer: %d %d\n",p,q);
    return 0;
}
