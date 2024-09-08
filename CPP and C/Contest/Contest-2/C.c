#include<stdio.h>
int main()
{
    int n,sum,i,t;

    while(scanf("%d",&n)==1 && n!=0){
        sum=0;
       for(t=1;t<=n;t++){
        i=t*t;
        sum=sum+i;
        }
        printf("%d\n",sum);

    }

    return 0;
}
