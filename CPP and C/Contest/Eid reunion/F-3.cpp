#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#define PI 3.14159
using namespace std;
int main()
{
   int t,i;
   double l,w,r,seg,ans,c_area,area,t_area,s,len,r_area,d
   ;

   scanf("%d",&t);
   for(i=1;i<=t;i++){
    scanf("%lf %lf %lf",&l,&w,&r);

    c_area=PI*r*r;
    area=c_area/4;
    s=((2*r)+w)/2;
    t_area=sqrt(s*(s-r)*(s-r)*(s-w));
    d=area-t_area;
    len=sqrt(2)*r;
    r_area=len*w;
    ans=r_area+2*d;
    printf("%lf\n",ans);



   }

}
