#include<bits/stdc++.h>
using namespace std;

int search(int arr[],int s, int e, int key)
{
    int res=-1;
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(arr[mid]==key)
        {
           res=mid;
           e=mid-1;
        }
        else if(arr[mid]>key)
        e=mid-1;
        else
        s=mid+1;
    }
    return res;
}
int find_position(int arr[],int key)
{
    int s=0;
    int e=1;
    while(key>arr[e])
    {
        s=e;
        e=e*2;
    }
    return search(arr,s,e,1);
}





int main()
{
    int arr[]={0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1};
    int p =find_position(arr,1);
    cout<<"First occurence of 1 is"<<p<<endl;
    return 0;
}