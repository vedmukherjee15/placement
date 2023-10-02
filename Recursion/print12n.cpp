#include<bits/stdc++.h>
using namespace std;

void print12n(int n)
{
   if(n==0)
    return;
   print12n(n-1);
   cout<<n<<" ";
}







int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    print12n(n);
    return 0;
}