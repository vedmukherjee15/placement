#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={12,34,45,36,76,54};
    int n = sizeof(arr)/sizeof(int);
    int temp=arr[0];
    for(int i=1;i<n;i++)
    {
        
        arr[i-1]=arr[i];
    
       
    }
    arr[n-1]=temp;
    for(auto it : arr)
      cout<<it<<" ";

    return 0;
    
}