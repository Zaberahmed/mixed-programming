#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cmath>
using namespace std;

int main()
{
    long long  n,i,sum,num,b;
    char s[100];
    while(gets(s))
    {
        sum=0;
        n=strlen(s);
        for(i=0; i<n; i++)
        {
            num=s[i]-'0';
            b=num*(pow(2,n-i)-1);
            sum=sum+b;
        }
        if(sum==0)    break;
        cout<<sum<<endl;
    }
    return 0;
}
