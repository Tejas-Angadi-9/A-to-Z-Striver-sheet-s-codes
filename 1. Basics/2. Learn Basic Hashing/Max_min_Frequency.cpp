// Find the maximum and min frequency from the given array
#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<int, int> mp;

    int n = 6;
    int arr[n] = {10, 5, 10, 15, 10, 5};

    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    for (auto i : mp)
    {
        cout << i.first << " " << i.second << endl;
    }

    int maxFreq = 0, minFreq = n;
    int maxEle = 0, minEle = 0;

    for (auto i : mp)
    {
        int count = i.second;
        int element = i.first;

        if(count > maxFreq){
            maxEle = 
        }
    }
}