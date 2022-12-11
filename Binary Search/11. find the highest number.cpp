#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 5, 4, 3, 2, 1};
    int n = sizeof(a) / sizeof(a[0]);
    int l = 0, r = n - 1, m,val;
    while (l <= r)
    {
        m = l + (r - l) / 2;
        if (a[m] > a[m + 1] && a[m] > a[m - 1])
        {
            val= a[m];
        }
        else if (a[m] > a[m - 1] && a[m] < a[m + 1])
        {
            l = m + 1;
        }
        else if (a[m] < a[m - 1] && a[m] > a[m + 1])
        {
            r = m - 1;
        }
    }
    cout<<val;
}