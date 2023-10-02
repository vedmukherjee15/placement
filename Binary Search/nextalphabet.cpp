#include<bits/stdc++.h>
using namespace std;

int search(char arr[],int n,char key)
{
    int s=0;
    int e=n-1;
    char res;
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(arr[mid]==key)
        s=mid+1;
        else if(arr[mid]>key)
        {
          res=arr[mid];
          e=mid-1;
        }
        else
        s=mid+1;
    }
    return s;
}



int main()
{
    char arr[]={'a','b','f','g'};
    int n = sizeof(arr)/sizeof(char);
    char key;
    cin>>key;
    int p= search(arr,n,key);
    cout<<arr[p];
    return 0;
}