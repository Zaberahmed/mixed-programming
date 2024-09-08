#include<bits/stdc++.h>
using namespace std;

long modpow(long base_value, long exponent, long modulus)
{
        base_value = base_value % modulus;
        long result = 1;
        while(exponent > 0)
        {
                if (exponent % 2 == 1) result = (result * base_value) % modulus;
                base_value = (base_value * base_value) % modulus;
                exponent = exponent / 2;
        }

        return result;
}


int main()
{
    long int t,a,m,res;
    cin>>t;
    for(long int i=0;i<t;i++)
    {
        cin>>m>>a;
        res=modpow(a,2,m);
        if (res==1) cout<<"YES"<<endl;
        else cout<<"No"<<endl;

    }
}
