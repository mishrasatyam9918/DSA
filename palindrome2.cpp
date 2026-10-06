#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cout<<"enetr a string ";
    cin>>s;
    string rev=s;
    reverse(rev.begin(),rev.end());
    if(s==rev)
    {
        cout<<"palindrome";
    }
    else
    {
        cout<<"not a palindrome";
    }

}