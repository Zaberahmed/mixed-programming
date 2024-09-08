#include<iostream>
#include<cstdio>

using namespace std;

int main() {
    int comp,user,setpoint,i,count,draw;
    //printf("Enter the set points: ");
    //scanf("%d",&set_point );
    setpoint=21;
    draw=setpoint/5;

    for(i=0;i<draw;i++)
    {
        printf("Enter your move: ");
        scanf("%d",&user );
        if(user>=5 || user==0)
            {
                printf("Invalid move\n");
                continue;
            }
            
        else
        {
        comp=5-user;
        printf("The computer chooses %d\n",comp);
        setpoint=setpoint-5;
        printf("Set points remanining: %d\n",setpoint);
    }
}
    count=i-1;
    if(count%2==0) printf("Computer wins\n");
    else if(count%2==1) printf("User wins\n");


    return 0;
}
