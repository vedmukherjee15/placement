#include<bits/stdc++.h>
using namespace std;

bool pallin(string str,int start,int end)
{
   if(start>=end)
     return true;
   
    return((str[start]==str[end])) && pallin(str,start +1 ,end -1); 
}






int main()
{
    string s="geeks";
    int n = s.length();
    int start = 0;
    int end = n-1;
    cout<<(pallin(s,start,end)?"true":"false");
    return 0;
}