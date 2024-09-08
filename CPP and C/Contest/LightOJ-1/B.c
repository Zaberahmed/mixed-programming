#include<stdio.h>
int main()
{
    printf("11000\n");
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        long long a,n,rem,max1=0,max2=0,ans1,count1=0;
        scanf("%lld",&n);
        a=n;

        while(n!=0){
            rem=n%10;
            n=n/10;
            if(rem>max1) max1=rem;
        }
        while(a!=0){
            rem=a%10;
            a=a/10;
            if(rem>max2 && rem!=max1) {
                    ans1=rem;
            }
            else if(rem>max2 && rem==max1) {
                    count1++;
            }

        }
        if(count1>1) printf("%lld %lld\n",max1,max1);
        else if(count1==1) printf("%lld %lld\n",max1,ans1);

    }
    return 0;
}
