#include<bits/stdc++.h>

using namespace std;

void sort(long long int arr[]){
    long long int temp;
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
    {
        if(arr[i]>arr[j])
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}
}
long long int minimum(long long int arr[])
{
     long long int x=0;
     for(int i=0;i<4;i++)
     {
         x=x+arr[i];
     }
     return x;

}
long long int maximum(long long int arr[])
{
    long long int y=0;
    for(int i=1;i<5;i++)
    {
        y=y+arr[i];
    }
    return y;
}



int main()
{
    long long int arr[5],min,max;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    sort(arr);
    min=minimum(arr);
    max=maximum(arr);
    cout<<min<<" "<<max;

}
