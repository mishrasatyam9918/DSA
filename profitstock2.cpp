#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{//prices of the stock on different days
vector<int>prices = {100,200,300,400,500};
vector<int>result;
int profit = 0;
for(int i = 0;i<prices.size();i++)
{
    for(int j = i+1;j<prices.size();j++)
    {if(prices[j]>prices[i])
        {
            profit = prices[j]-prices[i];
            result.push_back(profit);
        }


    }
}




    sort(result.begin(),result.end());
    cout<<result.back()<<" ";





}