#include<stdio.h>
int main()
{
    int n,i,j,a[1050],b[1050],count,s;
    while(scanf("%d",&n)==1){
        for(i=0,j=0;i<n;i++,j++){
            scanf("%d",&a[i]);
            b[j]=0;
        }
        count=0,s=0;
        while(1){
               for(i=0,j=0;i<n;i++){
                if(b[j]>=a[i]){
                    ++j;
                    b[j]=j;
                    s++;
                }
                count++;
                if(s==n)
                    break;
               }

        }
        printf("%d\n",count);
    }

    return 0;
}
