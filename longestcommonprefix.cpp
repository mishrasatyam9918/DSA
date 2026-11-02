#include<iostream>
#include<vector>
using namespace std;
string longcommonprefix(vector<string>&strs)
{
    if(strs.empty())
    return "";
string prefix;

    string first = strs[0];
    for(int len = first.length();len>=1;len--)
    {
        prefix = first.substr(0,len);

    }

    bool found = true;
    for(int i = 1;i<strs.size();i++)
    {
        if(strs[i].find(prefix)!=0)
        {
            found = false;
            break;
        }
    }

    if(found)
    return prefix;
return "";

}
int main()
{
    vector<string>strs={"flower","flow","flight"};
    cout<<longcommonprefix(strs)<<endl;
}