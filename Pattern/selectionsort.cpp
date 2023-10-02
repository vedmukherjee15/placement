#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[],int n)
{
    for(int i=0;i<= n-2;i++)
    {
        int min = i;
        for(int j=i;j<=n-1;j++)
        {
            if(arr[j]<arr[min])
              min = j;
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i]=temp;
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
    cout<<endl;

    selection_sort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

     
}