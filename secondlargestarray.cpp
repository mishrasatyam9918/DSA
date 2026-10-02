#include <iostream>
#include <algorithm>
#include <vector>
#include <stdexcept>

using namespace std;

// Approach 1: Sort the array
int secondLargestApproach1(vector<int>& arr)
{
    int n = arr.size();

    if (n < 2)
    {
        throw invalid_argument("At least two elements are required");
    }

    sort(arr.begin(), arr.end());

    // Find second largest DISTINCT element
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] < arr[n - 1])
        {
            return arr[i];
        }
    }

    throw invalid_argument("Second largest does not exist");
}


// Approach 2: Two traversals
int secondLargestApproach2(vector<int>& arr)
{
    int n = arr.size();

    if (n < 2)
    {
        throw invalid_argument("At least two elements are required");
    }

    // Step 1: Find largest
    int largest = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    // Step 2: Find second largest
    bool found = false;
    int second;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < largest)
        {
            if (!found || arr[i] > second)
            {
                second = arr[i];
                found = true;
            }
        }
    }

    if (!found)
    {
        throw invalid_argument("Second largest does not exist");
    }

    return second;
}


int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 5, 6, 7, 8, 9};

    cout << "Approach 1: "
         << secondLargestApproach1(arr) << endl;

    cout << "Approach 2: "
         << secondLargestApproach2(arr) << endl;

    return 0;
} 