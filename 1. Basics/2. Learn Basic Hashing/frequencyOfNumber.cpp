// Frequency of number using hashmap STL command
#include <iostream>
#include <map>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    cout << mpp[1] << endl;

    for(auto i: mpp){
        cout<<i.first<<" "<<i.second<<endl;
    }
}