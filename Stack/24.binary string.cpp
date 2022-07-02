#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
#include <vector>

bool valid(string str)
{
    int count0 = 0, count1 = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '0')
        {
            count0++;
        }
        else
            count1++;

        if (count0 < count1)
            return false;
    }
    if (count0 == count1)
        return true;
    else
        return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;

        if (valid(str))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}