#include<stdio.h>
int main()
{
    int t,i;
    while(scanf("%d",&t)==1){
        for(i=0;i<t;i++){
                int count1=0,count2=0,count3=0;
            int Ax,Ay,Bx,By,Cx,Cy,Dx,Dy;
            scanf("%d%d%d%d%d%d%d%d",&Ax,&Ay,&Bx,&By,&Cx,&Cy,&Dx,&Dy);

            if((Cy-Ay)==(Dy-By) || (Cx-Ax)==(Dx-Dy)) count1++;
            if(((By>Dy && Ay<Cy)) || ((Dy>By) && (Ay>Cy))) count2++;
            if(((Cy==Dy)&&(Ax==Bx)) || ((Cx==Dx)&&(Ay==By))) count3++;

            if(count1>0){
                if(count2>0 && count3>0) printf("Case $%d: yes yes yes\n",i);
                if(count2>0 && count3==0) printf("Case $%d: yes yes no\n",i);
                if(count2==0 && count3==0) printf("Case $%d: yes no no\n",i);

            }
            else if(count2>0){
                if(count3>0) printf("Case $%d: no yes yes\n",i);
                if(count3==0) printf("Case $%d: no yes no\n",i);
            }

        }
    }
    return 0;
}
