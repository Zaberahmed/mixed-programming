#include <iostream>
#include<cstdio>

using namespace std;

int main() {
    /* code */
    int a;
    int b;
    int c;
    int i;
    printf("Enter the value of a and b: ");
    scanf("%d%d",&a,&b);
    i=1;
    while(i<=5)
    {
        c=a+b;
        i++;
    }
    printf("%d\n",c );

    return 0;

}
