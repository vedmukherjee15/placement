#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={1,1,2,3,3,4,4,5,5};
    int n = sizeof(arr)/sizeof(int);
    int xor1;
    for(int i=0;i<n;i++)
    {
        xor1=xor1^arr[i];
    }
    cout<<xor1;
    return 0;
}

