// Using hashmap to fetch the frequency of the string
#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<char, int> mpp;
    string s = "tttttterwes";
    int n = s.size();

    for (int i = 0; i < n; i++)
    {
        mpp[s[i]]++;
    }

    for (auto i : mpp)
    {
        cout << i.first << " -> " << i.second << endl;
    }
}