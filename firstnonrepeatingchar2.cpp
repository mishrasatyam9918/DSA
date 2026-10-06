#include<iostream>
using namespace std;
char firstchar(string s)
{

int freq[26]={0};
for (char c: s)
{
freq[c-'a']++;


}

for (char c : s)
{
    if(freq[c-'a']==1)
    return c;
}

return 0;

}


int main()
{

    string s = "aabbccddeeffg";
    char ans = firstchar(s);
    if(ans!='\0')
    cout<<ans;
    else
    cout<<"no non repeating char";


    return 0;
}