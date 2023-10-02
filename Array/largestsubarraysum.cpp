#include<iostream>
using namespace std;

int print_subarrays(int arr[],int n)
{
    
    int lsum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int sum=0;
            for(int k=i;k<=j;k++)
            {
                sum=sum+arr[k];
            }
            lsum=max(lsum,sum);
        }
    }
    return lsum;
}

int main()
{
    int arr[]={-2,3,4,-1,5,-12,6,1,3};
    int n=sizeof(arr)/sizeof(int);
    cout<<print_subarrays(arr,n);
    return 0;

}
