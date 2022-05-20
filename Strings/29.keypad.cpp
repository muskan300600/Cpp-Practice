#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string s = "amazon";
    string num;
    char ch;
    string str = "";
    for (int i = 0; i < s.length(); i++)
    {
        ch = s[i];

        if (ch == 'a' || ch == 'b' || ch == 'c')
        {
            num = "2";
        }
        if (ch == 'd' || ch == 'e' || ch == 'f')
        {
            num = "3";
        }
        if (ch == 'g' || ch == 'h' || ch == 'i')
        {
            num = "4";
        }
        if (ch == 'j' || ch == 'k' || ch == 'l')
        {
            num = "5";
        }
        if (ch == 'm' || ch == 'n' || ch == 'o')
        {
            num = "6";
        }
        if (ch == 'p' || ch == 'q' || ch == 'r' || ch == 's')
        {
            num = "7";
        }
        if (ch == 't' || ch == 'u' || ch == 'v')
        {
            num = "8";
        }
        if (ch == 'w' || ch == 'x' || ch == 'y' || ch == 'z')
        {
            num = "9";
        }
        str = str + num;
    }

    cout << str;
}