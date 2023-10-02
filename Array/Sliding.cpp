#include<bits/stdc++.h>
using namespace std;

// int sliding(int arr[],int n,int k)
// {
//    int max_sum=INT_MIN;
//    for(int i=0;i+k-1<n;i++)
//    {
//     int sum=0;
//     for(int j=0;j<k;j++)
//         sum=sum+arr[i+j];
//     max_sum=max(sum,max_sum);
//    }
//    return max_sum;
//    int sum=0;
//    for(int i=0;i<k;i++)
//    {
//       sum+=arr[i];
//    }                    //return max sum when k is given
//    int max_sum = sum;
//    for(int i=k;i<n;i++)
//    {
//       sum+=(arr[i]-arr[i-k]);
//       max_sum=max(max_sum,sum);
//    }
//    return max_sum;
// }
// Window Sliding Technique for unsorted positive integers(k is not given)
// When sum is given
bool isSubSum(int arr[],int n,int sum)
{
   int curr_sum=arr[0];
   int s=0;
   for(int e=1;e<n;e++)
   {
      while(curr_sum>sum && s<e-1)
      {
         curr_sum=curr_sum-arr[s];
         s++;
      }
      if(curr_sum==sum)
       return curr_sum;
      if(e<n)
       curr_sum+=arr[e];      
   }
   cout<<"No sub-array found";
   return 0;
}





int main()
{
    int arr[]={1,8,30,-5,20,7};
    int n=sizeof(arr)/sizeof(int);
    int sum =0;
    cin>>sum;
    cout<<isSubSum(arr,n,sum);
}