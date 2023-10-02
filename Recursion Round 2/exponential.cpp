#include<bits/stdc++.h>
using namespace std;

int exponent(int a,int b)
{
    if(b==0)
     return 1;
    
    if(b==1)
     return a;
    
    int res = exponent(a,b/2);

    if(b%2==0)
      return res*exponent(a,b/2);
    else
      return res*a*exponent(a,b/2);
}








int main()
{
    int a,b;
    cout<<"Enter the base"<<endl;
    cin>>a;
    cout<<"Enter the power"<<endl;
    cin>>b;

    int res =exponent(a,b);
    cout<<res;

    return 0;
}