#include<iostream>
using namespace std;

int first_occur(int arr[],int n,int key)
{
  int s=0;
  int e=n-1;
  int res=-1;
  while(s<=e)
  {
    int mid=s+(e-s)/2;
    if(arr[mid]==key)
    {
     res=mid;
     e=mid-1;
    } 
    else if(arr[mid]>key)
    e=mid-1;
    else
    s=mid+1;
  }
  return res;  
}

int last_occur(int arr[],int n,int key)
{
    int s=0;
    int e=n-1;
    int res=-1;
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(arr[mid]==key)
        {
            res=mid;
            s=mid+1;
        } 
        else if(arr[mid]>key)
        e=mid-1;
        else
        s=mid+1;
    }
    return res;
}



int main()
{
    int arr[]={2,3,10,10,10,15,16,17};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    cout<<first_occur(arr,n,key);
    cout<<last_occur(arr,n,key);
    return 0;
    // To find count
    // last-first+
}    