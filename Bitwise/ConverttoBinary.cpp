#include<bits/stdc++.h>
using namespace std;

int convrttobin(int n)
{   int ans =  0 ;
    int power =0;
    while(n>0)
   { 
    int lastbit = (n&1);
    
    if(lastbit)
     ans=ans+(lastbit*pow(10,power));
    
    power++;
    n=n>>1;
   } 
   return ans;  
}
int main()
{
    int n;
    cin>>n;
    cout<<convrttobin(n); 
    return 0;
}