#include<stdio.h>
int main()
{
    long int n,i,a[100],b[100];
    while(scanf("%ld",&n)==1) {
        for(i=1; i<=n*n; i++) {
            scanf("%ld%ld",&a[i],&b[i]);
            if(a[i]>n || b[i]>n) return 0;
        }
        for(i=1; i<=n*n; i+=n+1) {
            printf("%ld ",i);
        }
        printf("\n");
    }

    return 0;
}
