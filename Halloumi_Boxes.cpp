
// CodeForces - Halloumi Boxes -> [Here](https://codeforces.com/problemset/problem/1903/A)

#include <iostream>
#include <vector>

using namespace std;

bool isSorted(vector<int> &arr, int n)
{
    for (int i = 1; i < n; ++i) // Start from 1 to avoid out-of-bounds while comparing between 1 st index and before that index
    {
        if (arr[i] < arr[i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        // If already sorted or k >= 2, output YES
        if (isSorted(arr, n) || k >= 2)
        {
            cout << "YES"
                 << "\n";
        }
        else
        {
            cout << "NO"
                 << "\n";
        }
    }

    return 0;
}


//! Time Complexity = O(n)
//! Space Complexity = O(n)
