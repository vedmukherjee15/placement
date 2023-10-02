#include<iostream>
using namespace std;

int maxdiff(int arr[],int n)
{ 
//   int lmd=arr[1]-arr[0];
//   for(int i=0;i<n;i++)
//   {
//     for(int j=i+1;j<n;j++)
//     {
//        int md=arr[j]-arr[i];
//        lmd=max(lmd,md);
//     }
//   }
//   return lmd; 
 
 int lmd=arr[1]-arr[0];
 int minval = arr[0];
 for(int i=1;i<n;i++)
 {
    lmd = max(lmd,arr[i]-minval);
    minval=min(minval,arr[i]);
 }
 return lmd;
}
int main()
{
    int arr[]={7,9,5,6,3,2};
    int n = sizeof(arr)/sizeof(int);
    cout<<maxdiff(arr,n);
    return 0;
}