#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int a = 1;
    int b = 2;
    int low = 0;
    int high = n-1;
    int mid = 0;
    while (mid <= high)
    {
        if (arr[mid] < a)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] > b)
        {
            swap(arr[mid], arr[high]);
            high--;
        }
        else
            mid++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}