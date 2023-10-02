#include<bits/stdc++.h>
using namespace std;

void reverse(string &n,int i,int j)
{
    if(i>j)
      return;

   
   
    swap(n[i],n[j]);
    i++;
    j--;
   

    reverse(n,i,j);
}








int main()
{
    string n;
    cout<<"Enter a string"<<endl;
    cin>>n;
    
    int len = n.length()-1;
    reverse(n,0,len);

    cout<<n;

    return 0;

}