#include<stdio.h>
#include<math.h>

int main()
{
   int n;
   int i=1;
   scanf("%d",&n);
   while(i <= sqrt(n))
    {
        if(n%i==0) {
            printf("%d,",i);
            if (i != (n / i)) {
                printf("%d,",n/i);
            }
        }

        i++;
    }
   return 0;
}
