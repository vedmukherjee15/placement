#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v={1};
    int n = v.size();
    int cnt =0 ;
    int maxi =0;
    for(int i=0;i<n;i++)
    {
        if(v[i]==0)
        {
            cnt++;
            maxi=max(cnt,maxi);
        }
        else
        {
            cnt=0;
        }
    }
    cout<<maxi;
}
