#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int s,int e)
{
    int pivot = arr[s];
    int c=0;

    for(int i=s+1;i<=e;i++)
    {
        if(pivot>arr[i])
        {
            c++;
        }
    }
    int p=0;
    p = s+c;

    swap(arr[s],arr[p]);

    int i=s,j=e;

    while(i< p && j>p)
    {
        while(arr[i]<arr[p])
        {
            i++;
        }
        while(arr[j]>arr[p])
        {
            j--;
        }
        if(i<p && j>p)
        {
            swap(arr[i],arr[j]);
        }
    }
    return p;
}

void quick_sort(int arr[],int s,int e)
{
  if(s>=e)
   return;

  int p = partition(arr,s,e);

  quick_sort(arr,s,p-1);

  quick_sort(arr,p+1,e);
}
int main()
{ 
    int arr[]={1,45,23,46,89,76,56,45,89,12,34,12,1,10,24,21,98,145,234,67,54};
    int n= sizeof(arr)/sizeof(int);

    quick_sort(arr,0,n-1);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;

}