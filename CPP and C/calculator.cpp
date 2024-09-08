#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n,i;
    printf("How many inputs do you have ?\n");
    cin>>n;
    float Yd[n+1],Ya[n+1],Nd[n+1],Na[n+1];
    float YDP[n+1], YAP[n+1], NDP[n+1], NAP[n+1], RF[n+1];
    cout<<"Please input the values in this order: Death(Yes)  Alive(Yes)  Death(No)  Alive(No)"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>Yd[i]>>Ya[i]>>Nd[i]>>Na[i];

        YDP[i]= (Yd[i]/(Yd[i]+Ya[i]))*100;
        YAP[i]= (Ya[i]/(Yd[i]+Ya[i]))*100;

        NDP[i]= (Nd[i]/(Nd[i]+Na[i]))*100;
        NAP[i]= (Na[i]/(Nd[i]+Na[i]))*100;

        RF[i]= YDP[i]/NDP[i];


    }

    for(i=0;i<n;i++)
    {
        cout<<"\nOutput "<<i+1<<endl;
        cout<<"Death percentage(if Yes): "<<YDP[i]<<"%"<<"\nAlive percentage(if yes): "<<YAP[i]<<"%"<<"\nRisk Factor: "<<RF[i]<<endl;
    }

}
