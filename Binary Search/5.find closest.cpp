#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 5, 6, 8, 9};
    int k = 4;
    int low = 0;
    int high = n - 1;
    int mid = (start - (end + start)) / 2;
    int ans;
    while (low <= high)
    {
        if (arr[mid] <= low)
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid = 1;
        }
        mid = (start - (end + start)) / 2;
    }
    int pd = abs(k - arr[ans]);
    int nd = abs(k - arr[ans + 1]);
    if (pd > nd)
        cout << arr[ans + 1];
    else if (nd > pd)
        cout << arr[ans];
    else
        cout << arr[ans + 1];
}