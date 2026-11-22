#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int>arr={1,2,3,4,5};
int n=arr.size();
int target=5;
for(int i = 0;i<n;i++)//o(n^2) time complexity
{
    for(int j = i+1;j<n;j++)
    {
        if(arr[i]+arr[j]==target)
        {
            cout<<arr[i]<<" "<<arr[j]<<endl;

        }

    }
}
}