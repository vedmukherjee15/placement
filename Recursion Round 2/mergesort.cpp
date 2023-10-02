#include<bits/stdc++.h>
using namespace std;

void mergesort(int arr[],int s,int e,int size)
{
    if(size==0 || size==1 || s>e)
      return ;

    int mid = (s+e)/2;

    for(int i=s;i<e;i++)
    {
        if(arr[i]>arr[i+1])
          swap(arr[i],arr[i+1]);
    }

    mergesort(arr,0,mid-1,size-1);
    mergesort(arr,mid+1,e,size-1);
}






int main()
{
    int arr[]={1,45,23,46,89,76,56,45,89,12,34,12,1,10,24,21,98,145,234,67,54};
    int size = sizeof(arr)/sizeof(int);
    
    mergesort(arr,0,size-1,size);
    
    for(int i =0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}