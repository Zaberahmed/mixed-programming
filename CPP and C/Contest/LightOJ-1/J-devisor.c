#include<stdio.h>
#include<math.h>
int main()
{
    printf("11000\n");
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++){

            int n,j,a;
        scanf("%d",&n);
     printf("Case %d: ",i);
        a=n;

    for(j=1;j<=n;j++){
       if(j<=sqrt(n)){
            if(n%j==0)
        printf("%d ",j);
       }
       if(j>=sqrt(n)){
        if(n%j==0) printf("%d ",j);
       }
    }

    printf("\n");

    }
    return 0;
}

