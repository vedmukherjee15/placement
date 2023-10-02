#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={1,2,3,6,7,8};
    int n = sizeof(arr)/sizeof(int);
    
    int hash[9]={0};
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]++;
    }

    for(int i=1;i<=9;i++)
    {
        if(hash[i]==0)
        {
            cout<<i<<" ";
        }
    }
    return 0;


}