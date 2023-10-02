#include<bits/stdc++.h>
using namespace std;

void fun(int n)
{
    if(n==0)
     return ; 
    fun(n/2);
    cout<<n%2;
}
int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    fun(n);
    return 0;
}
