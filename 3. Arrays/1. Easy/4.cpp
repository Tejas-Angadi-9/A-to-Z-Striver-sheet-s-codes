// Remove Duplicates in-place from Sorted Array

#include <bits/stdc++.h>
using namespace std;

void removeDuplicate(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[i + 1])
            cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {1, 1, 2, 2, 2, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    removeDuplicate(arr, n);
}

// TC: O(n)
// SC: O(1)
// Note: This algo works only for when the array is sorted