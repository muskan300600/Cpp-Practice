#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {5, 1, 2, 4, 6, 7, 3, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    int sum = 0;
    for (int i = 0; i < n; i++)
    {

        // If element appears first time
        if (arr[abs(arr[i]) - 1] >= 0)
        {
            sum += abs(arr[i]);
            arr[abs(arr[i]) - 1] *= -1;
        }
    }

    cout << sum;
}