#include<bits/stdc++.h>

using namespace std;

int main()
{
    int sqr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>sqr[i][j];
        }
    }
    int change=0;
    if (sqr[1][1]==5) {
        change=change;
    }
    else{
        change=abs(sqr[1][1]-5);
    }
    if(sqr[0][0]+sqr[2][2]==10){
        change=change;
    }
    else{
        change=change+abs((sqr[0][0]+sqr[2][2])-10);
    }
    if(sqr[0][2]+sqr[2][0]==10){
        change=change;
    }
    else{
        change=change+abs((sqr[0][2]+sqr[2][0])-10);
    }
    if(sqr[0][1]+sqr[2][1]==10){
        change=change;
    }
    else{
        change=change+abs((sqr[0][1]+sqr[2][1])-10);
    }
    if(sqr[1][0]+sqr[1][2]==10){
        change=change;
    }
    else{
        change=change+abs((sqr[1][0]+sqr[1][2])-10);
    }

    cout<<change<<endl;
}
