#include<bits/stdc++.h>
using namespace std;

/*void printsum(int n,int sum)
{
    if(n<1)
    {
        cout<<sum;
        return;
    }
    printsum(n-1,sum+n);
}*/

int printsum(int n)
{
  if(n==0)
  {
    return 0;
  }

  return n+printsum(n-1);
}



int main()
{
  int n;
  cin>>n;
  cout<<printsum(n);
  return 0;
}