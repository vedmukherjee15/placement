#include<bits/stdc++.h>
using namespace std;

int binary_search(int arr[],int s,int e,int x)
{
  while(s<=e)
  {
    int mid = (s+(e-s))/2;
    if(arr[mid] = x)
    {
       return mid;
    }
    else if(arr[mid]>x)
    {
        e=mid-1;
    }
    else 
    {
        s=mid+1;
    }
  }
  return -1;
}
int main()
{
    int arr[]={1,2,3,4};
    int n = sizeof(arr)/sizeof(int);
    int x;
    cout<<"Enter the element to be searched for"<<endl;
    cin>>x;
    int res = binary_search(arr,0,n-1,x);
    if(res==-1)
    {
        cout<<"Element is not present"<<endl;
    }
    else
    {
       cout<<"Element is present at index"<<res<<endl;
    }
    return 0;

}