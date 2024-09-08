#include<iostream>

using namespace std;

int i=0;
int j=4;

bool hassum(int arr[5],int sum)
{

    while(i<j)
    {
        if((arr[i]+arr[j])!=sum)
        {
            if ((arr[i]+arr[j])<sum)
                i++;
            else
                j--;
        }
        else
            {
                //cout<<"Sum found"<<endl;
            //    cout<<arr[i]<<"+"<<arr[j]<<"="<<sum<<endl;
                break;
                return true;
            }

    }
    if(i>j)
        //printf("No sum found\n");
        return false;

}

int main() {

    int arr[5]={1,2,3,4,5};
    int sum=8;

    if((hassum(arr,sum))==1)

        {
            cout<<"Sum Found"<<endl;
            cout<<arr[i]<<"+"<<arr[j]<<"="<<sum<<endl;
        }
    else
    cout<<"No sum found"<<endl;



    return 0;
}
