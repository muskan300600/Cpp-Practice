#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int a[] = {-2, -6, -2};
    int n = sizeof(a) / sizeof(a[0]);
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    int max3 = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > max1)
        {
            max3 = max2;
            max2 = max1;

            max1 = a[i];
        }
        else if (a[i] > max2)
        {
            max3 = max2;

            max2 = a[i];
        }
        else if (a[i] > max3)
        {
            max3 = a[i];
        }
    }

    cout << max1 << endl;
    cout << max2 << endl;
    cout << max3 << endl;
}