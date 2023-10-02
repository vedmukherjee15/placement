#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,i;
    cin>>x;
    cin>>i;
   
    int y=(1<<i);

    if((x&y)>0)
    cout<<1;
    else
    cout<<0;



}