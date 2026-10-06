#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxwater(vector<int>&height)
{int maxvolume=0;
for (int i = 0;i<height.size();i++)
{
    for(int j = 0;j<height.size();j++)
    {

        int width= j-i;
        int minheight= min(height[i],height[j]);
        int volume= width*minheight;
       
        maxvolume= max(maxvolume,volume);
    }
}
return maxvolume;

}

int main()
{
    vector<int>height={1,8,6,2,5,4,8,3,7};
    cout<<maxwater(height);
    return 0;
}