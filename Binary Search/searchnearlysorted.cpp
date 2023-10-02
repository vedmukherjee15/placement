#include<bits/stdc++.h>
using namespace std;

int search(int arr[],int n,int key)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(arr[mid]==key)
        return mid;
        if(arr[mid+1]==key && mid+1<=e) 
        return mid+1;
        if(arr[mid-1]==key && mid-1>=s)
        return mid-1;
        if(arr[mid]>=arr[s])
        {
            if(key>=arr[s] && key<=arr[mid])
            e=mid-1;
            else
            s=mid+1;
        }   
        if(arr[mid]<=arr[e])
        {
            if(key>=arr[mid] && key<=arr[e])
            s=mid+1;
            else
            e=mid-1;
        }
    }
    return -1;
}

int main()
{
    int arr[]={5,10,30,20,40};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    int p =search(arr,n,key);
    cout<<key<<"found at position"<<p;
}
