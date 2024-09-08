#include<cstdio>
#include<iostream>
#include<algorithm>

using namespace std;
int n,a,m,rev_num,rem,num,d;

int rev_n(int a)
{
    num=a;
    rev_num=0;
    while(1)
    {
      rem=num%10;
      rev_num=rev_num*10+rem;
      num=num/10;
      if(num==0) break;

    }
    return rev_num;

}

int main()
{
    while(scanf("%d",&n)==1)
    {
        m=rev_n(n);
        if(m>n) {
                d=(m-n)/9;
                printf("%d - %d = %d = 9 * %d",m,n,m-n,d);}

        else {
                d=(n-m)/9;
        printf("%d - %d = %d = 9 * %d",n,m,n-m,d);
    }

}

return 0;
}
