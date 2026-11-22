#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>arr = {1, 2, 3, 2, 1, 2, 3,2,2,2};
    int n = arr.size();
    sort(arr.begin(),arr.end());
    int freq = 1;
    for(int i = 0;i<n;i++)
    {
        if(arr[i]==arr[i+1])
        {
            freq++;
        }
        else
        {
            freq = 1;//time complexity is o(nlogn) because of sorting and space complexity is o(1)
        }
        if(freq>n/2)
        {
            cout<<arr[i]<<endl;
            break;
        }
    }

}