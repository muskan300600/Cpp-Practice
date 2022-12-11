#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int nums[] = [ 9, 5, 7, 3 ];
    int k = 6;
    int n = sizeof(arr) / sizeof(arr[0]);
    bool val = false;
    if (n % 2 == 1)
        val = false;
    unordered_map<int, int> um;
    for (int i = 0; i < n; i++)
    {
        nums[i] = nums[i] % k;
    }
    for (int i = 0; i < n; i++)
    {
        if (um.find(k - nums[i]) != um.end())
        {
            if (um[k - nums[i]] == 1)
            {
                um.erase(k - nums[i]);
            }
            else
                um[k - nums[i]]--;
        }
        else if (nums[i] != 0)
            um[nums[i]]++;
    }

    int sum = 0;
    for (auto i : um)
    {
        sum += i.second;
    }
    if (sum != 0)
        val = false;
    else
        val = true;
    cout<<val;
}