#include<iostream>
using namespace std;

void  power2(int &n)
{ 
    
    if((n & (n-1))==0)
    cout<<"power of 2";
    else
    cout<<"not a power of 2";
}



int main()
{
    int n;
    cin>>n;
    power2(n);
    return 0;
}

