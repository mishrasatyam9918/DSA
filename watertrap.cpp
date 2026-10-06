#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int trap(vector<int>& height) {
    int n = height.size();
    int totalWater = 0;

    for (int i = 0; i < n; i++) {

        int leftMax = 0;
        int rightMax = 0;

        // Find maximum on left
        for (int j = 0; j <= i; j++) {
            leftMax = max(leftMax, height[j]);
        }

        // Find maximum on right
        for (int j = i; j < n; j++) {
            rightMax = max(rightMax, height[j]);
        }

        int water = min(leftMax, rightMax) - height[i];

        totalWater += water;
    }

    return totalWater;
}



int main() {
    vector<int> height = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int result = trap(height);
    cout << "Total water trapped: " << result << endl;
    return 0;
}// tc is 0(n*n) and sc is 0(1)