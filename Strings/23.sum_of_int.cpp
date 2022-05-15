#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string str = "12jgk7";
    int sum = 0;
    string s = "";
    str = str + " ";
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        if (isdigit(ch))
            s = s + ch;
        else if (s.length() > 0)
        {
            sum = sum + stoi(s);
            s = "";
        }
    }

    cout << sum;
}