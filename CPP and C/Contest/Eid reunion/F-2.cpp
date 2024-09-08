#include<cstdio>
#include<iostream>
#include<cmath>
#include<algorithm>
#define PI 3.14159
using namespace std;
int main()
{
   int t,i;
   double l,w,r,seg,ans,r_area,area,t_area,s,len,d;

   scanf("%d",&t);
   for(i=1;i<=t;i++){
    scanf("%lf %lf %lf",&l,&w,&r);

    len=sqrt(2)*r;
    r_area=len*w;
    area=PI*r*r-r_area;
    seg=0.25*PI*r*r;
    s=((2*r)+w)/2;
    t_area=sqrt(s*(s-r)*(s-r)*(s-w));
    d=seg-t_area;
    ans=r_area+2*d;
    printf("%lf\n",ans);




   }
   return 0;
}

