#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int trap(vector<int>&height)
{
    int n = height.size();
    vector<int>leftmax(n);
    vector<int>rightmax(n);
    leftmax[0] = height[0];
    rightmax[n-1] = height[n-1];
    for(int i = 1;i<n-1;i++)
    {leftmax[i] = max(leftmax[i-1],height[i]);

    }
    for(int j = n-2;j>=0;j--)
    {rightmax[j] = max(rightmax[j+1],height[j]);
    }

    int ans = 0;
    for(int i = 1;i<n-1;i++)
    {
        ans += min(leftmax[i],rightmax[i])-height[i];
    }
    return ans;
}


int main()
{
    vector<int>height = {0,1,0,2,1,0,1,3,2,1,2,1};
    int result = trap(height);
    cout << "Total water trapped: " << result << endl;
    return 0;
}