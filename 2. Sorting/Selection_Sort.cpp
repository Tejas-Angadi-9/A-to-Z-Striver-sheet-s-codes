#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        int miniVal = i;

        for (int j = i; j <= n - 1; j++)
        {
            if (arr[j] < arr[miniVal])
                miniVal = j;
                // Here we don't change the value of i to j as i is fixed through outer loop
        }
        swap(arr[i], arr[miniVal]);
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

    selectionSort(arr, n);

    print(arr, n);
}