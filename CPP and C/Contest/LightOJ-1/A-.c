#include<stdio.h>
int main()
{
    printf("11000\n");
    long long int t,i,num,num1,rem,sum;
    scanf("%lld",&t);
    for(i=1;i<=t;i++){
            sum=0;
        scanf("%lld",&num);

        for(num1=0;num>0;num=num/10){
            rem=num%10;
            num1=num1*10+rem;
            sum=sum+rem;
        }
        printf("%lld %lld\n",sum,num1);

    }
    return 0;
}
