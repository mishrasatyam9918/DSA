#include<iostream>
#include<algorithm>
using namespace std;
char firstchar(string s)
{for(char c:s)
{
    if(count(s.begin(),s.end(),c)==1)
    {
        return c;
    }
}
return '\0';
}
int main()
{
    string s;
    cin>>s;
    char ans=firstchar(s);
    if(ans=='\0')
    {
        cout<<"No unique character found"<<endl;
    }
    else
    {
        cout<<ans<<endl;
    }
}