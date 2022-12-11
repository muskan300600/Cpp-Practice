#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool val = true;

    if (n == 0)
        val = false;
    while (n > 1)
    {
        if (n & 1)
            val = false;
        n = n >> 1;
    }
    cout << val;
}