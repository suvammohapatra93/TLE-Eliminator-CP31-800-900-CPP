
// CodeForces - Halloumi Boxes -> [Here](https://codeforces.com/problemset/problem/1903/A)

#include <iostream>
#include <vector>

using namespace std;

bool isSorted(vector<int> &arr, int n)
{
    for (int i = 0; i < n; ++i)
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

        if (isSorted(arr, n) || k >= 2)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }

    return 0;
}

//! Time Complexity = O(n)
//! Space Complexity = O(1)