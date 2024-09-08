#include <stdio.h>
int main()
{
    int n, a[2501], b[25001], i, j, k, l,ans[1000], q;
    while(scanf("%d", &n)!=EOF){
        for(i=1;i<=n*n;i++){
            scanf("%d%d", &a[i], &b[i]);
        }
        k = a[1];
        ans[1] = 1;
        for(j=1, l=2;j<i;j++){
            if(a[j] != k && b[j] != k){
                ans[l] = j;
                l++;
                k = a[j];
            }
        }
        for(q=1; q<l; q++){
            printf("%d ", ans[q]);
        }
        printf("\n");
    }
    return 0;
}
