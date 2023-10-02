#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={34,25,13,12,43,53,25,65,1,3};
    int n = sizeof(arr)/sizeof(int);
    int largest = arr[0];
    int slargest = -1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            slargest=largest;
            largest = arr[i];
        }
        else if(arr[i]<largest && arr[i]>largest)
        {
            slargest = arr[i];
        }
    }
    cout<<"Second largest "<<slargest<<endl;
    return 0;

}