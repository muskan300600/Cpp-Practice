#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string str1 = "fodr", str2 = "gork";
    if (str1.size() != str2.size()){
        cout<<false;
        break;
    }
    unordered_map<char, int> um;
    for (auto i : str1)
        um[i]++;
    for (auto i : str2)
        um[i]--;
    int sum = 0;
    for (auto i : um)
    {
        sum += abs(i.second);
    }
    if (sum / 2 <= k)
        cout<<true;
    else cout<<false;
}