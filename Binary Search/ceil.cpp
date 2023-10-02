#include<bits/stdc++.h>
using namespace std;

int search(int arr[],int n,int key)
{
    int s=0;
    int e=n-1;
    int res;
    while(s<=e)
    {
        int mid = s+(e-s)/2;
        if(arr[mid]==key)
        return arr[mid];
        else if(arr[mid]>key)
        {
           res=arr[mid];
           e=mid-1;
        }
        else
        s=mid+1;
    }
    return res;
}





int main()
{
    int arr[]={1,2,3,4,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    cout<<search(arr,n,key);
    return 0;
}



