#include<stdio.h>
int main()
{
    printf("11000\n");
    int t,i,n,j,a[10005],k,l;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&n);
        int m1,m2,m3,m4,m5;
        scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
        for(j=1;j<=n;j++){
            a[j]=1;
        }
        for(k=1;k<=n;k++){
          if(k%m1==0) a[k]++;
          if(k%m2==0) a[k]++;
          if(k%m3==0) a[k]++;
          if(k%m4==0) a[k]++;
          if(k%m5==0) a[k]++;
        }
        int sum=0;
        for(l=1;l<=n;l++){
            if(a[l]>2) {a[l]=2;}
            sum+=a[l];
        }
        printf("Case %d: %d\n",i,sum);

    }
    return 0;
}
