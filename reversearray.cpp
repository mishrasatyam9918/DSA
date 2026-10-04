#include<iostream>
#include<vector>
using namespace std;
void reverse(vector<int>&arr)
{
    int n = arr.size();
    vector<int>result;
    for(int i = n-1;i>=0;i--)
    {
        result.push_back(arr[i]);
    }
    arr = result;
}

int main()
{
    vector<int>arr = {1,2,3,4,5};
    reverse(arr);
    for(int x : arr)
    {cout<<x<<" ";
    
    }
return 0;
}