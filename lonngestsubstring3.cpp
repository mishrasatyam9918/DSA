#include<iostream>
#include<unordered_set>
#include<string>
#include<algorithm>
using namespace std;

int len(string str)
{
    unordered_set<char>st;
    int left = 0;
    int maxlen = 0;
    for(int right = 0;right<str.length();right++)
    {
        while(st.find(str[right])!=st.end())
        {st.erase(str[left]);
        left++;
        }
        st.insert(str[right]);  
        maxlen = max(maxlen,right-left+1);


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