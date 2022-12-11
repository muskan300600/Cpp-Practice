#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int arr = {1, 2, 1, 3, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    unordered_map<int, int> um;
    for (int i = 0; i < n; i++)
    {
        um[arr[i]]++;
    }

    for (auto i : arr)
    {
        if (um[i] == 1)
            k--;
        if (k == 0)
        {
            cout<<i;
            break;
        }
    }
    cout<<-1;
}