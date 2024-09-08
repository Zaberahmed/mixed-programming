#include<stdio.h>
int main()
{
    printf("11000\n");
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
            int x1,x2,x3,x4,y1,y2,y3,y4,a1,a2,b1,b2;
            int count1=0,count2=0,count3=0,count4=0;

        scanf("%d%d%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
        scanf("%d%d%d%d",&a1,&b1,&a2,&b2);

        if((a2>=x2 && a1<=x2 && b2>=y2 && b2<=y3 ) || (a1>=x2 && a2<=x2 && b1>=y2 && b1<=y3)) count1++;
          if((b2>=y3 && b1<=y3 && a2>=x1 && a2<=x2) || (b1>=y3 && b2<=y3 && a1>=x1 && a1<=x2)) count2++;
           if((a2<=x1 && a1>=x1 && b2>=y1 && b2<=y4) || (a1<=x1 && a2>=x2 && b1>=y1 && b1<=y4)) count3++;
            if((b2<=y1 && b1>=y1 && a2>=y1 && a2<=y2) || (b1<=y1 && b2>=y1 && a1>=y1 && a1<=y2)) count4++;

        if(count1>0 || count2>0 || count3>0 || count4>0) printf("YES\n\n");
        else printf("NO\n\n");

    }


    return 0;
}
