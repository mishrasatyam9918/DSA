#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& arr)
{
    int n = arr.size();
    if(n == 0) return 0;

    unordered_set<int> seen;
    int j = 0; 

    for(int i = 0; i < n; i++)
    {
        // If the element has not been seen before
        if(seen.find(arr[i]) == seen.end())
        {
            seen.insert(arr[i]);
            arr[j] = arr[i];
            j++;
        }
    } 
    return j; // Return the new size
}

int main()
{
    vector<int> arr = {1, 2, 2, 3, 1};
    int newsize = removeDuplicates(arr);
    
    cout << "New size: " << newsize << endl;
    for(int i = 0; i < newsize; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
