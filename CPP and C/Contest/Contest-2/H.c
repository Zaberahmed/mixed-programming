#include<stdio.h>

int main()
{
    int x;
    float y,ans;
    scanf("%d",&x);
    scanf("%f",&y);
    if(x>=(y-0.50) || x%5!=0)
    {
        printf("%.2f\n",y);
    }
    else
    {
        ans=(y-x)-0.50;
        printf("%.2f\n",ans);
    }
    return 0;
}
