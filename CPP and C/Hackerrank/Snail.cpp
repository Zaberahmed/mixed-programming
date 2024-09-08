#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    double H,F,U,D;
    int i;
    double v,m;

    while(scanf("%lf%lf%lf%lf",&H,&U,&D,&F)==4)
    {
        if(H==0) break;

        v=0;
        m=(F*U/100.00);
        i=1;
        while(1)
        {
            v+=U;

            if(U>0)
                U-=m;
            if(v>H)
                break;

            v-=D;

            if(v<0)
                break;
                 i++;
        }
        if(v>0) printf("success on day %d\n",i);
        else printf("failure on day %d\n",i);


    }
    return 0;
}



