#include<iostream>//brute force approachtc 0^n2 
#include<vector>
#include<climits>
using namespace std;
int main()
{
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = arr.size();
    int max_sum = INT_MIN;
    for(int i = 0;i<n;i++)
    {int  crrsum = 0;
        for(int j = i;j<n;j++)
        {
            crrsum+=arr[j];
            max_sum = max(max_sum,crrsum);
        }

    }
    cout<<max_sum<<endl;

}
