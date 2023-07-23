//  creating hash to store the number of times each number present and fetching using hashing

#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 3, 2, 1, 3};
    int n = 5;

    int hashh[14] = {0};
    int number = 12;

    for (int i = 0; i < n; i++)
    {
        hashh[arr[i]] += 1;
    }

    cout << hashh[number] << " ";
}