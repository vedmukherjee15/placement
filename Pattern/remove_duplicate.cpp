#include<bits/stdc++.h>
using namespace std;

/*int main()
{
    vector<int>vec={1,1,2,2,2,3,3,3,4,4,4,5,5,5};
    int n = vec.size();
    vector<int>temp;
    for(int i=0;i<n;i++)
    {
        if(vec[i]!=vec[i+1])
        {
            temp.push_back(vec[i]);
        }
    }
    for(auto it:temp)
    {
        cout<<it<<" ";
    }
}*/
int remove_duplicate(int arr[],int n)
{    
    int i=0;
    
    
        for(int j=1;j<n;j++)
        {
            if(arr[i]!=arr[j])
            {
                arr[i+1] = arr[j];
                i++;
            }
        }
    
    return (i+1);
}

int main()
{
    int arr[]={1,1,2,2,2,3,3};
    int n =sizeof(arr)/sizeof(int);
    
    int m = remove_duplicate(arr,n);
    cout<<"No of elements"<<m<<endl;
    return 0;
}