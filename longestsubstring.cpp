#include <iostream>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;

bool hasuniquechar(string str)
{
    unordered_set<char> set;
    for (char ch : str)
    {
        if (set.find(ch) != set.end())
        {
            return false;
        }
        else 
        {
            set.insert(ch);
        }
    }
    return true; // Moved outside the for-loop
} // Added missing closing brace for hasuniquechar

int len(string str)
{
    int n = str.length();
    int maxlen = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (hasuniquechar(str.substr(i, j - i + 1)))
            {
                maxlen = max(maxlen, j - i + 1);
            }
        }
    }
    return maxlen;
}

int main()
{
    string str;
    cout << "Enter the string: ";
    cin >> str;
    cout << "Length of longest substring with unique characters is: " << len(str) << endl;
    return 0;
}
