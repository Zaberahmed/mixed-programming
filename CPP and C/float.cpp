#include<iostream>
using namespace std;


int main() {
    int n,i;
    cin>>n;
    int ar[n];
    double cp=0,cn=0,cz=0;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];

        if (ar[i]>0) cp++;
        if(ar[i]<0)  cn++;
        if(ar[i]==0) cz++;

    }
        //cout<<cp<<cn<<cz<<endl;
    double  pos,neg,zero;
    pos=(cp/n);
    neg=cn/n;
    zero=cz/n;

    printf("%lf\n",pos);
    printf("%lf\n",neg);
    printf("%lf\n",zero);

    return 0;
}
