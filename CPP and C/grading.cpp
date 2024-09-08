#include<bits/stdc++.h>
using namespace std;

void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}

void grading(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]<38) continue;
        else{
            if(arr[i]%5>=3)
                {
                    int r=arr[i]%5;
                    arr[i]=arr[i]+(5-r);
                }
        }
    }
    display(arr,n);

}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    grading(arr,n);
}
