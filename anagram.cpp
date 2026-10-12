#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

bool isanagram(string s1,string s2)
{ if(s1.length()!=s2.length())
    return false;
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if(s1==s2)
        return true;
    else
        return false;


}


int main()
{
    string s1 = "hello";
    string s2  = "oellh";
    if(isanagram(s1,s2))
        cout<<"anagram";
    else
        cout<<"not an anagram";
}