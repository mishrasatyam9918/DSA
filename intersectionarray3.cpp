#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> intersection(vector<int>& A, vector<int>& B) {
    unordered_set<int> s;

    for (int x : A) {
        s.insert(x);
    }

    vector<int> result;

    for (int x : B) {
        if (s.find(x) != s.end()) {
            result.push_back(x);
            s.erase(x);   // avoid duplicate
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


// This code finds the intersection of two arrays A and B. It uses an unordered_set to store the elements of array A, and then iterates through array B to check if each element is present in the set. If it is, the element is added to the result vector and removed from the set to avoid duplicates. Finally, the result vector is printed. more aprroaches posible