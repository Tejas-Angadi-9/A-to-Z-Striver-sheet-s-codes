#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
    for(int i=0; i<n; i++){
        int j = i;
        while(j >0 && arr[j-1] > arr[j]){
            swap(arr[j-1], arr[j]);
            j--;
        }
    }
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main()
{
    int n = 6;
    int arr[n] = {13, 46, 24, 52, 20, 9};

    insertionSort(arr, n);
    print(arr, n);
}