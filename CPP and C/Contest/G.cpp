#include <iostream>

using namespace std;

int n,u,d;

int h;
int t;
int main()
{
    while(cin>>n>>u>>d)
    {
         if((n&&u&&d)==0)
             break;
         h = 0;
         t = 0;
         while(h < n)
         {
             h += u;
             t++;
             if(h >= n)
             {
                  cout<<t<<endl;
                  break;
             }
             h -= d;
             t++;
         }
    }
    return 0;
}
