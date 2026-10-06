#include <iostream>
#include <string>
using namespace std;

bool isAnagram(string s1, string s2) {

    if (s1.length() != s2.length())
        return false;

    int freq[26] = {0};

    for (char c : s1) {
        freq[c - 'a']++;
    }

    for (char c : s2) {
        freq[c - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0)
            return false;
    }

    return true;
}

int main() {
    string s1, s2;

    cin >> s1 >> s2;

    if (isAnagram(s1, s2))
        cout << "Anagram";
    else
        cout << "Not Anagram";

    return 0;
}