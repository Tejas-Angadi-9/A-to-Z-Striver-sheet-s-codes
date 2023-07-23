// Check if an array is sorted or not. If yes, return true and if not return false;

#include <bits/stdc++.h>
using namespace std;

bool checkArray(int arr[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n = 5;
    int arr[n] = {5, 4, 6, 7, 8};
    if (checkArray(arr, n))
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
}

// TC: O(n)     SC: O(1)