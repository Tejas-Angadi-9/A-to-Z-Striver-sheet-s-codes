// Find the largest element in an array
#include <iostream>
#include <limits.h>
using namespace std;

int findMax(int arr[], int n)
{
    int maxi = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (maxi < arr[i])
            maxi = arr[i];
    }
    return maxi;
}

int main()
{
    int n = 5;
    int arr[n] = {8, 10, 5, 7, 9};

    cout << findMax(arr, n) << endl;
}

// TC: O(n)     SC: O(1)