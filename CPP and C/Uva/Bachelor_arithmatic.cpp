#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int b,s,i=1;
    while(cin>>b>>s)
    {
        if(b==0 && s==0)break;
        else if(b==1||b==0)printf("Case %d: :-\\\n",i++);
        else if(s>=b)printf("Case %d: :-|\n",i++);
        else if(b>s)printf("Case %d: :-(\n",i++);
    }
    return 0;
}
