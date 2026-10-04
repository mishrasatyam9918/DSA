#include<iostream>
#include<vector>
using namespace std;
void movezeroes(vector<int>&arr)
{
    int j=0;
    for (int i = 0;i<arr.size();i++)
    {
        if(arr[i]!=0)
    
    {
        arr[j]=arr[i];
            j++;
    }}
    while(j<arr.size())
    {
        arr[j]=0;
        j++;
}}


int main()
{
    vector<int>arr = {0,1,0,3,12};
    movezeroes(arr);
    for(int x : arr)
    {
        cout<<x<<" ";
    } 
}