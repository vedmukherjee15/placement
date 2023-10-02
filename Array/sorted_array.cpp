#include<iostream>
using namespace std;

bool sort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        if(arr[i]>=arr[i-1])
          return false;
    }
    return true;
}
int main()
{
    int arr[]={5,4,3,1,2};
    int n=sizeof(arr)/sizeof(int);
    cout<<sort(arr,n);
    return 0;

}
