#include<iostream>
#include<unordered_map>
using namespace std;
char firstchar(string s)
{
unordered_map<char,int> freq;
for(char c:s)
{

freq[c]++;


}

for(char c:s)
{if(freq[c]==1)
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