#include<bits/stdc++.h>
using namespace std;

void reverse(char name[],int length)
{
    int s =0;
    int e = length-1;
    while(s<e)
    {
        swap(name[s++],name[e--]);
    }
}

int length(char name[])
{
    int count =0;
    for(int i=0; name[i]!='\0';i++)
    {
           count++;
    }
    return count;

}







bool isPall(char name[],int length)
{
    if(name == reverse(name,length))
    {
          return true;
    }
    else
    {
         return false;
    }
}






int main()
{
    char name[20];

    cout<<"Enter a name:"<<endl;
    cin>>name;

    int l = length(name);

    cout<<"Length "<<l<<endl;

    reverse(name,l);

    cout<<"Reversed Word "<<name;
    return 0;
}









