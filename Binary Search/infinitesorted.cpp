#include<bits/stdc++.h>
using namespace std;

int binarysearch(int arr[],int s,int e,int key)
{
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(arr[mid]==key)
        return mid;
        else if(arr[mid]>=key)
        e=mid-1;
        else
        s=mid+1;
    }
    return -1;
}
int find_element(int arr[],int key)
{
    int low=0;
    int high=1;
    while(key>arr[high])
    {
        low=high;
        high=high*2;
    }
    return binarysearch(arr,low,high,key);
}
int main()
{
    int arr[]={1,2,34,67,80,120,170,180,234,560};
    int key;
    cin>>key;
    int p = find_element(arr,key);
    cout<<key<<"found at element"<<p;
    return 0;
}