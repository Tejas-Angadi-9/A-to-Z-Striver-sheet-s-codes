// Check if an array is sorted or not. If yes, return true and if not return false;

#include <bits/stdc++.h>
using namespace std;

//! Using traversal method
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

//! Using recursion
bool checkArrRec(int arr[], int n, int i){
    if(i == n)  return true;

    if(arr[i] > arr[i+1])   return false;

    checkArrRec(arr, n, i+1);
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

    cout<<checkArrRec(arr, n, 0);
}

// TC: O(n)     SC: O(1)