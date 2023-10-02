#include<iostream>
using namespace std;

void rotated(int arr[],int n,int d)
{
//     int temp =arr[0];
//     for(int i=0;i<n;i++)
//     {
//         arr[i-1]=arr[i];
//     }
//     arr[n-1]=temp;
// }
// void left_rotate(int arr[],int n,int d)
// {
//     for(int i=0;i<d;i++)
//     {
//         rotated(arr,n);
//     }
 int temp[d];
 for(int i=0;i<d;i++)
   temp[i]=arr[i];
 for(int i=d;i<n;i++)
   arr[i-d]=arr[i];
 for(int i=0;i<d;i++)
   arr[n-d+i]=temp[i];
}


int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(int);
    int d;
    cin>>d;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<",";
    }
    rotated(arr,n,d);
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ,";
    }
}