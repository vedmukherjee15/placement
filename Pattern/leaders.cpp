#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>arr={10,22,12,3,0,6};
    int n = arr.size();
    vector<int>ans;
    int maxi = INT_MIN;
    for(int i=n-1;i>=0;i--)
    {
      if(arr[i]>maxi)
      {
        ans.push_back(arr[i]);
      }
      maxi = max(maxi,arr[i]);
    }
    sort(ans.begin(),ans.end());
    for(auto it: ans)
    {
        cout<<it<<" ";
    }
    return 0;
}