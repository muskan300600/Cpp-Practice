#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{
    string A = "capital";
    string B = "valency";
    set<int> s;
    string ans = "";
    for (int i = 0; i < A.length(); i++)
    {
        if (B.find(A[i]) == string::npos)
        {
            s.insert(A[i]);
        }
    }

    for (int i = 0; i < B.length(); i++)
    {
        if (A.find(B[i]) == string::npos)
        {
            s.insert(B[i]);
        }
    }

    if (s.size() == 0)
        ans = ans + "-1";
    for (auto it : s)
    {
        ans += (it);
    }
    cout << ans;
}