#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int>arr= {1,2,2,3,1};
vector<int>unique;
for(int i = 0;i<arr.size();i++)
{
    bool ifexist  = false;
    for(int j  =0;j<unique.size();j++)
    {
        if(arr[i]==unique[j])
        {
            ifexist = true;
            break;
        }
    }
    if(!ifexist){
        unique.push_back(arr[i]);
    }
}
for(int i = 0;i<unique.size();i++)
{
    cout<<unique[i]<<" ";
}
return 0;
}