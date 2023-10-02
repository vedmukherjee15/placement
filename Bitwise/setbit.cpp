#include<bits/stdc++.h>
using namespace std;

void setbit(int &n,int i)
{
    int mask=(1<<i);
    n=(n|mask);
}





int main()
{
    int n;
    cin>>n;
    int i;
    cin>>i;
    setbit(n,i);
    cout<<n;
    return 0;
}