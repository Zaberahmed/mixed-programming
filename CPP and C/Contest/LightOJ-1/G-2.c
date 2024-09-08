#include<stdio.h>
int main()
{
    printf("11000\n");
    long long int tc,i,n,j,k,zab[200],count,l,m,p;
    scanf("%lld",&tc);
    for(i=1; i<=tc; i++) {
        scanf("%lld%lld",&n,&k);
        for(j=1; j<=n; j++) {
            scanf("%lld",&zab[j]);
        }
        count=0;
        for(m=1; m<=n; m++) {
            for(l=m+1; l<=n; l++) {
                if(zab[m]==zab[l] || zab[m]==1) {
                    printf("NO\n");
                    break;
                }

                else if(zab[m]==k) {
                    printf("YES\n");
                    break;
                }
            }

        }
    }
    return 0;
}

