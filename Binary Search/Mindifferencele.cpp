#include<bits/stdc++.h>
using namespace std;

int search(int arr[],int n,int key)
{
    int s=0;
    int e=n-1;
    int res1;
    while(s<=e)
    {
        int mid = s+(e-s)/2;
        if(arr[mid]==key)
        return arr[mid];
        else if (arr[mid]>key)
        {
          e=mid-1;
        }
        else if (arr[mid]<key)
        {
            
            s=mid+1;
        }
    }
    return -1;
}










int main()
{
    int arr[]={1,2,5,9,10,12};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    
    
    
}