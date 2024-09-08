#include<stdio.h>
int main()
{
    int l,w,h,t,i;
    scanf("%d",&t);

    if (t<=100){

    for(i=1;i<=t;i++){
        scanf("%d%d%d",&l,&w,&h);

        if ((l>=1&&l<=50)&&(w>=1&&w<=50)&&(h>=1&&h<=50)){

            if (l>20||w>20||h>20) printf("Case %d: bad\n",i);
            else printf("Case %d: good\n",i);
        }
    }
    }
    return 0;
}
//
