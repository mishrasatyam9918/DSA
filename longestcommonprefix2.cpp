#include <iostream>
#include <vector>
#include <string> // Added for best practice

using namespace std;

string longestcommonprefix(vector<string>& strs)
{
    if (strs.empty()) 
        return "";
        
    string prefix = strs[0];
    
    for (int i = 1; i < strs.size(); i++)
    {
        while (strs[i].find(prefix) != 0)
        {
            prefix.pop_back();
        }
        
        if (prefix.empty())
            return "";
    }
    
    return prefix; // <-- FIX: You must return the prefix here!
}

int main()
{
    vector<string> strs = {"flower", "flow", "flight"};
    cout << longestcommonprefix(strs) << endl;
    return 0;
}
