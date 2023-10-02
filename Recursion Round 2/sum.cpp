#include<bits/stdc++.h>
using namespace std;

int sum(int arr[],int size)
{
    if(size==1)
    {
        return arr[0];
    }
    
    int s = arr[0]+sum(arr+1,size-1);
    return s;

}
int main()
{
    int arr[]={10,20,35,45,50};
    int size = sizeof(arr)/sizeof(int);

    cout<<sum(arr,size);

    return 0;



    
    
}