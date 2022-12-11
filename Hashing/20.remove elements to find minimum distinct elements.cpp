#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {2, 2, 1, 3, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int m = 3;
    if (m > n)
        cout<<0;
    unordered_map<int, int> um;
    for (int i = 0; i < n; i++)
    {
        um[arr[i]]++;
    }
    vector<int> v;
    for (auto x : um)
    {
        v.push_back(x.second);
    }
    sort(v.begin(), v.end());
    int count = 0;
    int i = 0;
    while (m > 0)
    {
        m = m - v[i];
        if (m >= 0)
        {
            count++;
        }
        i++;
    }
    cout<<um.size() - count;
}