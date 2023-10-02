#include<iostream>
using namespace std;

int second_largest(int *arr,int n)
{
    int max1=arr[0];
    int max2;
    for(int i=1;i<n;i++)
    {
      if(arr[i]>max1)
       {
        max2=max1;
        max1=arr[i];
       }
      
    }  
    return max2;
}
int main()
{
    int arr[]={33,23,45,67,89,12};
    int n=sizeof(arr)/sizeof(int);
    cout<<second_largest(arr,n);
    return 0;
}