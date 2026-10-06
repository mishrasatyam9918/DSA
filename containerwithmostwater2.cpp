#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int maxwater(vector<int>&height)
{
    int l=0;
    int r = height.size() - 1;
int maxvol= 0;
while(l<r)
{
    int width = r-l;
    int ht= min(height[l],height[r]);
    int vol = width * ht;
    maxvol = max(maxvol,vol);
    if(height[l]<height[r])
    {
        l++;
    }
    else
    {
        r--;
    }




}

return maxvol;
}

int main()
{
vector<int>height={1,8,6,2,5,4,8,3,7};
    cout<<maxwater(height);
    return 0;


}