#include<bits/stdc++.h>
using namespace std;

// int binarysearch(int arr[],int s,int e,int key)
// {
//     while(s<=e)
//     {
//         int mid = s+(e-s)/2;
//         if(arr[mid]==key)
//         return mid;
//         else if(arr[mid]>key)
//         e=e-1;
//         else
//         s=s+1;
//     }
//     return -1;
// }

// int rotated(int arr[],int n)
// {
//     int s=0;
//     int e=n-1;
//     while(s<=e)
//     {
//         int mid = s+(e-s)/2;
//         int next = (mid+1)%n;
//         int prev = (mid+n-1)%n;
//         if(arr[mid]<=arr[prev] && arr[mid]<=arr[next])
//         return mid;
//         else if(arr[mid]<=arr[e])
//         e=mid-1;
//         else if(arr[mid]>=arr[s])
//         s=mid+1;
//     }
//     return -1;
// }

// int main()
// {
//     int arr[]={11,12,13,18,2,5,6};
//     int n = sizeof(arr)/sizeof(int);
//     int key;
//     cin>>key;
//     int ind = rotated(arr,n);
//     int bs1 = binarysearch(arr,0,ind-1,key);
//     int bs2 = binarysearch(arr,0,ind,n-1);
//     if(bs1!=-1)
//     cout<<"Element found at"<<bs1;
//     if(bs2!=-1)
//     cout<<"Element found at"<<bs2;
//     return 0;
// }
int search(int arr[],int n,int key)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        int mid = s+(e-s)/2;
        if(arr[mid]==key)
        return mid;
        if(arr[mid]>arr[s])
        {
         if(key>=arr[s] && key<=arr[mid])
         e=mid-1;
         else
         s=mid+1;
        }
        if(arr[mid]<arr[e])
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
     int arr[]={11,12,13,18,2,5,6};
     int n = sizeof(arr)/sizeof(int);
     int key;
     cin>>key;
     cout<<search(arr,n,key);
     return 0;
 }   