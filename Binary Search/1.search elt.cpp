#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {-4, -1, 5, 8, 19, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;
    cin >> key;
    int start = 0, end = N - 1;
    int mid;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (K == arr[mid])
            res = 1;

        else if (K < arr[mid])
            end = mid - 1;

        else
            start = mid + 1;
    }

    cout << res;
}

// Use recursion
int binarySearch(int arr[], int key, int low, int high)
{
    if (low > high)
        return -1;
    int mid = (low + high) / 2;
    if (key == arr[mid])
        return mid;
    if (key > arr[mid])
        return binarySearch(arr, key, mid + 1, n - 1);
    return binarySearch(arr, key, 0, mid - 1);
}