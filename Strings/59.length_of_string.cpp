#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
    string s = "hello00005";
    int n = s.length();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 97 & s[i] <= 122)
        {
            count++;
        }
    }

    int ans=0;
    for (int i = count; i < n; i++)
    {
        int no = s[i] - '0';
        ans = ans * 10 + no;
    }

    if (ans == count)
    {
        cout << 1;
    }
    else
        cout << 0;
}