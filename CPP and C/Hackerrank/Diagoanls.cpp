#include<cstdio>
#include<iostream>

using namespace std;


int main()
{
    int n,i=1,ans;
    while(cin>>n && n!=0){
            ans=(n*(n-3))/2;
        cout<<"Case "<<i<<":"<<ans<<endl;
    i++;
    }
    return 0;

}
