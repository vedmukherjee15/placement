#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>vec = {2,6,8,5,11};
    int n = vec.size();
    sort(vec.begin(),vec.end());
    int left=0;
    int right=n-1;
    int sum=14;
      while(left<right)
      {
       if(vec[left]+vec[right]==sum)
       {
        cout<<left<<" "<<right;
        break;
       }
       else if(vec[left]+vec[right]<sum)
       {
        left++;
       }
       else if(vec[left]+vec[right]>sum)
       {
        right--;
       }
      }
    
    return 0;
}