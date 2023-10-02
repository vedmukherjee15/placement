#include<iostream>
using namespace std;

int countset(int &n)
{
    int cnt=0;
//     while(n>0)
//    { 
//     int lbit= n&1;
//     cnt+= lbit;
//     n=n>>1;
//    }
    while(n>0)
    {
       int i=n;
       while(i>0)
       {
        i = i&(i-1);
        cnt++;
       }
       n=n-1;
    }   
   return cnt; 
}
int main()
{
    int n;
    cin>>n;
    cout<<countset(n);
    return 0;
}
