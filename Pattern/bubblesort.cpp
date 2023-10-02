#include<bits/stdc++.h>
using namespace std;

/*void bubble_sort(int arr[],int n)
{
    for(int i=n-1;i>=1;i--)
    {
         int didswap = 0;
        for(int j=0;j<=i;j++)
        {
            if(arr[i]<arr[j])
            {
                swap(arr[i],arr[j]);
                didswap = 1;
            }
        }
        if(didswap == 0)
          break;
    }
}*/


void bubble_sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {   int didswap = 0;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j+1]<arr[j])
            {
                swap(arr[j],arr[j+1]);
                didswap = 1;
            }
        }
        if(didswap==0)
          break;
    }
}






int main()
{
    int arr[] = {34,25,13,12,43,53,25,65,1,3};
    int n = sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    bubble_sort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}    

