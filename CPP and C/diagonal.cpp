#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int ar[n][n];
    int d1=0,d2=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>ar[i][j];
            if(i==j) d1=d1+ar[i][j];
            if(i==n-j-1) d2=d2+ar[i][j];

        }
    }
    int result;
    result=abs(d1-d2);
    cout<<result;


    return 0;
}
