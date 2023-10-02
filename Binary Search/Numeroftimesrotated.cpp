#include<iostream>
using namespace std;

int rotated(int arr[],int n)
{
    int s=0;
    int e=n-1;
    // if(arr[s]<arr[e])
    // return 0;
    while(s<=e)
    {
        int mid = s+(e-s)/2;
        int prev = (mid-1+n)%n;
        int next = (mid+1)%n;
        if(arr[mid]<=arr[prev] && arr[mid]<=arr[next])
        return mid;
        else if(arr[mid]<=arr[e])
        e=mid-1;
        else if(arr[mid]>=arr[s])
        s=mid+1;
    }
    return 0;
}




int main()
{
    int arr[]={11,12,16,18,2,5,6,7};
    int n = sizeof(arr)/sizeof(int);
    int r = rotated(arr,n);
    cout<<"No of times array rotated is"<<r<<endl;
    return 0;
}