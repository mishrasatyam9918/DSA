#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string s = "I love programming";

    stringstream ss(s);
    string word;
    string result = "";

    while (ss >> word) {
        result = word + " " + result;
    }

    cout << result;

    return 0;
}// many more approaches search or recall