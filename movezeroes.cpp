#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& arr) {
    vector<int> result;
    
    // 1. Extract all non-zero elements first
    for (int x : arr) {
        if (x != 0) {
            result.push_back(x);
        }
    }
    
    // 2. Pad the rest of the vector with zeros
    while (result.size() < arr.size()) {
        result.push_back(0);
    }
    
    // 3. Assign back to original vector
    arr = result;
    
    // 4. Print the final result
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {0, 1, 0, 3, 12};
    moveZeroes(arr);
    return 0;
}
