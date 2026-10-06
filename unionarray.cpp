#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
unordered_set<int>s;
void unionarray(vector<int>&arr1,vector<int>&arr2)
{
    
    for(int x : arr1)
    {s.insert(x);}
    for(int x : arr2)
    {s.insert(x);}
}


int main()
{
    vector<int>arr1 = {1,2,3,4,5};
    vector<int>arr2 = {4,5,6,7,8};
    unionarray(arr1,arr2);
    for(int x : s)
    {
        cout<<x<<" ";
    }
}