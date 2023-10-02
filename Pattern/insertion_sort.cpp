#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[],int n)
{
     for(int i=0;i<=n-1;i++)
     {
        int j=i;
        while(j>0 && arr[j]<arr[j-1])
        {
            swap(arr[j],arr[j-1]);
            j--;

        }
     }
}








int main()
{
    int arr[]={34,25,13,12,43,53,25,65,1,3};
    int n = sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    insertion_sort(arr,n);
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

