#include<iostream>
using namespace std;

int main()
{
    int a[3],b[3];
    int r[2]={0,0};

    for(int i=0;i<3;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<3;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<3;i++)
    {
        if(a[i]>b[i])
            r[0]++;
        else if(b[i]>a[i])
            r[1]++;
        else if(a[i]==b[i])
            continue;
    }
    cout<<r[0]<<" "<<r[1]<<endl;
}
