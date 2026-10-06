#include <iostream>
#include <vector>
using namespace std;

vector<int> intersection(vector<int>& A, vector<int>& B) {
    int i = 0;
    int j = 0;

    vector<int> result;

    while (i < A.size() && j < B.size()) {

        if (A[i] < B[j]) {
            i++;
        }
        else if (A[i] > B[j]) {
            j++;
        }
        else {
            // A[i] == B[j]

            if (result.empty() || result.back() != A[i]) {
                result.push_back(A[i]);
            }

            i++;
            j++;
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