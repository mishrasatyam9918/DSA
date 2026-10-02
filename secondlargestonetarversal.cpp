#include <iostream>
#include <vector>
#include <stdexcept>
#include <climits>

using namespace std;

// Second largest with only one traversal
int secondlargest(const vector<int>& arr)
{
    int n = arr.size();

    if (n < 2)
    {
        throw invalid_argument("At least 2 elements are required");
    }

    int largest = arr[0];
    long long secondLargest = LLONG_MIN;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > secondLargest)
        {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == LLONG_MIN)
    {
        throw invalid_argument("Second largest does not exist");
    }

    return static_cast<int>(secondLargest);
}

int main()
{
    vector<int> arr = {7, 2, 9, 4, 1, 8};

    cout << "Second largest by Approach 3 is "
         << secondlargest(arr);

    return 0;
}