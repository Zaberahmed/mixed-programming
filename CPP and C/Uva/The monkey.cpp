#include<iostream>
#include<cmath>
#include<cstring>
#include<cstdio>

using namespace std;

int main()
{
    int t,n,i,j,s,sum,arr[100000],mi,d,res;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        cin >> n;
        s=0;
        arr[0]=0;
        for(j=1; j<=n; j++)
        {
            cin >> arr[j];

        }
        mi = 0;
        for ( int i = 1; i <= n; i++ )
        {
            d = arr [i] - arr [i - 1];
            if ( d > mi )
            {
                mi=d;
            }

        }
        res = mi;
        for ( int i = 1; i <= n; i++ )
        {
            d=arr [i] - arr [i - 1];
            if (d==mi)
            {
                mi--;
            }
            else if(d> mi)
            {
                res++;
                break;
            }
        }

        cout <<"Case "<<i <<": "<< res << endl;

    }
    return 0;
}

