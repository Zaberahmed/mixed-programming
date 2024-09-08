#include <stdio.h>
#include<math.h>

int main()

{
    int num,num1,flag,rem,arm_num=0,t,count=0,i,j;
    while(scanf("%d",&t)==1){
            for(i=1;i<=t;i++){
        scanf("%d",&num);
        flag=num;
        while(num>0){
            num=num/10;
            count++;
        }
        num1=flag;
        printf("%d %d %d\n",num1,count,flag);
    for(j=1;j<=count;j++){
        rem=num1%10;
        num1=num1/10;
        arm_num=arm_num+pow(rem,count);
    }
    printf("%d",arm_num);
    if (flag==arm_num) printf("Armstrong\n");
    else printf("Not Armstrong\n");

            }
    }
    return 0;
}
