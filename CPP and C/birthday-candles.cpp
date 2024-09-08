#include<bits/stdc++.h>
using namespace std;
int max_height(int arr[],int n)
{
    int max=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max) max=arr[i];
    }
    return max;
}
int candle(int arr[],int n,int mh)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(mh==arr[i]) count++;
    }
    return count;
}
int main()
{
    int n,mh,res;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    mh=max_height(arr,n);
    res=candle(arr,n,mh);

    cout<<res<<endl;
}
