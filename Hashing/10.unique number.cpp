#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int l = 10;
    int r = 20;
    vector<int> v;
    for (int i = L; i <= R; i++)
    {
        int num = i;
        int count = 0;
        unordered_map<int,int> um;
        while (num)
        {
            int rem = num % 10;
            um[rem]++;
            num = num / 10;
            count++;
        }
        if (um.size() == count)
        {
            v.push_back(i);
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}