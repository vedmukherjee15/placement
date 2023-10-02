#include<bits/stdc++.h>
using namespace std;

void clearbit(int &n,int x)
{
 int mask= ~(1<<x);

 n= (n&mask); 
}





int main()
{
    int n;
    cin>>n;
    int x;
    cin>>x;
    clearbit(n,x);
    cout<<n;
}
