#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>vec={-2,-3,4,-1,-2,1,5,-3};
    int n = vec.size();
    int max_sum=vec[0];
    int sum =0;
    for(int i=0;i<n;i++)
    {
      sum=sum+vec[i];
      if(sum<0)
      {
        sum=0;
      }
      max_sum = max(max_sum,sum);
    }
    cout<<max_sum;
    return 0;
}