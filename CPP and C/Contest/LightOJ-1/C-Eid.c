#include<stdio.h>
int main()
{
    printf("11000\n");
    int t,i,n,a[2000],b[2000],k,l,p,s,j,x;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&n);
        for(j=0;j<n;j++){
            scanf("%d",&a[j]);
        }
        for(j=0,x=0;j<n;j++,x++){
            b[x]=a[j];
        }
        for(k=1;k<n-1;k++){
            for(l=n-1;l>=1;l--){
                if(a[l-1]>a[l]){
                    s=a[l-1];
                    a[l-1]=a[l];
                    a[l]=s;
                }
            }
        }
        for(x=0,j=0;j<n;j++,x++){
            if(b[x]!=a[j])
                p=b[x];
            break;
        }
        printf("%d\n",p);
    }
    return 0;
}
