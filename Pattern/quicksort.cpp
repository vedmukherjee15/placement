#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>&arr,int low,int high)
{
   int pivot=arr[low];
   int i = low;
   int j = high;
   while(i<j)
   {
    while(arr[i] <= pivot && i<=high-1)
    {
      i++;
    }
    while(arr[j] > pivot && j>=low+1)
    {
      j--;
    }
    if(i<j)
    {
        swap(arr[i],arr[j]);
    }
   }
   swap(arr[low],arr[j]);
   return j;
}



void qsort(vector<int>&arr,int low,int high)
{
    if(low<high)
    {
        int pivot=partition(arr,low,high);
        qsort(arr,low,pivot-1);
        qsort(arr,pivot+1,high);
    }
}

int main()
{
    vector<int>arr={34,25,13,12,43,53,25,65,1,3};
    int n = arr.size();
    for(auto it : arr)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    qsort(arr,0,n-1);
    for(auto it:arr)
    {
        cout<<it<<" ";
    }
    return 0;
}