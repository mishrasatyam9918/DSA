#include<iostream>
#include<unordered_set>
#include<string>
#include<algorithm>
using namespace std;

int len(string str)
{
    int n = str.length();
    int maxlen = 0;
    for(int i = 0;i<n;i++)
    {
        unordered_set<char>st;
        for(int j = i;j<n;j++)
        {
            if(st.find(str[j])!=st.end())
            {
                break;
            }
            else
            {
                st.insert(str[j]);
                maxlen = max(maxlen,j-i+1);
            }


        }
        

    }
    return maxlen;
}
int main()
{
    string str;
    cin>>str;
    cout<<len(str);
    return 0;
}