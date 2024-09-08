#include <stdio.h>

int main()

{
    int i1=0,i2=0,n=0,m=0,count1=0,count2=0;

    printf("Enter the numbers:\n");
    scanf("%d %d",&i1,&i2);
    n=i1;
    m=i2;

    for(count1=0;n!=1;count1++){
        if(n%2==0)
            n=n/2;
        else if (n%2!=0)
            n=3*n+1;
    }
    for (count2=0;m!=1;count2++){
        if(m%2==0)
            m=m/2;
        else if (m%2!=0)
            m=3*m+1;
    }

      if(count1+1>count2+1)
             printf("%d %d %d",i1,i2,count1+1);
      else if(count1+1<count2+1)
             printf("%d %d %d",i1,i2,count2+1);


    return 0;
}
