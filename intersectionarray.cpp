#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<int> intersection(vector<int>& A, vector<int>& B) {
    set<int> s;

    for (int x : A) {
        s.insert(x);
    }

    vector<int> result;

    for (int x : B) {
        if (s.find(x) != s.end()) {
            result.push_back(x);
            s.erase(x);   // prevents duplicates
        }
    }

    return result;
}

int main() {
    vector<int> A = {1, 2, 2, 3, 4};
    vector<int> B = {2, 2, 3, 5};

    vector<int> result = intersection(A, B);

    for (int x : result)
        cout << x << " ";

    return 0;
}