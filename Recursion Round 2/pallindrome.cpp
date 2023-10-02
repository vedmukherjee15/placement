#include<bits/stdc++.h>
using namespace std;

void ispallindrome(string &str,int i, int j)
{
    if(i>j)
     return;

    swap(str[i],str[j]);
    i++;
    j--;

     ispallindrome(str,i,j);
}
int main()
{
    string str;
    string otr;
    cout<<"Enter a string"<<endl;
    cin>>str;
    otr = str;
    int j = otr.length()-1;
    ispallindrome(otr,0,j);
    cout<<otr<<endl;
    if(otr == str)
    cout<<"It is pallindrome"<<endl;
    else
    cout<<"It is not pallindrome"<<endl;
    return 0 ;
}



