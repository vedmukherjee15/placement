#include<iostream>
using namespace std;

int equili(int arr[],int n)
{
     int sum1=0;
    // int sum2=0;
    // for(int i=0;i<n;i++)
    // {
    //   for(int j=0;j<i;j++)
    //     sum1=sum1+arr[j];
    //   for(int k=i+1;k<n;k++)
    //     sum2=sum2+arr[k];
    //     if(sum1==sum2)
    //      return 1;
    for(int i=0;i<n;i++)
     sum1=sum1+arr[i];
    int lsum=0;
    for(int i=0;i<n;i++)
    {
        if(lsum==(sum1-arr[i]))
           return {arr[i]};
        lsum+=arr[i];
        sum1-=arr[i];
    }
    return 0;
}

int main()
{
    int arr[]={4,2,-2};
    int n =sizeof(arr)/sizeof(int);
    // for(int i=0;i<n;i++)
    // {
    cout<<equili(arr,n);
    //     cout<<arr[i];
    //   else
    //     cout<<"No such element";
    // }
    return 0;
}    