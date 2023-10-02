#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    string s1 = "codeforces";
    int cnt =0;
    for(int i=0;i<10;i++)
    {
        if(s1[i]!=s[i])
        {
             cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
