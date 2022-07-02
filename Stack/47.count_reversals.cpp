#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string str = "}{{}}{{{";
    if (str.length() % 2 != 0)
        cout << -1;
    else
    {
        int open = 0, close = 0;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == '{')
                open++;
            else
                open--;
            if (open < 0)
            {
                close++;
                open = 1;
            }
        }
        cout << close + open / 2;
    }
}