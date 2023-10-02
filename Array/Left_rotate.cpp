#include<iostream>
using namespace std;

void left_rotate(int *arr,int n)
{   
    int l=arr[0];
    for(int i=1;i<n;i++)
    {
        arr[i-1]=arr[i];
    }
    arr[n-1]=l;
}

int main()
{
    int arr[]={12,14,21,34,12,78,345};
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<",";
    }
    left_rotate(arr,n);
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<",";
    }
    return 0;
}