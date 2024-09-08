#include<cstdio>
#include<iostream>
#include<cmath>
#include<algorithm>
#define PI 3.14159
using namespace std;
int main()
{
   int t,i;
   double l,w,r,seg,ans,area,s,len;

   scanf("%d",&t);
   for(i=1;i<=t;i++){
    scanf("%lf %lf %lf",&l,&w,&r);

    seg=0.25*PI*r*r;
    len=sqrt(2)*r;
    s=(len+(2*r))/2;
    area=sqrt(s*(s-len)*(s-r)*(s-r));
    ans=seg*2+area*2;

    printf("%lf %lf %lf %lf\n",seg,len,area,ans);

   }



}
