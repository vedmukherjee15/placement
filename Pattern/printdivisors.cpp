#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    vector<int>ln;
    cin>>n;

    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
          ln.push_back(i);
          if(n/i!=i)
         {
           ln.push_back(n/i);
         }
        } 
    }
    sort(ln.begin(),ln.end());
    for(auto it: ln)
       cout<<it<<" ";
}