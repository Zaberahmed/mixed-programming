#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    int p,h,o;
    while(scanf("%d%d%d",&p,&h,&o)==3){
        if(o-p<h) printf("Hunters win!\n");
        else printf("Props win!\n");
    }


    return 0;
}
