#include<bits/stdc++.h>
using namespace std;
pair<int, int> findminmax(vector<int>& arr)
{
    int n = arr.size();
    if (n == 0)
    {
        throw invalid_argument("array cannot be empty");
    }

    int minimum, maximum;
    int i;

    if (n % 2 == 0)
    {
        minimum = arr[0];
        maximum = arr[1];
        i = 2;
    }
    else
    {
        minimum = maximum = arr[0];
        i = 1;
    }

    while (i < n - 1)
    {
        int localmin, localmax;

        if (arr[i] < arr[i + 1])
        {
            localmin = arr[i];
            localmax = arr[i + 1];
        }
        else
        {
            localmin = arr[i + 1];
            localmax = arr[i];
        }

        if (localmin < minimum)
            minimum = localmin;

        if (localmax > maximum)
            maximum = localmax;

        i += 2;
    }

    return make_pair(minimum, maximum);
}

int main()
{
    vector<int>arr = {7,2,9,4,1,8};
    pair<int,int>result  =findminmax(arr);
    cout<<"minimum is "<<result.first<<endl;
cout<<"maximum is "<<result.second<<endl;
}