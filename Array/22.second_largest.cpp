#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {1, 3, 35, 10, 4, 36,78,35,90,23,67,8563,23};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != max)
        {
            v.push_back(arr[i]);
        }
    }
    int max2 = v[0];
    for (int i = 0; i < n; i++)
    {
        if (v[i] > max2)
        {
            max2 = v[i];
        }
    }
    cout<<max2;
}
