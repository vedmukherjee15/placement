#include<iostream>
using namespace std;

void clearlasti(int &n,int i)
{
    int mask= (-1<<i);   //111111 ~ -1
    n= (n&mask);
}


int main()
{
    int n;
    cin>>n;
    int i;
    cin>>i;
    clearlasti(n,i);
    cout<<n;
}