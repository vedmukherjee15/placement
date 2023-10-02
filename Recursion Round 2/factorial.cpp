#include<bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    int fact;
    if(n==0)
    {
       return 1;
    }
    else
    {
       fact= n*factorial(n-1);
    }
    return fact;
}



int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;

    int ans = factorial(n);
    cout<<ans;

    return 0;
}