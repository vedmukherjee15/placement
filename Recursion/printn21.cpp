#include<bits/stdc++.h>
using namespace std;

void printn21(int n)
{
    if(n==0)
     return;
    cout<<n<<endl;
    printn21(n-1);
}






int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    printn21(n);
    return 0;
}