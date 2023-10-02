#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={1,2,0,0,0,4,0,5,6};
    int n = sizeof(arr)/sizeof(int);
    int j=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            int j=i;
            break;
        }
    }

    if(j==-1)
      return ((int)arr);

    for(int i= j+1;i<n;i++)
    {
           if(arr[i]!=0)
           {
            swap(arr[i],arr[j]);
            j++;
           }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}