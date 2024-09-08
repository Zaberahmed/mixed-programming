#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstdlib>

using namespace std;

int main()
{
    long int n,m,a,x,y,ans;
    scanf("%ld %ld %ld",&n,&m,&a);
    x=n/a;
    if(n%a!=0) x=x+1;
    y=m/a;
    if(m%a!=0) y=y+1;
    ans=x*y;
    printf("%ld\n",ans);

    return 0;
}
