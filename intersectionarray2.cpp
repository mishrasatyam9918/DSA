#include <iostream>
#include <vector>
using namespace std;

vector<int> intersection(vector<int>& A, vector<int>& B) {
    vector<int> result;

    for (int i = 0; i < A.size(); i++) {
        bool found = false;

        for (int j = 0; j < B.size(); j++) {
            if (A[i] == B[j]) {
                found = true;
                break;
            }
        }

        // Add only if it is not already in result
        if (found) {
            bool alreadyPresent = false;

            for (int x : result) {
                if (x == A[i]) {
                    alreadyPresent = true;
                    break;
                }
            }

            if (!alreadyPresent) {
                result.push_back(A[i]);
            }
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