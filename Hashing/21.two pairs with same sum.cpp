#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int a[] = {3, 4, 7, 1, 2, 9, 8};
    int n = sizeof(a) / sizeof(a[0]);
    unordered_map<int, int> um;
    int val=0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int sum = a[i] + a[j];
            if (um.find(sum) != um.end())
            {
                val=1;
            }
            um[sum]++;
        }
    }
    cout<<val;
}