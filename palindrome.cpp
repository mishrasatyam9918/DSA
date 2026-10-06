  #include<iostream>
  #include<vector>
  #include<algorithm>
  using namespace std;
  bool ispalin(string s)
  {int l= 0;
    int r= s.length()-1;
    while(l<r)
    {
        if(s[l]!=s[r])
        {
            return false;
        }
        l++;
        r--;
    }
    return true;
  }
  int main()
  {
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    if(ispalin(s))
    {
        cout<<"The string is palindrome";
    }
    else
    {
        cout<<"The string is not palindrome";
    }
  }