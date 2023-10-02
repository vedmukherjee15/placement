#include<bits/stdc++.h>
using namespace std;

bool binary_recursive(int arr[],int s,int e,int n)
{
 
  int mid = (s+e)/2; 
  
  if(s>e)
   return false;

  if(arr[mid]==n)
   return true;

  if(n>arr[mid])
   return binary_recursive(arr,mid+1,e,n);

  else
    return binary_recursive(arr,s,mid-1,n);
}








int main()
{
    int arr[]={1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(int);
    int n;
    cout<<"Enter the element to be found"<<endl;
    cin>>n;
    int ans = binary_recursive(arr,0,size-1,n);
    if(ans)
    cout<<"Element is found"<<endl;
    else
    cout<<"Elemnt is not found"<<endl;
    return 0;

}