#include<stdio.h>
int main()
{
    int w;
    while(scanf("%d",&w)==1){
        if(w>=4 && w%2==0) {
            printf("YES\n");
        }
        else printf("NO\n");
    }
    return 0;
}
