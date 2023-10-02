#include<iostream>
using namespace std;

int BinarySearch(int arr[],int n,int key)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
      int mid = s+(e-s)/2;
      if(arr[mid]==key)
      return mid;
      else if(arr[mid]>key)
      s=mid+1;
      else
      e=mid-1;
    }
    return -1;
}
int main()
{
    int arr[]={20,19,18,17,16,15,14,13,12,11,10};
    int n= sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    int p = BinarySearch(arr,n,key);
    cout<<key<<" "<<"found at position"<<" "<<p;
    return 0;
}


//if the array is sorted to find the order of the element we need to pick any two elements
// and check if tney are in ascending and descending order.
// lastly apply the binary search.