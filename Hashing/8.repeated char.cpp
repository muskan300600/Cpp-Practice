#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{
    string s = "missippi";
    unordered_map<char, int> um;
    char val='#';
    for (int i = 0; i < s.length(); i++)
    {
        um[s[i]]++;
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (um[s[i]] >= 2)
        {
            val=s[i];
        }
    }
    cout<<val;;
}