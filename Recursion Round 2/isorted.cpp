#include<bits/stdc++.h>
using namespace std;

 bool isSorted(int arr[],int size)
 {
     if (size==0 || size==1)
      return 1;
     
     if(arr[0]>arr[1])
      return 0;

     bool res = isSorted(arr+1,size-1);

     return res;
 }




int main()
{
    int arr[] = {2,4,3,5,6,7};
    int size= sizeof(arr)/sizeof(int);

    int ans  = isSorted(arr+1,size-1);

    if(ans)
    cout<<"Array is sorted "<<endl;
    else
    cout<<"Array is not sorted"<<endl;

    return 0;
}   




    
    
    

    
    