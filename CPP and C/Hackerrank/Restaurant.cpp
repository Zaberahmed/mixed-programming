#include <cstdio>
#include <math.h>
#include <iostream>
using namespace std;

int gcd ( int a, int b )
{
    int c;
    while ( a != 0 )
    {
        c = a;
        a = b%a;
        b = c;
    }
    return b;
}



int main()
{
    int t,i,l,b;
    scanf("%d", &t);

    for(i=0; i<t; i++)
    {

        scanf("%d %d", &l, &b);
        printf("%d\n", (l/gcd(l,b)*b/gcd(l,b)));
    }
    return 0;
}
