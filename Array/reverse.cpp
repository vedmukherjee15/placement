#include<iostream>
using namespace std;

void reverse(int arr[],int n)
{
    int s=0;
    int e=n-1;

    while(s<e)
    {
         swap(arr[s],arr[e]);
         s++; 
         e--;  
    }
}


int main()
{
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<",";
    }
    reverse(arr,n);
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<",";
    }
}

    