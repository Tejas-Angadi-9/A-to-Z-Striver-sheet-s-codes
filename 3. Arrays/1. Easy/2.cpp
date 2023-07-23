// find the second largest and smallest no. in an array

#include <bits/stdc++.h>
using namespace std;

int sLargest(int arr[], int n)
{
    int largest = arr[0];
    int sec_largest = INT_MIN;
    // Edge case
    if (n < 2)
        return -1;

    for (int i = 1; i < n; i++)
    {
        if (largest < arr[i])
        {
            sec_largest = largest;
            largest = arr[i];
        }

        else if (largest > arr[i] && sec_largest < arr[i])
        {
            sec_largest = arr[i];
        }
    }
    return sec_largest;
}

int sSmallest(int arr[], int n)
{
    int smallest = arr[0];
    int sec_smallest = INT_MAX;

    // Edge case
    if (n < 2)
        return -1;

    for (int i = 1; i < n; i++)
    {
        if (smallest > arr[i])
        {
            sec_smallest = smallest;
            smallest = arr[i];
        }

        else if (smallest < arr[i] && sec_smallest > arr[i])
        {
            sec_smallest = arr[i];
        }
    }
    return sec_smallest;
}

int main()
{
    int n = 6;
    // int arr[n] = {1};
    int arr[n] = {1, 2, 4, 7, 7, 5};

    int second_largest = sLargest(arr, n);
    int second_smallest = sSmallest(arr, n);

    cout << second_largest << " " << second_smallest << endl;
}

// TC: O(n)     SC: O(1)