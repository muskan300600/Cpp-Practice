#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {1, 5, 7, 1};
    int = sizeof(arr) / sizeof(arr[0]);
    int k = 6;
    int count = 0;
    unordered_map<int, int> um;
    for (int i = 0; i < n; i++)
    {
        if (um.find(k - arr[i]) != um.end())
        {
            count += um[k - arr[i]];
        }
        um[arr[i]]++;
    }

    cout << count;
}