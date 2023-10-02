#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=0;j<n-i+1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}