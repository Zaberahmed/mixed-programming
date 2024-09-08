#include<cstdio>
#include<iostream>
#include<cmath>

using namespace std;
int main ()
{
    int x , y;
    int t,i,d,sum,z;
    int s;
    cin>>t;

    for(i=0; i<t ; i++)
    {
        cin>>x>>y;
        int d = y - x;
        s= 0;
        if(d != 0)
        {
            int sum = 0;
            int z = 2;
            while(d > sum)
            {
                sum += (z / 2);
                s++;
                z++;
            }
        }

        cout<<s<<endl;
    }
    return 0;
}
