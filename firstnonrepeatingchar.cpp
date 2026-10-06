 #include<iostream>
 using namespace std;
 char firstchar(string s)
 {
for(int i = 0;i<s.length();i++)
{


    int count=0;
for(int j = 0;j<s.length();j++)
{

if(s[i]==s[j])
count++;

}
if(count==1)
return s[i];
}
return '\0';

 }



 int main()
 {
string s = "aabbccddeef";
char ans = firstchar(s);
if(ans!='\0')
cout<<ans;
else 
cout<<"no non repeating characters";
re
 }