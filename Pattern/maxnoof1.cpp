#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={1,1,0,0,0,1,1,1,0,0,0,1,1,1,1};
    int n = sizeof(arr)/sizeof(int);
    int cnt ;
    int max  ;
    for(int i=0;i<n;i++)
    {
       if(arr[i]==1)
       {
         cnt++;
         max = cnt;
       }
       else 
       {
        
        cnt = 0;
       }
    }
    cout<<"Maximum no of 1s:"<<max;
    return 0;
}