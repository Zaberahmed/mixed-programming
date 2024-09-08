#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
    int t,i;
    double a,b,c,d,ans,s,area;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
        s=(b+d+a-c)/2;
        ans=(1+(2*c/(a-c)))*sqrt(s*(s-b)*(s-d)*(s-a+c));


        printf("%0.6lf\n",abs(ans));
    }


    return 0;
}
