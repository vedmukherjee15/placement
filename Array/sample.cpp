#include<iostream>
using namespace std;

int prefix_sum(int arr[],int n)
{
    int prefix[100]={0};
    prefix[0]=arr[0];
    for(int i=1;i<n;i++)
    {
       prefix[i]=prefix[i-1]+arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            prefix[i]=i>0?prefix[j]-prefix[i-1]:prefix[j];
        }
    }    
}

//For O(1) time what we can do is
// int getsum(int prefix_sum{only the first part},int l,int r)
// prefix[l]=l>0?prefix[r]-prefix[l-1]:prefix[r];
//No need of using for loops.