#include<iostream>
using namespace std;

 void leader(int arr[],int n)
{
    int cur_led=arr[n-1];
    cout<<cur_led;
    for(int i=n-2;i>=0;i--)
    {
       if(arr[i]>=cur_led)
       {
          cur_led=arr[i];
          cout<<cur_led;
       }
    }
    // for(int i=0;i<n;i++)
    // {
    //     bool flag =false;
    //     for(int j=i+1;j<n;j++)
    //     {
    //         if(arr[i]<=arr[j])
    //           flag=true;
              
                              
    //     }
    //     if(flag==false)
    //     cout<< arr[i]<<" ";
    // }
    // int temp[n]={0};
    
}






int main()
{
    int arr[]={1,10,4,5,6,3,2};
    int n=sizeof(arr)/sizeof(int);
    leader(arr,n);
    return 0;
}