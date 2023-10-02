#include<iostream>
using namespace std;

void clear_range(int &n,int j,int i )
{
    int a= (-1<<j+1);
    int b= (1<<i)-1;
    int mask= (a|b);
    n = n&mask;
}

void replace(int &n,int &m,int j,int i)
{
    clear_range(n,j,i);
    int mask= (m<<i);
    n = (n|mask);
}
int main()
{
    int n=15;
    int m=2;
    int j=3;
    int i=1 ;
    replace(n,m,j,i);
    cout<<n;
}   



