#include<bits/stdc++.h>
using namespace std;

void printfsum(index,arr,n,ds)
{
    if(index==n)
    {
        for(auto it:ds)
        {
            s=s+it;
        }
    }
}






int main()
{
    int arr[]={3,1,2};
    int n = sizeof(arr)/sizeof(int);
    vector<int>ds;
    int k;
    cin>>k;
    printfsum(0,arr,n,ds,k);

}