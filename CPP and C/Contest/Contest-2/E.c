#include<stdio.h>
int main()
{
    long long int a,b,c,t,i;
    scanf("%lld",&t);
    for(i=1;i<=t;i++){

    scanf("%lld%lld%lld",&a,&b,&c);

        if ((a*a)==(b*b)+(c*c)||(b*b)==(a*a)+(c*c)||(c*c)==(a*a)+(b*b)){
            printf("Case %lld: yes\n",i);}

        else printf("Case %lld: no\n",i);

    }
    return 0;
}



