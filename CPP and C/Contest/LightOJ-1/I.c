#include<stdio.h>
int main()
{
    printf("11000\n");

    long long unsigned t,i;
    scanf("%llu",&t);
    for(i=1;i<=t;i++){
            long long unsigned a,b,q,r;
        scanf("%llu%llu",&a,&b);

        r=b%a;
        q=(b-r)/a;
        printf("Case %llu: %llu %llu\n",i,q,r);


    }
    return 0;
}

