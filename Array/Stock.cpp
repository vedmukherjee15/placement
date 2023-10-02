#include<iostream>
using namespace std;

int stock(int price[],int end)
{
    // if(end<=start)
    //  return 0;
    // int profit =0;
    // for(int i=start;i<end;i++)
    // {
    //   for(int j=i+1;j<end;j++)
    //   {
    //     int curr_profit = price[j]-price[i]+stock(price,start,i-1)+stock(price,j+1,end);
    //     profit = max(profit,curr_profit);
    //  }
    // } 
    // return profit;
    int profit = 0;
    for(int i=1;i<end;i++)
    {
        if(price[i]>price[i-1])
        {
            profit+=price[i]-price[i-1];
        }
    }
    return profit;
}

int main()
{
    int price[]={1,5,3,8,12};
    int end= sizeof(price)/sizeof(int);
    cout<<stock(price,end);
    return 0;
}

