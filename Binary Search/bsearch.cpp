#include<iostream>
using namespace std;

int BinarySearch(int arr[],int n,int key)
{
  int s = 0;
  int e = n-1;
  
  while(s<=e)
  {
    int mid = s+(e-s)/2;// To prevent overflow
    if(arr[mid]==key)
    return mid;
    else if(arr[mid]<key)
    s=mid+1;
    else if(arr[mid]>key)
    e=mid-1;
  }  
  return -1;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    int p = BinarySearch(arr,n,key);
    cout<<key<<"found at position"<<p<<endl;
    return 0;
}