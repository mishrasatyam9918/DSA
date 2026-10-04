#include<bits/stdc++.h>
#include<unordered_set>
#include<set>
#include<algorithm>
using namespace std;
int main(){
vector<int>arr= {1,2,2,3,1};
vector<int>uniq; // Renamed from 'unique' to avoid conflict with std::unique
for(int i = 0;i<arr.size();i++)
{
    bool ifexist  = false;
    for(int j  =0;j<uniq.size();j++) // Updated here
    {
        if(arr[i]==uniq[j]) // Updated here
        {
            ifexist = true;
            break;
        }
    }
    if(!ifexist){
        uniq.push_back(arr[i]); // Updated here
    }
}
cout<<"output by approach 1 is ";
for(int i = 0;i<uniq.size();i++) // Updated here
{
    cout<<uniq[i]<<" "; // Updated here
}


// Approach 2
set<int> s;
for(int x  :arr){
    s.insert(x);
}

cout<<"\noutput by approach 2 is ";
for(int x : s){
    cout<<x<<" ";
}

// Approach 3
unordered_set<int> us;
for(int x :arr){
    us.insert(x);
}
cout<<"\noutput by approach 3 is ";
for(int x : us){
    cout<<x<<" ";
}   

// Approach 4
sort(arr.begin(),arr.end());
arr.erase(unique(arr.begin(),arr.end()),arr.end()); // Now std::unique works cleanly
cout<<"\noutput by approach 4 is ";
for(int x : arr){
    cout<<x<<" ";
}   

return 0;
}
