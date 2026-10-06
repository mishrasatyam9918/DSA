#include <iostream>
#include <vector>

using namespace std;

void unionArraySorted(const vector<int>& arr1, const vector<int>& arr2) {
    int i = 0, j = 0;
    int n = arr1.size();
    int m = arr2.size();
    
    while (i < n && j < m) {
        // Skip duplicates in arr1
        while (i > 0 && i < n && arr1[i] == arr1[i - 1]) i++;
        // Skip duplicates in arr2
        while (j > 0 && j < m && arr2[j] == arr2[j - 1]) j++;
        
        if (i >= n || j >= m) break;

        if (arr1[i] < arr2[j]) {
            cout << arr1[i++] << " ";
        } else if (arr2[j] < arr1[i]) {
            cout << arr2[j++] << " ";
        } else {
            cout << arr1[i] << " "; // Both are equal, print once
            i++;
            j++;
        }
    }
    
    // Print remaining elements of arr1
    while (i < n) {
        if (i == 0 || arr1[i] != arr1[i - 1]) cout << arr1[i] << " ";
        i++;
    }
    // Print remaining elements of arr2
    while (j < m) {
        if (j == 0 || arr2[j] != arr2[j - 1]) cout << arr2[j] << " ";
        j++;
    }
}

int main() {
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {4, 5, 6, 7, 8};
    unionArraySorted(arr1, arr2);
    return 0;
}
