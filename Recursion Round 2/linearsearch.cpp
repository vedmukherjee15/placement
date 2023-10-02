#include<bits/stdc++.h>
using namespace std;

bool linear_recursive(int arr[],int element,int size)
{

   if(size==0)
    return false;

   if(arr[0]==element)
    return true;
   else
   {
     bool p = linear_recursive(arr+1,element,size-1);
     return p;
   }  
}
int main()
{
    int n;
    int arr[] = {10,20,30,40,50};
    int size = sizeof(arr)/sizeof(int);
    cout<<"Enter element to be found"<<endl;
    cin>>n;

    int ans= linear_recursive(arr,n,size);
    if(ans)
    cout<<"Element is found"<<endl;
    else
    cout<<"Element is not found"<<endl;
    return 0;
}