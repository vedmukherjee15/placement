#include<iostream>
using namespace std;

int remove_dup(int arr[],int n)
{
    int res=1;
    for(int i=1;i<n;i++)
    {
       if(arr[res-1]!=arr[i])
       {
         arr[res]=arr[i];
         res++;
       }
    }
    return res;
}
int main()
{
    int arr[]={1,1,2,3,3};
    int n= sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    n=remove_dup(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}    









































