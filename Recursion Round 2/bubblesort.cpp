#include<bits/stdc++.h>
using namespace std;

void sortArray(int arr[],int n)
{
   if(n==0 || n==1)
     return ;

   for(int i=0;i<n-1;i++)
   {
     if(arr[i]>arr[i+1])
      swap(arr[i],arr[i+1]);
   }
   sortArray(arr,n-1);

}
int main()
 {
    int arr[]={2,3,4,6,7,5,9,10,8,34};
    int n = sizeof(arr)/sizeof(int);

    sortArray(arr,n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
 }