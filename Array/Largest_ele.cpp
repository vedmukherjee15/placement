#include<iostream>
using namespace std;

int largest_ele(int arr[],int n)
{
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}



int main()
{
    int arr[]={40,14,20,21,34,35};
    int n=sizeof(arr)/sizeof(int);
    cout<<largest_ele(arr,n);
    return 0;
    
}