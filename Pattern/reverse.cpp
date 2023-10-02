#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int low, int high)
{
    if(low >= high)
    {
        return;
    }

    swap(arr[low],arr[high]);
    reverse(arr,low+1,high-1);
}

int main()
{
    int arr[]={10,20,30,40,50,60,70};
    int size = sizeof(arr)/sizeof(int);
    int s=0;
    int e=size-1;
    reverse(arr,s,e);
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";    
    }
    return 0;
}