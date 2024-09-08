#include<stdio.h>
int main()
{
    printf("11000\n");
    int t, n, k, i, j, a[105], b[105];
    scanf("%d", &t);
    for(i=1; i<=t; i++) {
        scanf("%d%d", &n, &k);
        for(j=1; j<=n; j++)
            b[j] = 1;

        b[1] = 0;
        for(j=1; j<=n; j++) {
            scanf("%d", &a[j]);
        }
        for(j=1; j<=n; j = a[j]) {
            if(b[a[j]] == 0) {
                printf("NO\n");
                break;
            }
            else if(b[a[j]] == 1) {
                if(a[j] == k) {
                    printf("YES\n");
                    break;
                }
                else if(a[j]!=k) {
                    b[a[j]] = 0;
                }
            }
        }
    }
    return 0;
}
