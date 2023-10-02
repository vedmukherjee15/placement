#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*int arr[]={2,2,3,3,1,2,2};
    int n= sizeof(arr)/sizeof(int);
    int hash[n+1]={0};
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]++;
    }
    for(int i=1;i<8;i++)
    {
        if(hash[i]>(n/2))
        {
            cout<<i<<" ";
        }
    }
    return 0;*/
    vector<int>vec={2,2,3,3,1,2,2};
    unordered_map<int,int>mpp;
    for(int i=0;i<vec.size();i++)
    {
        mpp[vec[i]]++ ;
    }
    for(auto it: mpp)
    {
        if(it.second>(vec.size()/2))
        {
            cout<<it.first;
        }
    }
    return 0;

}