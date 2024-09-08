#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int hh;

    int x=s.length();

    hh=stoi(s);


    if(s[8]=='P' && hh!=12)
    {

        hh=stoi(s)+12;

    }
    if(s[8]=='P' && hh==12)
    {
        hh=stoi(s);

    }
    if(s[8]=='A' && hh!=12)
    {
        hh=stoi(s);
    }
    if(s[8]=='A' && hh==12)
    {
        hh=stoi(s)-12;
    }


    int r,d;
    r=hh%10;
    d=hh/10;
    char a,b;
    a='0'+d;
    b='0'+r;
    s[0]=a;
    s[1]=b;

    for(int i=0;i<x-2;i++)
    {
        cout<<s[i];
    }


}
