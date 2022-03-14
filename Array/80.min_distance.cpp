#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int a[] = {1, 2, 3, 2};
    int n = sizeof(a) / sizeof(a[0]);
    int x, y;
    cin >> x >> y;

    int indexX = -1;
    int indexY = -1;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == x && indexX == -1)
            indexX = i;
        if (a[i] == y && indexY == -1)
            indexY = i;
    }
    if (indexX == -1 || indexY == -1)
        cout<< -1;

    cout<< abs(indexY - indexX);
}