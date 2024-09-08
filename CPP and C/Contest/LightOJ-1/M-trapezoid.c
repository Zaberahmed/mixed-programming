#include<stdio.h>
int main()
{
    printf("11000\n");
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        int j,zab[200];
        double n,h,area=0,max=0.00000;
        scanf("%lf%lf",&h,&n);
        for(j=0;j<n;j++){
            scanf("%d",&zab[j]);
        }
        int k,l;
        for(k=0;k<n;k++){
            for(l=0;l<n;l++){
            area=0.5*h*(zab[k]+zab[l]);
                if(area>max && k!=l){
                    max=area;
                }
            }
        }
        printf("%0.5lf\n",max);
    }
    return 0;
}
