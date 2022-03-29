#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string s = "ggggg";
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != s[0])
        {
            count++;
        }
    }

    if (count > 0)
        cout << "No";
    else
        cout << "Yes";
}