#include <iostream>
using namespace std;
int main()
{
    string s;
    s = "tejast";

    int hashh[26] = {0};

    for (int i = 0; i < s.size(); i++)
    {
        hashh[s[i] - 'a'] += 1;
    }

    cout<<hashh['o'-'a']<<endl;
}