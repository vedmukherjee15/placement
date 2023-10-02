#include<bits/stdc++.h>
using namespace std;

int sum(int n)
{
    if(n==0)
     return 0;
    int d = n/10;
    int r = n%10;
    return r+sum(d); 
}






int main()
{
    int n;
    cin>>n;
    cout<<sum(n);
    return 0;
}