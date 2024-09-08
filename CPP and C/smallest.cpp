#include<iostream>

using namespace std;
void smallest(int arr[5])
{
    int min=arr[0];
    int min2=arr[1];
    for(int i=0;i<5;i++)
    {
        if(min>arr[i])
            {
                min2=min;
                min=arr[i];
            }
        else if (min2>arr[i])
        {
            min2=arr[i];
        }
    }
    cout<<min2<<" "<<min<<endl;
}

int main() {
    int arr[5]={2,0,5,1,3};
    int l=sizeof(arr[0]);
    cout<<l<<endl;
    smallest(arr);

    return 0;
}
