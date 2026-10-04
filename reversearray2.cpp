#include<iostream>
#include<vector>
using namespace std;
void reverse(vector<int>&arr)
{
    int st = 0;
    int end = arr.size()-1;
    while(st<end)
    {
        swap(arr[st],arr[end]);
        st++;
        end--;
    }
}
int main()
{
    vector<int>arr = {1,2,3,4,5};
    reverse(arr);
    for(int x : arr)
    {
        cout<<x<<" ";
    }
}