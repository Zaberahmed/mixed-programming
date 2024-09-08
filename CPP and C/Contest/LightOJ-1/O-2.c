#include<stdio.h>
#include<string.h>
int main()
{
    printf("11000\n");
    int t,i;
    scanf("%d",&t);
    for(i=1; i<=t; i++) {
        int n,q;
        scanf("%d%d",&n,&q);
        int j,a[2000],b[2000];
        for(j=1; j<=n; j++) {
            scanf("%d",&a[j]);
            b[j]=0;
        }
        /*int y,b[2000];
        for(y=1; y<=n; y++) {
            b[y]=0;
        }*/
        int x,p,r,z,count=0;;
        char str[5];
        for(x=1; x<=q; x++) {
            scanf("%d%d",&p,&r);
            scanf("%s",str);
            for(z=1; z<=n; z++) {
                if(z==p && !strcmp(str,"S") ) {
                    b[z]+=r;
                    if(b[z]>a[z]) {
                        count+=b[z]-a[z];
                        b[z]=a[z];
                    }
                }
                else if(z==p && !strcmp(str,"U")) count+=r;


            }
        }


        int l;
        for(l=1; l<=n; l++) {
            if(b[l]>0) printf("%d number basket contains %d balls.\n",l,b[l]);


        }

        printf("Romjan bhai needs to clear %d number of paper balls.\n",count);

    }
    return 0;
}

