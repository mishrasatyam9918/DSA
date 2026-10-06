#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int maxprofit(vector<int>&prices)
{
int minprice = prices[0];
int maxprofit = 0;
for(int i  = 1;i<prices.size();i++)
{
    int profit = prices[i]-minprice;
    maxprofit = max(maxprofit,profit);
    minprice = min(minprice,prices[i]);
}
return maxprofit;
}


int main()
{

vector<int>prices = {800,900,400,500,600,700};
cout<<maxprofit(prices);



}