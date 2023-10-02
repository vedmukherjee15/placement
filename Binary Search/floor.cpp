#include<bits/stdc++.h>
using namespace std;

int search(int arr[],int n,int k)
{
    int s=0;
    int e=n-1;
    int res;
    while(s<=e)
    {
     int mid = s+(e-s)/2;   
     if(arr[mid]==k)
     return mid;
     else if(arr[mid]<k)
     {
        res=arr[mid];
        s=mid+1;
     }
     else if(arr[mid]>k)
     {
        e=mid-1;
     }
    }
    return res;
}







int main()
{
  int arr[]={1,2,3,4,8,9,10,11,12};
  int n =sizeof(arr)/sizeof(int);
  int ele;
  cin>>ele;
  
  int p = search(arr,n,ele);
  cout<<p;
  return 0;

}
