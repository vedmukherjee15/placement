#include<iostream>
using namespace std;

void zeroes(int arr[],int n)
{ 
    int count=0;    
    for(int i=0;i<n;i++)
    {
        // if(arr[i]==0)
        // for(int j=i+1;j<n;j++)
        // {
        //     if(arr[j]!=0)
        //     {
        //         swap(arr[i],arr[j]);
        //     }
        // }
        
        if(arr[i]!=0)
        {
            swap(arr[i],arr[count]);
            count++;
        }
    }
}




int main()
{
    int arr[]={2,4,0,0,0,6,7,9,0,0};
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<",";
    }
    zeroes(arr,n);
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<",";
    }
    return 0;
}   