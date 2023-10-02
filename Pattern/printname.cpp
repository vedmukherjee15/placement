#include<bits/stdc++.h>
using namespace std;

void print(int i,string n)
{
    if(i==0)
      return;

    cout<<n<<endl;
    print(i-1,n);
}


int main()
{
    string n;
    int i;
    cin>>n;
    cin>>i;
    print(i,n);
}