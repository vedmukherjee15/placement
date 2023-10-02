#include<bits/stdc++.h>
using namespace std;

int merge(int arr[],int s ,int e)
{
    int inv_count =0 ;
    int mid = (s+e)/2;

    int len1 = mid-s+1;
    int len2 = e-mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int mainArrayIndex = s;
    for(int i=0;i<len1;i++)
    {
        first[i]=arr[mainArrayIndex++];
    }
    
    // mainArrayIndex = mid+1;
    for(int i=0;i<len2;i++)
    {
        second[i]=arr[mainArrayIndex++];
    }

    int index1=0;
    int index2=0;
    mainArrayIndex = s;
    

    while(index1<len1 && index2<len2)
    {
        if(first[index1]<second[index2])
        {
            
            arr[mainArrayIndex++]=first[index1++];
        }

        else
        {
            
            inv_count+=(len1-index1 );
            arr[mainArrayIndex++]=second[index2++];

        }
    }

    while(index1<len1)
    {
       arr[mainArrayIndex++]=first[index1++]; 
    }

    while(index2<len2)
    {
        arr[mainArrayIndex++]=second[index2++];
    }

      // Deleting dynamic memory after using to free memory;
  
    return inv_count;
}
int mergesort(int arr[],int s,int e)
{
    if(s>=e)
     return 0;
    
    int mid = (s+e)/2;

    int inv_count = mergesort(arr,s,mid);

    inv_count +=  mergesort(arr,mid+1,e);

    inv_count += merge(arr,s,e);

    return inv_count;
}
int count(int arr[], int n)
{
    return mergesort(arr,0,n-1);
}
int main()
{
    int arr[]={5,3,2,4,1};
    int n = sizeof(arr)/sizeof(int);
    int ans = count(arr,n);
    cout<<ans;
    return 0;
}