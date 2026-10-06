#include <iostream>
#include <vector>
#include <algorithm> // Required for std::set_union

using namespace std;

int main() {
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {4, 5, 6, 7, 8};
    
    // The inputs must be sorted. (They are already sorted in this case)
    
    vector<int> unionResult;
   
    set_union(arr1.begin(), arr1.end(),
              arr2.begin(), arr2.end(),
              back_inserter(unionResult));
              
    for (int x : unionResult) {
        cout << x << " ";
    }
    
    return 0;
}
