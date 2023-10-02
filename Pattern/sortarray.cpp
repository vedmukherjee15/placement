#include<bits/stdc++.h>
using namespace std;


void insert(vector<int>&v,int temp)
{
    if(v.size()==0 || v[v.size()-1]<=temp)
    {
         v.push_back(temp);
         return;
    }
    else
    {
     int val = v[v.size()-1];
     v.pop_back();
     insert(v,temp);
     v.push_back(val);
     return ;
    }
}

void sorting(vector<int>&v)
{
    if(v.size()==0)
    {
        return;
    }
    
    int value = v[v.size()-1];
    v.pop_back();
    sorting(v);
    insert(v,value);
}





int main()
{
    vector<int>v={0,1,5,2};
    sorting(v);
    for(auto it : v)
    {
        cout<<it<<" ";
    }
    return 0;
}