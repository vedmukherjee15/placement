#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr,int low, int high, int mid)
{
    int left = low;
    int right = mid+1;
    vector<int>temp;
    while(left<= mid && right<=high)
    {
        if(arr[left]<=arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high)
    {
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++)
    {
        arr[i]=temp[i-low];
    }

}
void merge_sort(vector<int> &arr,int low,int high)
{
    if(low>=high)
     return;
    int mid = (low+high)/2;
    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1,high);
    merge(arr,low,high,mid);
}
int main()
{
    vector <int> arr={34,25,13,12,43,53,25,65,1,3};
    int n = arr.size();
    for(auto it:arr)
    {
        cout<<(it)<<" ";
    }
    cout<<endl;
    merge_sort(arr,0,n-1);
    for(auto it:arr)
    {
        cout<<it<<" ";
    }
    return 0;
    
}
