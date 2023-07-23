#include <iostream>
using namespace std;
int count = 0;

void f(int x)
{
    if (x == 0)
        return;

    cout << x << endl;
    x--;
    f(x);
}

int main()
{
    f(5);
}