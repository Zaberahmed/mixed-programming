#include <stdio.h>
int main()

{
    long long int n,k,t,i,count;
    while(scanf("%lld%lld",&n,&k)==2){
            count=0;
        for(i=1;i<=n;i++){
            scanf("%lld",&t);
            if(t%k==0) count++;

        }
        printf("%lld\n", count);
    }
    return 0;
}
