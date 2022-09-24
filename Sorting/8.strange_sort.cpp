#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int arr[] = {16, 16, 18, 10, 9, 22, 11, 5, 35, 22};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;
    cin >> k;
    int temp = arr[k - 1];
    arr[k - 1] = INT_MAX;
    sort(arr, arr + n);
    for (int i = n - 1; i > k - 1; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[k - 1] = temp;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}