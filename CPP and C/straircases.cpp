#include<iostream>
using namespace std;

void staircases(int x)
{
    for(int i=1;i<=x;i++){
        for(int j=1;j<=x;j++)
        {
            if(j<=x-i) printf(" ");
            if(j>x-i) printf("#");
            //cout<<i<<" "<<x-i<<" "<<j<<endl;
        }
        printf("\n");
    }
}
int main()
{
    int n;
    cin>>n;
    staircases(n);

}
